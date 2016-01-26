
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 11 "parser.y"


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



/* Line 189 of yacc.c  */
#line 92 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 44 "parser.y"

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



/* Line 209 of yacc.c  */
#line 150 "y.tab.c"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Void = 258,
     T_Bool = 259,
     T_Int = 260,
     T_Float = 261,
     T_Vec2 = 262,
     T_Vec3 = 263,
     T_Vec4 = 264,
     T_Mat2 = 265,
     T_Mat3 = 266,
     T_Mat4 = 267,
     T_In = 268,
     T_Out = 269,
     T_Uniform = 270,
     T_Layout = 271,
     T_LessEqual = 272,
     T_GreaterEqual = 273,
     T_Equal = 274,
     T_NotEqual = 275,
     T_And = 276,
     T_Or = 277,
     T_While = 278,
     T_For = 279,
     T_If = 280,
     T_Else = 281,
     T_Return = 282,
     T_Break = 283,
     T_Continue = 284,
     T_Inc = 285,
     T_Dec = 286,
     T_Switch = 287,
     T_Case = 288,
     T_Default = 289,
     T_Mul_Assign = 290,
     T_Div_Assign = 291,
     T_Add_Assign = 292,
     T_Sub_Assign = 293,
     T_Identifier = 294,
     T_FieldSelection = 295,
     T_IntConstant = 296,
     T_FloatConstant = 297,
     T_BoolConstant = 298
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Float 261
#define T_Vec2 262
#define T_Vec3 263
#define T_Vec4 264
#define T_Mat2 265
#define T_Mat3 266
#define T_Mat4 267
#define T_In 268
#define T_Out 269
#define T_Uniform 270
#define T_Layout 271
#define T_LessEqual 272
#define T_GreaterEqual 273
#define T_Equal 274
#define T_NotEqual 275
#define T_And 276
#define T_Or 277
#define T_While 278
#define T_For 279
#define T_If 280
#define T_Else 281
#define T_Return 282
#define T_Break 283
#define T_Continue 284
#define T_Inc 285
#define T_Dec 286
#define T_Switch 287
#define T_Case 288
#define T_Default 289
#define T_Mul_Assign 290
#define T_Div_Assign 291
#define T_Add_Assign 292
#define T_Sub_Assign 293
#define T_Identifier 294
#define T_FieldSelection 295
#define T_IntConstant 296
#define T_FloatConstant 297
#define T_BoolConstant 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 76 "parser.y"

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



