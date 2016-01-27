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

/* TEST */

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

%code requires {
  struct FnHdr {
    Identifier *name;
    Type *type;
  };

  struct FnHdrWithParams {
    struct FnHdr header;
    List<VarDecl*> *params;
  };

  struct FnCallHdrWithParams {
    Identifier *name;
    List<Expr*> *params;
  };

  struct StmtList {
    List<VarDecl*> *decls;
    List<Stmt*> *stmts;
  };

  struct SelectRest {
    Stmt *body;
    Stmt *elseBody;
  };

  struct ForRest {
    Expr *test;
    Expr *step;
  };
}

%union {
  int integerConstant;
  bool boolConstant;
  float floatConstant;
  const char *stringConstant;
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
	Operator *opt;
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
  struct FnHdr fnHdr;
  struct FnHdrWithParams fnHdrWithParams;
  struct FnCallHdrWithParams fnCallHdrWithParams;
  struct StmtList stmtList;
  struct SelectRest selectRest;
  struct ForRest forRest;
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
%type <expr> Un_Expr
%type <opt> Un_Op
%type <expr> Mul_Expr
%type <expr> Add_Expr
%type <expr> Rel_Expr
%type <expr> Eq_Expr
%type <expr> Log_And_Expr
%type <expr> Log_Or_Expr
%type <expr> Assn_Expr
%type <opt> Assn_Oper
%type <expr> Expr
%type <decl> Decl
%type <varDecl> VarDecl
%type <fnDecl> Fn_Proto
%type <fnDecl> Fn_Declr
%type <fnHdr> Fn_Hdr
%type <fnHdrWithParams> Fn_Hdr_With_Param
%type <varDecl> Param_Declr
%type <varDecl> Param_Decl
%type <varDecl> Single_Decl
%type <type> Type_Spec
%type <stmt> Stmt
%type <stmt> Simple_Stmt
%type <stmt> Compd_Stmt
%type <stmtList> Stmt_List
%type <expr> Expr_Stmt
%type <ifStmt> Select_Stmt
%type <selectRest> Select_Rest_Stmt
%type <expr> Cond
%type <switchStmt> Switch_Stmt
%type <stmt> Case_Label
%type <loopStmt> Iter_Stmt
%type <expr> For_Init_Stmt
%type <forRest> For_Rest_Stmt
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
                                      @1;
                                      Program *program = new Program($1);
                                      if (ReportError::NumErrors() == 0)
                                          program->Print(0);
                                   }
          ;

Var_Ident : T_Identifier { $$ = new Identifier(@1, $1); }
          ;

Pri_Expr  : Var_Ident { $$ = new VarExpr(@1, $1); }
          | T_IntConstant { $$ = new IntConstant(@1, $1); }
          | T_FloatConstant { $$ = new FloatConstant(@1, $1); }
          | T_BoolConstant { $$ = new BoolConstant(@1, $1); }
          | '(' Expr ')' { $$ = $2; }
          ;

Post_Expr : Pri_Expr { $$ = $1; }
          | Post_Expr '.' T_FieldSelection { $$ = new FieldAccess($1, new Identifier(@3, $3)); }
          | Post_Expr T_Inc { $$ = new PostfixExpr($1, new Operator(@2, "++")); }
          | Post_Expr T_Dec { $$ = new PostfixExpr($1, new Operator(@2, "--")); }
          ;

Un_Expr : Post_Expr { $$ = $1; }
        | T_Inc Un_Expr { $$ = new ArithmeticExpr(new Operator(@1, "++"), $2); }
        | T_Dec Un_Expr { $$ = new ArithmeticExpr(new Operator(@1, "--"),$2); }
        | Un_Op Un_Expr { $$ = new ArithmeticExpr($1,$2); }
        ;

Un_Op : '+' { $$ = new Operator(@1,"+"); }
      | '-' { $$ = new Operator(@1,"-"); }
      ;

Mul_Expr    : Un_Expr { $$ = $1; }
            | Mul_Expr '*' Un_Expr { $$ = new ArithmeticExpr($1,new Operator(@2,"*"),$3); }
            | Mul_Expr '/' Un_Expr { $$ = new ArithmeticExpr($1,new Operator(@2,"/"),$3); }
            ;

Add_Expr    : Mul_Expr { $$ = $1; }
            | Add_Expr '+' Mul_Expr { $$ = new ArithmeticExpr($1,new Operator(@2,"+"),$3); }
            | Add_Expr '-' Mul_Expr { $$ = new ArithmeticExpr($1,new Operator(@2,"-"),$3); }
            ;

Rel_Expr    : Add_Expr { $$ = $1; }
            | Rel_Expr '<' Add_Expr { $$ = new RelationalExpr($1,new Operator(@2,"<"),$3); }
            | Rel_Expr '>' Add_Expr { $$ = new RelationalExpr($1,new Operator(@2,">"),$3); }
            | Rel_Expr T_LessEqual Add_Expr { $$ = new RelationalExpr($1,new Operator(@2,"<="),$3); }
            | Rel_Expr T_GreaterEqual Add_Expr { $$ = new RelationalExpr($1,new Operator(@2,">"),$3); }
            ;

Eq_Expr    : Rel_Expr    { $$ = $1; }
           | Eq_Expr T_Equal Rel_Expr { $$ = new EqualityExpr($1,new Operator(@2,"=="),$3); }
           | Eq_Expr T_NotEqual Rel_Expr { $$ = new EqualityExpr($1,new Operator(@2,"!="),$3); }
           ;

