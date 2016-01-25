/* File: parser.y
 * --------------
 * Bison input file to generate the parser for the compiler.
 *
 * pp2: your job is to write a parser that will construct the parse tree
 *      and if no parse errors were found, print it.  The parser should
 *      accept the language as described in specification, and as augmented
 *      in the pp2 handout.
 */

%{

/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"

void yyerror(const char *msg); // standard error-handling routine

%}

/* The section before the first %% is the Definitions section of the yacc
 * input file. Here is where you declare tokens and types, add precedence
 * and associativity options, and so on.
 */

/* yylval
 * ------
 * Here we define the type of the yylval global variable that is used by
 * the scanner to store attibute information about the token just scanned
 * and thus communicate that information to the parser.
 *
 * pp2: You will need to add new fields to this union as you add different
 *      attributes to your non-terminal symbols.
 */
%union {
  void none;
  int integerConstant;
  bool boolConstant;
  float floatConstant;
  char identifier[MaxIdentLen+1]; // +1 for terminating null
	Node *node;
	Identifier *ident;
	Error *error;
	Decl *decl;
  List<Decl*> *declList;
	VarDecl *varDecl;
  List<VarDecl*> *varDeclList;
	VarDeclError *varDeclError;
	FnDecl *fnDecl;
	FormalsError *formalsError;
	Expr *expr;
	ExprError *exprError;
	EmptyExpr *emptyExpr;
	IntConstant *intConst;
	FloatConstant *floatConst;
	BoolConstant *boolConst;
	Operator *_operator;
	CompoundExpr *compoundExpr;
	ArithmeticExpr *arithmeticExpr;
	RelationalExpr *relationalExpr;
	EqualityExpr *equalityExpr;
	LogicalExpr *logicalExpr;
	AssignExpr *assignExpr;
	PostfixExpr *postfixExpr;
	LValue *lValue;
	ArrayAccess *arrayAccess;
	FieldAccess *fieldAccess;
	Call *call;
	ActualsError *actualsError;
	Program *program;
	Stmt *stmt;
	StmtBlock *stmtBlock;
	ConditionalStmt *conditionalStmt;
	LoopStmt *loopStmt;
	ForStmt *forStmt;
	WhileStmt *whileStmt;
	IfStmt *ifStmt;
	IfStmtExprError *ifStmtExprError;
	BreakStmt *breakStmt;
	ReturnStmt *returnStmt;
	SwitchLabel *switchLabel;
	Case *_case;
	Default *_default;
	SwitchStmt *switchStmt;
	SwitchStmtError *switchStmtError;
	Type *type;
	ArrayType *arrayType;
}


/* Tokens
 * ------
 * Here we tell yacc about all the token types that we are using.
 * Bison will assign unique numbers to these and export the #define
 * in the generated y.tab.h header file.
 */
%token   T_Void T_Bool T_Int T_Float
%token   T_Vec2 T_Vec3 T_Vec4
%token   T_Mat2 T_Mat3 T_Mat4
%token   T_In T_Out
%token   T_Uniform
%token   T_Layout

%token   T_LessEqual T_GreaterEqual T_Equal T_NotEqual
%token   T_And T_Or
%token   T_While T_For T_If T_Else T_Return T_Break T_Continue
%token   T_Inc T_Dec T_Switch T_Case T_Default T_Mul_Assign T_Div_Assign T_Add_Assign T_Sub_Assign

%token   <identifier> T_Identifier
%token   <identifier> T_FieldSelection
%token   <integerConstant> T_IntConstant
%token   <floatConstant> T_FloatConstant
%token   <boolConstant> T_BoolConstant


/* Non-terminal types
 * ------------------
 * In order for yacc to assign/access the correct field of $$, $1, we
 * must to declare which field is appropriate for the non-terminal.
 * As an example, this first type declaration establishes that the DeclList
 * non-terminal uses the field named "declList" in the yylval union. This
 * means that when we are setting $$ for a reduction for DeclList ore reading
 * $n which corresponds to a DeclList nonterminal we are accessing the field
 * of the union named "declList" which is of type List<Decl*>.
 * pp2: You'll need to add many of these of your own.
 */

%type <ident> Var_Ident
%type <expr> Pri_Expr
%type <expr> Post_Expr

%type <node> Fn_Call
%type <node> Fn_Call_Hdr_No_Param
%type <node> Fn_Call_Hdr_With_Param
%type <node> Fn_Call_Hdr
%type <node> Fn_Ident