/* Line 214 of yacc.c  */
#line 316 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 341 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   595

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,    45,    50,    48,    47,    49,    46,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    55,
      52,    54,    53,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    23,    27,    30,    33,    36,    39,    42,    44,    47,
      51,    54,    56,    58,    60,    63,    66,    69,    71,    73,
      75,    79,    83,    85,    89,    93,    95,    99,   103,   107,
     111,   113,   117,   121,   123,   127,   129,   133,   135,   139,
     141,   143,   145,   147,   149,   151,   154,   156,   160,   163,
     166,   168,   170,   173,   177,   181,   184,   186,   188,   191,
     193,   196,   201,   203,   207,   209,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   254,   256,   259,
     263,   265,   267,   270,   273,   275,   278,   284,   288,   290,
     292,   297,   305,   312,   316,   319,   325,   332,   334,   337,
     341,   344,   346,   348,   350
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,   110,    -1,    39,    -1,    61,    -1,    41,
      -1,    42,    -1,    43,    -1,    44,    79,    45,    -1,    62,
      -1,    64,    -1,    63,    46,    40,    -1,    63,    30,    -1,
      63,    31,    -1,    65,    45,    -1,    66,    45,    -1,    67,
       3,    -1,    67,    -1,    67,    77,    -1,    66,    47,    77,
      -1,    68,    44,    -1,    96,    -1,    61,    -1,    63,    -1,
      30,    69,    -1,    31,    69,    -1,    70,    69,    -1,    48,
      -1,    49,    -1,    69,    -1,    71,    50,    69,    -1,    71,
      51,    69,    -1,    71,    -1,    72,    48,    71,    -1,    72,
      49,    71,    -1,    72,    -1,    73,    52,    72,    -1,    73,
      53,    72,    -1,    73,    17,    72,    -1,    73,    18,    72,
      -1,    73,    -1,    74,    19,    73,    -1,    74,    20,    73,
      -1,    74,    -1,    75,    21,    74,    -1,    75,    -1,    76,
      22,    75,    -1,    76,    -1,    69,    78,    77,    -1,    54,
      -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,    77,
      -1,    82,    55,    -1,    81,    -1,    93,    39,    55,    -1,
      88,    55,    -1,    83,    45,    -1,    85,    -1,    84,    -1,
      85,    87,    -1,    84,    47,    87,    -1,    89,    39,    44,
      -1,    96,    39,    -1,    86,    -1,    96,    -1,    89,    39,
      -1,    96,    -1,    93,    96,    -1,    16,    44,    91,    45,
      -1,    92,    -1,    39,    54,    41,    -1,    94,    -1,    93,
      94,    -1,    95,    -1,    90,    -1,    13,    -1,    14,    -1,
      15,    -1,     3,    -1,     6,    -1,     5,    -1,     4,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,    99,    -1,    98,    -1,   101,    -1,   102,    -1,
     105,    -1,   106,    -1,   107,    -1,    56,    57,    -1,    56,
     100,    57,    -1,    97,    -1,    81,    -1,   100,    97,    -1,
     100,    81,    -1,    55,    -1,    79,    55,    -1,    25,    44,
      79,    45,   103,    -1,    97,    26,    97,    -1,    97,    -1,
      79,    -1,    89,    39,    19,    77,    -1,    32,    44,    79,
      45,    56,   100,    57,    -1,    32,    44,    79,    45,    56,
      57,    -1,    33,    79,    58,    -1,    34,    58,    -1,    23,
      44,   104,    45,    97,    -1,    24,    44,   108,   109,    45,
      97,    -1,   101,    -1,   104,    55,    -1,   104,    55,    79,
      -1,   110,   111,    -1,   111,    -1,   112,    -1,    80,    -1,
      82,    99,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   242,   242,   250,   253,   254,   255,   256,   257,   260,
     261,   262,   263,   264,   267,   268,   271,   272,   275,   277,
     280,   283,   284,   287,   288,   289,   290,   293,   294,   297,
     298,   299,   302,   303,   304,   307,   308,   309,   310,   311,
     314,   315,   316,   319,   320,   323,   324,   327,   328,   331,
     332,   333,   334,   335,   338,   341,   342,   343,   346,   349,
     352,   353,   356,   358,   361,   365,   368,   369,   372,   375,
     376,   379,   382,   385,   388,   389,   392,   393,   396,   397,
     398,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   413,   414,   417,   418,   419,   420,   421,   424,   425,
     428,   430,   432,   433,   436,   437,   440,   443,   444,   447,
     448,   454,   455,   458,   459,   462,   463,   467,   470,   471,
     475,   476,   479,   480,   483
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Float",
  "T_Vec2", "T_Vec3", "T_Vec4", "T_Mat2", "T_Mat3", "T_Mat4", "T_In",
  "T_Out", "T_Uniform", "T_Layout", "T_LessEqual", "T_GreaterEqual",
  "T_Equal", "T_NotEqual", "T_And", "T_Or", "T_While", "T_For", "T_If",
  "T_Else", "T_Return", "T_Break", "T_Continue", "T_Inc", "T_Dec",
  "T_Switch", "T_Case", "T_Default", "T_Mul_Assign", "T_Div_Assign",
  "T_Add_Assign", "T_Sub_Assign", "T_Identifier", "T_FieldSelection",
  "T_IntConstant", "T_FloatConstant", "T_BoolConstant", "'('", "')'",
  "'.'", "','", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'='", "';'",
  "'{'", "'}'", "':'", "$accept", "Program", "Var_Ident", "Pri_Expr",
  "Post_Expr", "Fn_Call", "Fn_Call_Hdr_No_Param", "Fn_Call_Hdr_With_Param",
  "Fn_Call_Hdr", "Fn_Ident", "Un_Expr", "Un_Op", "Mul_Expr", "Add_Expr",
  "Rel_Expr", "Eq_Expr", "Log_And_Expr", "Log_Or_Expr", "Assn_Expr",
  "Assn_Oper", "Expr", "Decl", "VarDecl", "Fn_Proto", "Fn_Declr",
  "Fn_Hdr_With_Param", "Fn_Hdr", "Param_Declr", "Param_Decl",
  "Single_Decl", "Fully_Spec_Type", "Layout_Q", "Layout_ID_List",
  "Layout_ID", "Type_Q", "Single_Type_Q", "Storage_Q", "Type_Spec", "Stmt",
  "Simple_Stmt", "Compd_Stmt", "Stmt_List", "Expr_Stmt", "Select_Stmt",
  "Select_Rest_Stmt", "Cond", "Switch_Stmt", "Case_Label", "Iter_Stmt",
  "For_Init_Stmt", "For_Rest_Stmt", "Trans_Unit", "Ext_Decl", "Fn_Def", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    40,    41,    46,    44,    43,    45,
      42,    47,    60,    62,    61,    59,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    68,    68,    69,    69,    69,    69,    70,    70,    71,
      71,    71,    72,    72,    72,    73,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    78,    78,    78,    79,    80,    80,    80,    81,    82,
      83,    83,    84,    84,    85,    86,    87,    87,    88,    89,
      89,    90,    91,    92,    93,    93,    94,    94,    95,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    97,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   100,   100,   101,   101,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   109,   109,
     110,   110,   111,   111,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     2,     2,     2,     2,     2,     1,     2,     3,
       2,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     2,
       1,     1,     2,     3,     3,     2,     1,     1,     2,     1,
       2,     4,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     1,     2,     2,     1,     2,     5,     3,     1,     1,
       4,     7,     6,     3,     2,     5,     6,     1,     2,     3,
       2,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    81,    84,    83,    82,    85,    86,    87,    88,    89,
      90,    78,    79,    80,     0,     0,   123,    56,     0,     0,
      61,    60,     0,     0,    77,     0,    74,    76,    69,     2,
     121,   122,     0,     1,    55,     0,   124,    59,     0,    66,
      62,    67,    58,    68,     0,    75,    70,   120,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       5,     6,     7,     0,    27,    28,   104,    98,     4,     9,
      23,    10,     0,     0,    17,     0,    29,     0,    32,    35,
      40,    43,    45,    47,    54,     0,   101,     0,     0,    21,
     100,    92,    91,     0,    93,    94,    95,    96,    97,    63,
      65,    64,    57,     0,    71,     0,     0,     0,    24,    21,
      25,     0,     0,   114,     0,    12,    13,     0,    14,    15,
       0,    16,    18,    20,    50,    51,    52,    53,    49,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,    68,    99,   103,   102,    73,   109,
       0,     0,   117,     0,     0,     0,   113,     8,    11,    19,
      48,    30,    31,    29,    33,    34,    38,    39,    36,    37,
      41,    42,    44,    46,     0,     0,     0,     0,     0,     0,
       0,   115,   118,     0,   108,   106,     0,   110,   119,   116,
       0,   112,     0,   107,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   129,
      85,    16,    17,    18,    19,    20,    21,    39,    40,    22,
      87,    24,    49,    50,    88,    26,    27,   109,    90,    91,
      92,    93,    94,    95,   185,   151,    96,    97,    98,   153,
     177,    29,    30,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     126,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -18,    19,   -92,   -92,   -45,   -11,
     -17,   387,    -5,    15,   -92,    67,   -92,   -92,   -92,   126,
     -92,   -92,    21,   -92,   -92,   157,   -92,   -92,   387,   -92,
     -92,    24,   -92,    14,     9,   -92,   -92,   -92,    11,    22,
     -92,    25,    40,    41,   499,   499,    43,   499,     8,   -92,
     -92,   -92,   -92,   499,   -92,   -92,   -92,   -92,    46,   -92,
     -13,   -92,    47,   -25,   546,    51,   -22,   499,   -27,   -21,
     -10,    17,    70,    74,   -92,    42,   -92,    59,   126,    61,
     -92,   -92,   -92,   212,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    63,   -92,   484,   431,   499,   -92,   -92,
     -92,   499,    44,   -92,    64,   -92,   -92,    68,   -92,   -92,
     499,    66,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   499,
     -92,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
      72,    69,   -92,   484,    98,    99,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -27,   -27,   -21,   -21,   -21,   -21,
     -10,   -10,    17,    70,    94,   377,    60,   100,   377,    90,
     499,   -92,   499,   377,   121,   -92,   267,   -92,   -92,   -92,
     377,   -92,   322,   -92,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -15,   -92,   -85,   -91,   -84,     7,    32,   -92,   -68,   -92,
     -54,   -92,   -34,   -92,   -92,   -92,   -92,   -92,   111,   -92,
       2,   -92,   -92,   -92,    12,   -20,   -92,     0,   -89,   -92,
     132,   -35,    48,   -92,   -92,     3,   -92,   -92,   -92,   -92,
     -92,   -92,   128,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -82