Log_And_Expr : Eq_Expr { $$ = $1; }
             | Log_And_Expr T_And Eq_Expr { $$ = new LogicalExpr($1,new Operator(@2,"&&"),$3); }
             ;

Log_Or_Expr : Log_And_Expr    { $$ = $1; }
            | Log_Or_Expr T_Or Log_And_Expr { $$ = new LogicalExpr($1,new Operator(@2,"||"),$3); }
            ;

Assn_Expr : Log_Or_Expr { $$ = $1; }
          | Un_Expr Assn_Oper Assn_Expr { $$ = new AssignExpr($1,$2,$3); }
          ;

Assn_Oper : '=' { $$ = new Operator(@1,"="); }
          | T_Mul_Assign { $$ = new Operator(@1,"*="); }
          | T_Div_Assign { $$ = new Operator(@1,"/="); }
          | T_Add_Assign { $$ = new Operator(@1,"+="); }
          | T_Sub_Assign { $$ = new Operator(@1,"-="); }
          ;

Expr : Assn_Expr { $$ = $1; }
     ;

Decl : Fn_Proto ';' { $$ = $1; }
     | VarDecl { $$ = $1; }
     ;

VarDecl : Single_Decl ';' { $$ = $1; }
        ;

Fn_Proto : Fn_Declr ')' { $$ = $1; }
         ;

Fn_Declr : Fn_Hdr { $$ = new FnDecl($1.name, $1.type, new List<VarDecl*>()); }
         | Fn_Hdr_With_Param { $$ = new FnDecl($1.header.name, $1.header.type, $1.params); }
         ;

Fn_Hdr_With_Param : Fn_Hdr Param_Decl { $$.header = $1;
                                        ($$.params = new List<VarDecl*>())->Append($2); }
                   | Fn_Hdr_With_Param ',' Param_Decl { $$ = $1; $$.params->Append($3); }
                   ;

Fn_Hdr : Type_Spec T_Identifier '(' { $$.name = new Identifier(@2, $2);
                                            $$.type = $1; }
       ;

Param_Declr : Type_Spec T_Identifier { $$ = new VarDecl(new Identifier(@2, $2), $1); }
            ;

Param_Decl : Param_Declr { $$ = $1; }
           | Type_Spec { $$ = new VarDecl(new Identifier(@1, ""), $1); }
           ;

Single_Decl : Type_Spec T_Identifier { $$ = new VarDecl(new Identifier(@2, $2), $1); }
            ;

Type_Spec : T_Void { $$ = Type::voidType; }
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

Stmt        : Compd_Stmt { $$ = $1; }
            | Simple_Stmt { $$ = $1; }
            ;

Simple_Stmt : Expr_Stmt { $$ = $1; }
            | Select_Stmt { $$ = $1; }
            | Switch_Stmt { $$ = $1; }
            | Case_Label { $$ = $1; }
            | Iter_Stmt { $$ = $1; }
            ;

Compd_Stmt  : '{' '}' { $$ = NULL; }
            | '{' Stmt_List '}' { $$ = new StmtBlock($2.decls, $2.stmts); }
            ;

Stmt_List   : Stmt { $$.decls = new List<VarDecl*>();
                    ($$.stmts = new List<Stmt*>())->Append($1); }
            | VarDecl { $$.stmts = new List<Stmt*>();
                    ($$.decls = new List<VarDecl*>())->Append($1); }
            | Stmt_List Stmt { $$ = $1; $$.stmts->Append($2); }
            | Stmt_List VarDecl { $$ = $1; $$.decls->Append($2); }
            ;

Expr_Stmt   : ';' { $$ = new EmptyExpr(); }
            | Expr ';' { $$ = $1; }
            ;

Select_Stmt : T_If '(' Expr ')' Select_Rest_Stmt { $$ = new IfStmt($3, $5.body, $5.elseBody); }
            ;

Select_Rest_Stmt : Stmt T_Else Stmt { $$.body = $1; $$.elseBody = $3; }
                 | Stmt { $$.body = $1; $$.elseBody = NULL; }
                 ;

Cond    : Expr { $$ = $1; }
        | Type_Spec T_Identifier T_Equal Assn_Expr { 
                    VarExpr *rhs = new VarExpr(@2, new Identifier(@2, $2));
                    Operator *op = new Operator(@3, "==");
                    $$ = new AssignExpr(rhs, op, $4); }
        ;

Switch_Stmt : T_Switch '(' Expr ')' '{' Stmt_List '}' {}
            | T_Switch '(' Expr ')' '{''}' {}
            ;

Case_Label  : T_Case Expr ':' {}
            | T_Default ':' {}
            ;

Iter_Stmt   : T_While '(' Cond ')' Stmt { $$ = new WhileStmt($3, $5); }
            | T_For '(' For_Init_Stmt For_Rest_Stmt ')' Stmt { 
              $$ = new ForStmt($3, $4.test, $4.step, $6); }
            ;

For_Init_Stmt   : Expr_Stmt { $$ = $1; }
                ;

For_Rest_Stmt   : Cond ';' { $$.test = $1; $$.step = NULL; }
                | Cond ';' Expr { $$.test = $1; $$.step = $3; }
                ;


Trans_Unit : Trans_Unit Ext_Decl    { ($$ = $1)->Append($2); }
           | Ext_Decl               { ($$ = new List<Decl*>)->Append($1); }
           ;

Ext_Decl  : Fn_Def                { $$ = $1; }
          | Decl                  { $$ = $1; }
          ;

Fn_Def : Fn_Proto Compd_Stmt { $$ = $1; if ($2) $$->SetFunctionBody($2); }


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