%type <expr> Un_Expr
%type <operator> Un_Op
%type <node> Mul_Expr
%type <node> Add_Expr
%type <node> Rel_Expr
%type <node> Eq_Expr
%type <node> Log_And_Expr
%type <node> Log_Or_Expr
%type <node> Assn_Expr
%type <node> Assn_Oper
%type <node> Expr

%type <decl> Decl
%type <node> Fn_Proto
%type <node> Fn_Declr
%type <node> Fn_Hdr
%type <node> Fn_Hdr_With_Param
%type <node> Param_Declr
%type <node> Param_Decl
%type <node> Single_Decl
%type <node> Fully_Spec_Type
%type <node> Layout_Q
%type <node> Layout_ID_List
%type <node> Layout_ID
%type <node> Type_Q
%type <node> Single_Type_Q
%type <node> Storage_Q
%type <node> Type_Spec
%type <node> Decl_Stmt
%type <node> Stmt
%type <node> Simple_Stmt
%type <node> Compd_Stmt
%type <node> Stmt_List
%type <node> Expr_Stmt
%type <node> Select_Stmt
%type <node> Select_Rest_Stmt
%type <node> Cond
%type <node> Switch_Stmt
%type <node> Switch_Stmt_List
%type <node> Case_Label
%type <node> Iter_Stmt
%type <node> For_Init_Stmt
%type <node> For_Rest_Stmt
%type <declList> Trans_Unit
%type <decl> Ext_Decl
%type <fnDecl> Fn_Def
%type <program> Program

%%
/* Rules
 * -----
 * All productions and actions should be placed between the start and stop
 * %% markers which delimit the Rules section.

 */


Program   : Trans_Unit             {
                                  /*
                                      @1;
                                      Program *program = new Program($1);
                                      if (ReportError::NumErrors() == 0)
                                          program->Print(0);
                                          */
                                   }
          ;

Var_Ident : T_Identifier { $$ = new Identifier(@1, $1); }
          ;

Pri_Expr  : Var_Ident { $$ = new FieldAccess(NULL, $1); }
          | T_IntConstant { $$ = new IntConstant(@1, $1); }
          | T_FloatConstant { $$ = new FloatConstant(@1, $1); }
          | T_BoolConstant { $$ = new BoolConstant(@1, $1); }
          | '(' Expr ')' { $$ = $2; }
          ;

Post_Expr : Pri_Expr { $$ = $1; }
          | Fn_Call { $$ = $1; }
          | Post_Expr '.' T_FieldSelection { $$ = new FieldAccess($1, $3); }
          | Post_Expr T_Inc { $$ = new PostfixExpr($1, new Operator(@2, "++")); }
          | Post_Expr T_Dec { $$ = new PostfixExpr($1, new Operator(@2, "--")); }
          ;

Fn_Call  : Fn_Call_Hdr_No_Param ')' {}
         | Fn_Call_Hdr_With_Param ')' {}
         ;

Fn_Call_Hdr_No_Param  : Fn_Call_Hdr T_Void {}
                      | Fn_Call_Hdr {}
                      ;

Fn_Call_Hdr_With_Param : Fn_Call_Hdr Assn_Expr {}
                       | Fn_Call_Hdr_With_Param ',' Assn_Expr {}
                       ;

Fn_Call_Hdr : Fn_Ident '(' {}
            ;

Fn_Ident : Type_Spec {}
         | Post_Expr {}
         ;

Un_Expr : Post_Expr { $$ = $1; }
        | T_Inc Un_Expr { $$ = new CompoundExpr(new Operator(@1, "++"), $2); }
        | T_Dec Un_Expr {}
        | Un_Op Un_Expr {}
        ;

Un_Op : '+' {}
      | '-' {}
      ;

Mul_Expr    : Un_Expr {}
            | Mul_Expr '*' Un_Expr {}
            | Mul_Expr '/' Un_Expr {}
            ;

Add_Expr    : Mul_Expr {}
            | Add_Expr '+' Mul_Expr {}
            | Add_Expr '-' Mul_Expr {}
            ;

Rel_Expr    : Add_Expr {}
            | Rel_Expr '<' Add_Expr {}
            | Rel_Expr '>' Add_Expr {}
            | Rel_Expr T_LessEqual Add_Expr {}
            | Rel_Expr T_GreaterEqual Add_Expr {}
            ;

Eq_Expr    : Rel_Expr    {}
           | Eq_Expr T_Equal Rel_Expr {}
           | Eq_Expr T_NotEqual Rel_Expr {}
           ;

Log_And_Expr : Eq_Expr {}
             | Log_And_Expr T_And Eq_Expr {}
             ;

Log_Or_Expr : Log_And_Expr    {}
            | Log_Or_Expr T_Or Log_And_Expr {}
            ;