static const yytype_int16 yytable[] =
{
      28,    86,    23,   112,   147,    45,   122,   135,   136,   114,
      34,    35,    25,   124,   125,   126,   127,   115,   116,    33,
     119,    41,   120,   131,   132,    46,    32,   133,   134,    28,
      38,    23,   128,   117,    37,    89,   139,   140,    41,   108,
     110,    25,   137,   138,   166,   167,   168,   169,   164,   165,
      42,   149,   159,   154,    43,   170,   171,   155,   101,   146,
      48,   160,   130,   100,   102,   103,   113,   104,    45,   105,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   106,   107,   181,   111,    46,   184,
     -22,   141,   118,    89,   189,   123,   142,   143,   144,   149,
     -69,   193,   156,   147,   148,    89,    44,   150,   158,   157,
     -81,   174,   187,   180,   175,   182,   161,   162,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   188,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   178,   179,   183,   186,   190,   172,    99,
      36,   192,    86,    89,   152,   150,   176,    47,   146,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   173,     0,     0,     0,     0,     0,
      51,    52,    53,     0,     0,     0,    89,    54,    55,    56,
      57,    58,    89,     0,     0,     0,    59,     0,    60,    61,
      62,    63,     0,     0,     0,    64,    65,     0,     0,     0,
       0,     0,    66,    35,    67,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,    51,    52,    53,     0,     0,
       0,     0,    54,    55,    56,    57,    58,     0,     0,     0,
       0,    59,     0,    60,    61,    62,    63,     0,     0,     0,
      64,    65,     0,     0,     0,     0,     0,    66,    35,   145,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,     0,     0,
      51,    52,    53,     0,     0,     0,     0,    54,    55,    56,
      57,    58,     0,     0,     0,     0,    59,     0,    60,    61,
      62,    63,     0,     0,     0,    64,    65,     0,     0,     0,
       0,     0,    66,    35,   191,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,     0,     0,    51,    52,    53,     0,     0,
       0,     0,    54,    55,    56,    57,    58,     0,     0,     0,
       0,    59,     0,    60,    61,    62,    63,     0,     0,     0,
      64,    65,     0,     0,     0,     0,     0,    66,    35,   194,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      51,    52,    53,     0,     0,     0,     0,    54,    55,    56,
      57,    58,     0,     0,     0,     0,    59,     0,    60,    61,
      62,    63,     0,     0,     0,    64,    65,     0,     0,     0,
       0,     0,    66,    35,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,     0,     0,     0,     0,     0,     0,     0,
      59,     0,    60,    61,    62,    63,     0,     0,     0,    64,
      65,     0,     0,     0,     0,     0,    66,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,    54,    55,     0,     0,     0,     0,
       0,     0,     0,    59,     0,    60,    61,    62,    63,    54,
      55,     0,    64,    65,     0,     0,     0,     0,    59,     0,
      60,    61,    62,    63,     0,     0,     0,    64,    65,   121,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,     0,     0,
       0,     0,     0,     0,     0,    59,     0,    60,    61,    62,
      63,     0,     0,     0,    64,    65
};

static const yytype_int16 yycheck[] =
{
       0,    35,     0,    57,    93,    25,    74,    17,    18,    63,
      55,    56,     0,    35,    36,    37,    38,    30,    31,     0,
      45,    21,    47,    50,    51,    25,    44,    48,    49,    29,
      47,    29,    54,    46,    45,    35,    19,    20,    38,    54,
      55,    29,    52,    53,   135,   136,   137,   138,   133,   134,
      55,   105,   120,   107,    39,   139,   140,   111,    44,    93,
      39,   129,    77,    39,    55,    54,    58,    45,    88,    44,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    44,    44,   175,    44,    88,   178,
      44,    21,    45,    93,   183,    44,    22,    55,    39,   153,
      39,   190,    58,   192,    41,   105,    39,   105,    40,    45,
      44,    39,   180,    19,    45,    55,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   182,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    45,    45,    45,    56,    26,   141,    38,
      18,   186,   186,   153,   106,   153,   153,    29,   192,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,   142,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,   186,    30,    31,    32,
      33,    34,   192,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    55,    56,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    -1,    55,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    30,
      31,    -1,    48,    49,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    -1,    -1,    -1,    48,    49,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    -1,    48,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    60,    80,    81,    82,    83,
      84,    85,    88,    89,    90,    93,    94,    95,    96,   110,
     111,   112,    44,     0,    55,    56,    99,    45,    47,    86,
      87,    96,    55,    39,    39,    94,    96,   111,    39,    91,
      92,    23,    24,    25,    30,    31,    32,    33,    34,    39,
      41,    42,    43,    44,    48,    49,    55,    57,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    79,    81,    89,    93,    96,
      97,    98,    99,   100,   101,   102,   105,   106,   107,    87,
      39,    44,    55,    54,    45,    44,    44,    44,    69,    96,
      69,    44,    79,    58,    79,    30,    31,    46,    45,    45,
      47,     3,    77,    44,    35,    36,    37,    38,    54,    78,
      69,    50,    51,    48,    49,    17,    18,    52,    53,    19,
      20,    21,    22,    55,    39,    57,    81,    97,    41,    79,
      89,   104,   101,   108,    79,    79,    58,    45,    40,    77,
      77,    69,    69,    69,    71,    71,    72,    72,    72,    72,
      73,    73,    74,    75,    39,    45,   104,   109,    45,    45,
      19,    97,    55,    45,    97,   103,    56,    77,    79,    97,
      26,    57,   100,    97,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {
                                      (yylsp[(1) - (1)]);
                                      Program *program = new Program((yyvsp[(1) - (1)].declList));
                                      if (ReportError::NumErrors() == 0)
                                          program->Print(0);
                                   }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    { (yyval.ident) = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier)); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { (yyval.expr) = new FieldAccess(NULL, (yyvsp[(1) - (1)].ident)); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    { (yyval.expr) = new IntConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].integerConstant)); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    { (yyval.expr) = new FloatConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].floatConstant)); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    { (yyval.expr) = new BoolConstant((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].boolConstant)); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].call); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    { (yyval.expr) = new FieldAccess((yyvsp[(1) - (3)].expr), new Identifier((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].identifier))); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    { (yyval.expr) = new PostfixExpr((yyvsp[(1) - (2)].expr), new Operator((yylsp[(2) - (2)]), "++")); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    { (yyval.expr) = new PostfixExpr((yyvsp[(1) - (2)].expr), new Operator((yylsp[(2) - (2)]), "--")); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    { (yyval.call) = new Call((yylsp[(1) - (2)]), NULL, (yyvsp[(1) - (2)].ident), new List<Expr*>()); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    { (yyval.call) = new Call((yylsp[(1) - (2)]), NULL, (yyvsp[(1) - (2)].fnCallHdrWithParams).name, (yyvsp[(1) - (2)].fnCallHdrWithParams).params); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    { (yyval.ident) = (yyvsp[(1) - (2)].ident); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { (yyval.ident) = (yyvsp[(1) - (1)].ident); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { ((yyval.fnCallHdrWithParams).params = new List<Expr*>())->Append((yyvsp[(2) - (2)].expr)); 
                                                  (yyval.fnCallHdrWithParams).name = (yyvsp[(1) - (2)].ident); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    { (yyval.fnCallHdrWithParams) = (yyvsp[(1) - (3)].fnCallHdrWithParams); (yyval.fnCallHdrWithParams).params->Append((yyvsp[(3) - (3)].expr)); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    { (yyval.ident) = (yyvsp[(1) - (2)].ident); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    { (yyval.ident) = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].stringConstant)); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    { (yyval.ident) = (yyvsp[(1) - (1)].ident); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), "++"), (yyvsp[(2) - (2)].expr)); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    { (yyval.expr) = new ArithmeticExpr(new Operator((yylsp[(1) - (2)]), "--"),(yyvsp[(2) - (2)].expr)); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (2)].opt),(yyvsp[(2) - (2)].expr)); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    { (yyval.opt) = new Operator((yylsp[(1) - (1)]),"+"); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    { (yyval.opt) = new Operator((yylsp[(1) - (1)]),"-"); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"*"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"/"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"+"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { (yyval.expr) = new ArithmeticExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"-"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"<"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),">"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"<="),(yyvsp[(3) - (3)].expr)); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    { (yyval.expr) = new RelationalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),">"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    { (yyval.expr) = new EqualityExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"=="),(yyvsp[(3) - (3)].expr)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    { (yyval.expr) = new EqualityExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"!="),(yyvsp[(3) - (3)].expr)); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    { (yyval.expr) = new LogicalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"&&"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    { (yyval.expr) = new LogicalExpr((yyvsp[(1) - (3)].expr),new Operator((yylsp[(2) - (3)]),"||"),(yyvsp[(3) - (3)].expr)); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    { (yyval.expr) = new AssignExpr((yyvsp[(1) - (3)].expr),(yyvsp[(2) - (3)].opt),(yyvsp[(3) - (3)].expr)); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    { (yyval.opt) = new Operator((yylsp[(1) - (1)]),"="); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    { (yyval.opt) = new Operator((yylsp[(1) - (1)]),"*="); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 333 "parser.y"
    { (yyval.opt) = new Operator((yylsp[(1) - (1)]),"/="); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 334 "parser.y"
    { (yyval.opt) = new Operator((yylsp[(1) - (1)]),"+="); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    { (yyval.opt) = new Operator((yylsp[(1) - (1)]),"-="); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 341 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (2)].fnDecl); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].varDecl); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 343 "parser.y"
    {}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 346 "parser.y"
    { (yyval.varDecl) = (yyvsp[(1) - (2)].varDecl); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (2)].fnDecl); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    { (yyval.fnDecl) = new FnDecl((yyvsp[(1) - (1)].fnHdr).name, (yyvsp[(1) - (1)].fnHdr).type, new List<VarDecl*>()); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 353 "parser.y"
    { (yyval.fnDecl) = new FnDecl((yyvsp[(1) - (1)].fnHdrWithParams).header.name, (yyvsp[(1) - (1)].fnHdrWithParams).header.type, (yyvsp[(1) - (1)].fnHdrWithParams).params); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    { (yyval.fnHdrWithParams).header = (yyvsp[(1) - (2)].fnHdr);
                                        ((yyval.fnHdrWithParams).params = new List<VarDecl*>())->Append((yyvsp[(2) - (2)].varDecl)); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    { (yyval.fnHdrWithParams) = (yyvsp[(1) - (3)].fnHdrWithParams); (yyval.fnHdrWithParams).params->Append((yyvsp[(3) - (3)].varDecl)); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 361 "parser.y"
    { (yyval.fnHdr).name = new Identifier((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].identifier));
                                            (yyval.fnHdr).type = (yyvsp[(1) - (3)].type); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier)), new Type((yyvsp[(1) - (2)].stringConstant))); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    { (yyval.varDecl) = (yyvsp[(1) - (1)].varDecl); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    { (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(1) - (1)]), ""), new Type((yyvsp[(1) - (1)].stringConstant))); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    { (yyval.varDecl) = new VarDecl(new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier)), (yyvsp[(1) - (2)].type)); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    { (yyval.type) = new Type((yyvsp[(1) - (1)].stringConstant)); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    { (yyval.type) = new Type((yyvsp[(2) - (2)].stringConstant)); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    {}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 382 "parser.y"
    {}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 385 "parser.y"
    {}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    {}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    {}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 392 "parser.y"
    {}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 393 "parser.y"
    {}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
    {}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 397 "parser.y"
    {}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    {}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    { (yyval.stringConstant) = "void"; }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 402 "parser.y"
    { (yyval.stringConstant) = "float"; }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 403 "parser.y"
    { (yyval.stringConstant) = "int"; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 404 "parser.y"
    { (yyval.stringConstant) = "bool"; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 405 "parser.y"
    { (yyval.stringConstant) = "vec2"; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
    { (yyval.stringConstant) = "vec3"; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 407 "parser.y"
    { (yyval.stringConstant) = "vec4"; }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 408 "parser.y"
    { (yyval.stringConstant) = "mat2"; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 409 "parser.y"
    { (yyval.stringConstant) = "mat3"; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    { (yyval.stringConstant) = "mat4"; }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 413 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].expr); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 418 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].ifStmt); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 419 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].switchStmt); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].loopStmt); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 424 "parser.y"
    { (yyval.stmt) = new StmtBlock(new List<VarDecl*>(), new List<Stmt*>()); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 425 "parser.y"
    { (yyval.stmt) = new StmtBlock((yyvsp[(2) - (3)].stmtList).decls, (yyvsp[(2) - (3)].stmtList).stmts); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    { (yyval.stmtList).decls = new List<VarDecl*>();
                    ((yyval.stmtList).stmts = new List<Stmt*>())->Append((yyvsp[(1) - (1)].stmt)); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 430 "parser.y"
    { (yyval.stmtList).stmts = new List<Stmt*>();
                    ((yyval.stmtList).decls = new List<VarDecl*>())->Append((yyvsp[(1) - (1)].varDecl)); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    { (yyval.stmtList) = (yyvsp[(1) - (2)].stmtList); (yyval.stmtList).stmts->Append((yyvsp[(2) - (2)].stmt)); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    { (yyval.stmtList) = (yyvsp[(1) - (2)].stmtList); (yyval.stmtList).decls->Append((yyvsp[(2) - (2)].varDecl)); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 436 "parser.y"
    { (yyval.expr) = new EmptyExpr(); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (2)].expr); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 440 "parser.y"
    { (yyval.ifStmt) = new IfStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].selectRest).body, (yyvsp[(5) - (5)].selectRest).elseBody); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    { (yyval.selectRest).body = (yyvsp[(1) - (3)].stmt); (yyval.selectRest).elseBody = (yyvsp[(3) - (3)].stmt); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 444 "parser.y"
    { (yyval.selectRest).body = (yyvsp[(1) - (1)].stmt); (yyval.selectRest).elseBody = NULL; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 447 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 448 "parser.y"
    { 
                    FieldAccess *wrapper = new FieldAccess(NULL, new Identifier((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier)));
                    Operator *op = new Operator((yylsp[(3) - (4)]), "==");
                    (yyval.expr) = new AssignExpr(wrapper, op, (yyvsp[(4) - (4)].expr)); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 454 "parser.y"
    {}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    {}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 458 "parser.y"
    {}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    {}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    { (yyval.loopStmt) = new WhileStmt((yyvsp[(3) - (5)].expr), (yyvsp[(5) - (5)].stmt)); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    { 
              (yyval.loopStmt) = new ForStmt((yyvsp[(3) - (6)].expr), (yyvsp[(4) - (6)].forRest).test, (yyvsp[(4) - (6)].forRest).step, (yyvsp[(6) - (6)].stmt)); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 467 "parser.y"
    { (yyval.expr) = (yyvsp[(1) - (1)].expr); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 470 "parser.y"
    { (yyval.forRest).test = (yyvsp[(1) - (2)].expr); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 471 "parser.y"
    { (yyval.forRest).test = (yyvsp[(1) - (3)].expr); (yyval.forRest).step = (yyvsp[(3) - (3)].expr); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 475 "parser.y"
    { ((yyval.declList) = (yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 476 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 479 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 480 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].decl); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 483 "parser.y"
    { ((yyval.fnDecl) = (yyvsp[(1) - (2)].fnDecl))->SetFunctionBody((yyvsp[(2) - (2)].stmt)); }
    break;



/* Line 1455 of yacc.c  */
#line 2725 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 486 "parser.y"


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