Assn_Expr : Log_Or_Expr {}
          | Un_Expr Assn_Oper Assn_Expr {}
          ;

Assn_Oper : '=' {}
          | T_Mul_Assign {}
          | T_Div_Assign {}
          | T_Add_Assign {}
          | T_Sub_Assign {}
          ;

Expr : Assn_Expr {}
     ;

Decl : Fn_Proto ';' {}
     | Single_Decl ';' {}
     | Type_Q T_Identifier ';' {}
     ;


Fn_Proto : Fn_Declr ')' {}
         ;

Fn_Declr : Fn_Hdr {}
         | Fn_Hdr_With_Param {}
         ;

Fn_Hdr_With_Param : Fn_Hdr Param_Decl {}
                   | Fn_Hdr_With_Param ',' Param_Decl {}
                   ;

Fn_Hdr : Fully_Spec_Type T_Identifier '(' {}
       ;

Param_Declr : Type_Spec T_Identifier {}
            ;

Param_Decl : Param_Declr {}
           | Type_Spec {}
           ;

Single_Decl : Fully_Spec_Type T_Identifier {}
            ;

Fully_Spec_Type : Type_Spec {}
                | Type_Q Type_Spec {}
                ;

Layout_Q : T_Layout '(' Layout_ID_List ')' {}
         ;

Layout_ID_List : Layout_ID {}
               ;

Layout_ID : T_Identifier '=' T_IntConstant {}
          ;

Type_Q : Single_Type_Q {}
       | Type_Q Single_Type_Q {}
       ;

Single_Type_Q   : Storage_Q {}
                | Layout_Q     {}
                ;

Storage_Q       : T_In {}
                | T_Out {}
                | T_Uniform {}
                ;

Type_Spec :        T_Void { $$ = Type::voidType; }
                 | T_Float{ $$ = Type::floatType; }
                 | T_Int  { $$ = Type::intType; }
                 | T_Bool { $$ = Type::boolType; }
                 | T_Vec2 { $$ = Type::vec2Type; }
                 | T_Vec3 { $$ = Type::vec3Type; }
                 | T_Vec4 { $$ = Type::vec4Type; }
                 | T_Mat2 { $$ = Type::mat2Type; }
                 | T_Mat3 { $$ = Type::mat3Type; }
                 | T_Mat4 { $$ = Type::mat4Type; }
                 ;

Decl_Stmt   : Decl {}
            ;

Stmt        : Compd_Stmt {}
            | Simple_Stmt {}
            ;

Simple_Stmt : Decl_Stmt {}
            | Expr_Stmt {}
            | Select_Stmt {}
            | Switch_Stmt {}
            | Case_Label {}
            | Iter_Stmt {}
            ;

Compd_Stmt  : '{' '}' {}
            | '{' Stmt_List '}' {}
            ;

Stmt_List   : Stmt {}
            | Stmt_List Stmt {}
            ;

Expr_Stmt   : ';' {}
            | Expr ';' {}
            ;

Select_Stmt : T_If '(' Expr ')' Select_Rest_Stmt {}
            ;

Select_Rest_Stmt : Stmt T_Else Stmt {}
                 | Stmt {}
                 ;

Cond    : Expr {}
        | Fully_Spec_Type T_Identifier T_Equal Assn_Expr {}
        ;

Switch_Stmt : T_Switch '(' Expr ')' '{' Switch_Stmt_List '}' {}
            | T_Switch '(' Expr ')' '{''}' {}
            ;

Switch_Stmt_List : Stmt_List {}
                 ;

Case_Label  : T_Case Expr ':' {}
            | T_Default ':' {}
            ;

Iter_Stmt   : T_While '(' Cond ')' Stmt {}
            | T_For '(' For_Init_Stmt For_Rest_Stmt ')' Stmt {}
            ;

For_Init_Stmt   : Expr_Stmt {}
                | Decl_Stmt {}
                ;

For_Rest_Stmt   : Cond ';' {}
                | Cond ';' Expr {}
                ;


Trans_Unit : Trans_Unit Ext_Decl    { }
           | Ext_Decl               { }
           ;

Ext_Decl  : Fn_Def                { $$ = $1; }
          | Decl                  { $$ = $1; }
          ;

Fn_Def : Fn_Proto Compd_Stmt {}


%%

/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global varAt the top level, the program is composed of a series of declarations (a declList).  We have the declaration of global, and then the declaration of main.  The problem is, the declaration of global also involved an assignment.  Because a program must be a series of declarations, it seems that "int global = 5;" must produce a declaration that is somehow composed of an assignment.  How do we approach this?iable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}
