
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
#define YYLSP_NEEDED 0



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

void yyerror(const char *msg); // standard error-handling routine



/* Line 189 of yacc.c  */
#line 90 "y.tab.c"

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
     T_BVec2 = 262,
     T_BVec3 = 263,
     T_BVec4 = 264,
     T_IVec2 = 265,
     T_IVec3 = 266,
     T_IVec4 = 267,
     T_UVec2 = 268,
     T_UVec3 = 269,
     T_UVec4 = 270,
     T_Vec2 = 271,
     T_Vec3 = 272,
     T_Vec4 = 273,
     T_Mat2 = 274,
     T_Mat3 = 275,
     T_Mat4 = 276,
     T_Struct = 277,
     T_FieldSelection = 278,
     T_In = 279,
     T_Out = 280,
     T_InOut = 281,
     T_Const = 282,
     T_Uniform = 283,
     T_Layout = 284,
     T_LessEqual = 285,
     T_GreaterEqual = 286,
     T_Equal = 287,
     T_NotEqual = 288,
     T_And = 289,
     T_Or = 290,
     T_While = 291,
     T_For = 292,
     T_If = 293,
     T_Else = 294,
     T_Return = 295,
     T_Break = 296,
     T_Continue = 297,
     T_Do = 298,
     T_Inc = 299,
     T_Dec = 300,
     T_Switch = 301,
     T_Case = 302,
     T_Default = 303,
     T_Mul_Assign = 304,
     T_Div_Assign = 305,
     T_Add_Assign = 306,
     T_Sub_Assign = 307,
     T_Identifier = 308,
     T_IntConstant = 309,
     T_FloatConstant = 310,
     T_BoolConstant = 311
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Float 261
#define T_BVec2 262
#define T_BVec3 263
#define T_BVec4 264
#define T_IVec2 265
#define T_IVec3 266
#define T_IVec4 267
#define T_UVec2 268
#define T_UVec3 269
#define T_UVec4 270
#define T_Vec2 271
#define T_Vec3 272
#define T_Vec4 273
#define T_Mat2 274
#define T_Mat3 275
#define T_Mat4 276
#define T_Struct 277
#define T_FieldSelection 278
#define T_In 279
#define T_Out 280
#define T_InOut 281
#define T_Const 282
#define T_Uniform 283
#define T_Layout 284
#define T_LessEqual 285
#define T_GreaterEqual 286
#define T_Equal 287
#define T_NotEqual 288
#define T_And 289
#define T_Or 290
#define T_While 291
#define T_For 292
#define T_If 293
#define T_Else 294
#define T_Return 295
#define T_Break 296
#define T_Continue 297
#define T_Do 298
#define T_Inc 299
#define T_Dec 300
#define T_Switch 301
#define T_Case 302
#define T_Default 303
#define T_Mul_Assign 304
#define T_Div_Assign 305
#define T_Add_Assign 306
#define T_Sub_Assign 307
#define T_Identifier 308
#define T_IntConstant 309
#define T_FloatConstant 310
#define T_BoolConstant 311




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 41 "parser.y"

  int integerConstant;
  bool boolConstant;
  char *stringConstant;
  double doubleConstant;
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
	NamedType *namedType;
	ArrayType *arrayType;



/* Line 214 of yacc.c  */
#line 296 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 308 "y.tab.c"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   947

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNRULES -- Number of states.  */
#define YYNSTATES  289

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,    58,    65,    63,    62,    64,    61,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    70,
      67,    69,    68,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,    72,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      24,    26,    30,    33,    36,    38,    41,    44,    47,    49,
      52,    56,    59,    61,    63,    65,    68,    71,    74,    76,
      78,    80,    84,    88,    90,    94,    98,   100,   104,   108,
     112,   116,   118,   122,   126,   128,   132,   134,   138,   140,
     142,   146,   148,   150,   152,   154,   156,   158,   162,   164,
     167,   170,   174,   179,   182,   186,   189,   191,   193,   197,
     200,   204,   207,   211,   214,   216,   219,   221,   223,   225,
     229,   234,   241,   247,   249,   252,   256,   262,   267,   269,
     272,   277,   279,   283,   285,   289,   291,   294,   296,   298,
     300,   302,   304,   306,   308,   310,   313,   316,   320,   324,
     329,   331,   333,   335,   337,   339,   341,   343,   345,   347,
     349,   351,   353,   355,   357,   359,   361,   363,   365,   367,
     369,   375,   380,   382,   385,   389,   394,   396,   400,   402,
     405,   407,   409,   411,   413,   415,   417,   419,   421,   423,
     425,   427,   430,   434,   436,   439,   441,   444,   450,   454,
     456,   458,   463,   471,   473,   477,   480,   486,   494,   501,
     503,   505,   508,   512,   515,   518,   521,   525,   528,   530,
     532,   534
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      75,     0,    -1,   140,    -1,    53,    -1,    54,    -1,    55,
      -1,    56,    -1,    57,    95,    58,    -1,    76,    -1,    77,
      59,    78,    60,    -1,    79,    -1,    77,    61,    23,    -1,
      77,    44,    -1,    77,    45,    -1,    95,    -1,    80,    58,
      -1,    81,    58,    -1,    82,     3,    -1,    82,    -1,    82,
      93,    -1,    81,    62,    93,    -1,    83,    57,    -1,   115,
      -1,    77,    -1,    77,    -1,    44,    84,    -1,    45,    84,
      -1,    85,    84,    -1,    63,    -1,    64,    -1,    84,    -1,
      86,    65,    84,    -1,    86,    66,    84,    -1,    86,    -1,
      87,    63,    86,    -1,    87,    64,    86,    -1,    87,    -1,
      88,    67,    87,    -1,    88,    68,    87,    -1,    88,    30,
      87,    -1,    88,    31,    87,    -1,    88,    -1,    89,    32,
      88,    -1,    89,    33,    88,    -1,    89,    -1,    90,    34,
      89,    -1,    90,    -1,    91,    35,    90,    -1,    91,    -1,
      92,    -1,    84,    94,    93,    -1,    69,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    93,    -1,    95,    62,
      93,    -1,    92,    -1,   106,    70,    -1,   112,    70,    -1,
     112,    53,    70,    -1,   112,    53,    98,    70,    -1,    62,
      53,    -1,    98,    62,    53,    -1,   100,    58,    -1,   101,
      -1,   102,    -1,   108,    53,    57,    -1,   101,   104,    -1,
     102,    62,   104,    -1,   115,    53,    -1,   115,    53,   116,
      -1,   112,   103,    -1,   103,    -1,   112,   105,    -1,   105,
      -1,   115,    -1,   107,    -1,   106,    62,    53,    -1,   106,
      62,    53,   116,    -1,   106,    62,    53,   116,    69,   123,
      -1,   106,    62,    53,    69,   123,    -1,   108,    -1,   108,
      53,    -1,   108,    53,   116,    -1,   108,    53,   116,    69,
     123,    -1,   108,    53,    69,   123,    -1,   115,    -1,   112,
     115,    -1,    29,    57,   110,    58,    -1,   111,    -1,   110,
      62,   111,    -1,    53,    -1,    53,    69,    54,    -1,   113,
      -1,   112,   113,    -1,   114,    -1,   109,    -1,    27,    -1,
      24,    -1,    25,    -1,    26,    -1,    28,    -1,   117,    -1,
     117,   116,    -1,    59,    60,    -1,    59,    96,    60,    -1,
     116,    59,    60,    -1,   116,    59,    96,    60,    -1,     3,
      -1,     6,    -1,     5,    -1,     4,    -1,    16,    -1,    17,
      -1,    18,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,
      -1,    19,    -1,    20,    -1,    21,    -1,   118,    -1,    22,
      53,    71,   119,    72,    -1,    22,    71,   119,    72,    -1,
     120,    -1,   119,   120,    -1,   115,   121,    70,    -1,   112,
     115,   121,    70,    -1,   122,    -1,   121,    62,   122,    -1,
      53,    -1,    53,   116,    -1,    93,    -1,    97,    -1,   127,
      -1,   126,    -1,   124,    -1,   129,    -1,   130,    -1,   133,
      -1,   135,    -1,   136,    -1,   139,    -1,    71,    72,    -1,
      71,   128,    72,    -1,   125,    -1,   128,   125,    -1,    70,
      -1,    95,    70,    -1,    38,    57,    95,    58,   131,    -1,
     125,    39,   125,    -1,   125,    -1,    95,    -1,   108,    53,
      32,   123,    -1,    46,    57,    95,    58,    71,   134,    72,
      -1,   128,    -1,    47,    95,    73,    -1,    48,    73,    -1,
      36,    57,   132,    58,   125,    -1,    43,   125,    36,    57,
      95,    58,    70,    -1,    37,    57,   137,   138,    58,   125,
      -1,   129,    -1,   124,    -1,   132,    70,    -1,   132,    70,
      95,    -1,    42,    70,    -1,    41,    70,    -1,    40,    70,
      -1,    40,    95,    70,    -1,   140,   141,    -1,   141,    -1,
     142,    -1,    97,    -1,    99,   127,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   261,   261,   271,   272,   273,   274,   275,   278,   279,
     280,   281,   282,   283,   286,   289,   290,   293,   294,   297,
     298,   301,   304,   305,   308,   309,   310,   311,   314,   315,
     318,   319,   320,   323,   324,   325,   328,   329,   330,   331,
     332,   335,   336,   337,   340,   341,   344,   345,   348,   351,
     352,   355,   356,   357,   358,   359,   362,   363,   366,   369,
     370,   371,   372,   375,   376,   379,   382,   383,   386,   389,
     390,   393,   394,   397,   398,   399,   400,   403,   406,   407,
     408,   409,   410,   413,   414,   415,   416,   417,   420,   421,
     424,   427,   428,   431,   432,   435,   436,   439,   440,   443,
     444,   445,   446,   447,   450,   451,   454,   455,   456,   457,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     482,   483,   486,   487,   490,   491,   494,   495,   498,   499,
     502,   505,   508,   509,   512,   513,   514,   515,   516,   517,
     518,   521,   522,   525,   526,   529,   530,   533,   536,   537,
     540,   541,   544,   547,   550,   551,   554,   555,   556,   559,
     560,   563,   564,   567,   568,   569,   570,   573,   574,   577,
     578,   581
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Float",
  "T_BVec2", "T_BVec3", "T_BVec4", "T_IVec2", "T_IVec3", "T_IVec4",
  "T_UVec2", "T_UVec3", "T_UVec4", "T_Vec2", "T_Vec3", "T_Vec4", "T_Mat2",
  "T_Mat3", "T_Mat4", "T_Struct", "T_FieldSelection", "T_In", "T_Out",
  "T_InOut", "T_Const", "T_Uniform", "T_Layout", "T_LessEqual",
  "T_GreaterEqual", "T_Equal", "T_NotEqual", "T_And", "T_Or", "T_While",
  "T_For", "T_If", "T_Else", "T_Return", "T_Break", "T_Continue", "T_Do",
  "T_Inc", "T_Dec", "T_Switch", "T_Case", "T_Default", "T_Mul_Assign",
  "T_Div_Assign", "T_Add_Assign", "T_Sub_Assign", "T_Identifier",
  "T_IntConstant", "T_FloatConstant", "T_BoolConstant", "'('", "')'",
  "'['", "']'", "'.'", "','", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'",
  "'='", "';'", "'{'", "'}'", "':'", "$accept", "Program", "Pri_Expr",
  "Post_Expr", "Int_Expr", "Fn_Call", "Fn_Call_Hdr_No_Param",
  "Fn_Call_Hdr_With_Param", "Fn_Call_Hdr", "Fn_Ident", "Un_Expr", "Un_Op",
  "Mul_Expr", "Add_Expr", "Rel_Expr", "Eq_Expr", "Log_And_Expr",
  "Log_Or_Expr", "Cond_Expr", "Assn_Expr", "Assn_Oper", "Expr",
  "Const_Expr", "Decl", "Ident_List", "Fn_Proto", "Fn_Declr", "Fn_Hdr",
  "Fn_Hdr_With_Param", "Param_Declr", "Param_Decl", "Param_Type_Spec",
  "Init_Declr_List", "Single_Decl", "Fully_Spec_Type", "Layout_Q",
  "Layout_ID_List", "Layout_ID", "Type_Q", "Single_Type_Q", "Storage_Q",
  "Type_Spec", "Arr_Spec", "Type_Spec_Nonarr", "Struct_Spec",
  "Struct_Decl_List", "Struct_Decl", "Struct_Declr_List", "Struct_Declr",
  "Init", "Decl_Stmt", "Stmt", "Simple_Stmt", "Compd_Stmt", "Stmt_List",
  "Expr_Stmt", "Select_Stmt", "Select_Rest_Stmt", "Cond", "Switch_Stmt",
  "Switch_Stmt_List", "Case_Label", "Iter_Stmt", "For_Init_Stmt",
  "For_Rest_Stmt", "Jump_Stmt", "Trans_Unit", "Ext_Decl", "Fn_Def", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    40,    41,    91,
      93,    46,    44,    43,    45,    42,    47,    60,    62,    61,
      59,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    76,    76,    76,    77,    77,
      77,    77,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    82,    83,    83,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    87,    88,    88,    88,    88,
      88,    89,    89,    89,    90,    90,    91,    91,    92,    93,
      93,    94,    94,    94,    94,    94,    95,    95,    96,    97,
      97,    97,    97,    98,    98,    99,   100,   100,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   105,   106,   106,
     106,   106,   106,   107,   107,   107,   107,   107,   108,   108,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   115,   115,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   131,   131,
     132,   132,   133,   134,   135,   135,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   139,   140,   140,   141,
     141,   142
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       1,     3,     2,     2,     1,     2,     2,     2,     1,     2,
       3,     2,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       2,     3,     4,     2,     3,     2,     1,     1,     3,     2,
       3,     2,     3,     2,     1,     2,     1,     1,     1,     3,
       4,     6,     5,     1,     2,     3,     5,     4,     1,     2,
       4,     1,     3,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     1,     2,     3,     4,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     2,     1,     2,     5,     3,     1,
       1,     4,     7,     1,     3,     2,     5,     7,     6,     1,
       1,     2,     3,     2,     2,     2,     3,     2,     1,     1,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   110,   113,   112,   111,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   114,   115,   116,   126,   127,   128,
       0,   100,   101,   102,    99,   103,     0,     0,   180,     0,
       0,    66,    67,     0,    78,    83,    98,     0,    95,    97,
      88,   104,   129,     2,   178,   179,     0,     0,     0,     1,
       0,   181,    65,    74,    69,    76,     0,    77,     0,     0,
      59,    84,     0,    60,    96,    89,     0,   105,   177,     0,
       0,     0,     0,   132,    93,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     0,    28,    29,   155,   151,     8,    24,
      10,     0,     0,    18,     0,    30,     0,    33,    36,    41,
      44,    46,    48,    49,    56,     0,   141,    83,    88,   144,
     153,   143,   142,     0,   145,   146,   147,   148,   149,   150,
      73,    75,    71,    70,    79,    68,     0,    85,     0,    61,
       0,   106,    30,    58,     0,    22,     0,     0,     0,   138,
       0,   136,   131,   133,     0,    90,     0,     0,     0,     0,
     175,     0,   174,   173,     0,    25,    26,     0,     0,   165,
       0,    12,    13,     0,     0,    15,    16,     0,   110,    19,
      21,    52,    53,    54,    55,    51,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,    84,   152,   154,    72,     0,    80,   140,    87,
       0,    63,     0,    62,   107,   108,     0,   130,     0,   139,
       0,   134,    94,    92,   160,     0,     0,     0,   170,   169,
       0,     0,   176,     0,     0,   164,     7,     0,    14,    11,
      20,    50,    31,    32,    34,    35,    39,    40,    37,    38,
      42,    43,    45,    47,    57,    82,     0,    86,    64,   109,
     135,   137,     0,     0,     0,     0,     0,     0,     0,     9,
      81,     0,   166,   171,     0,   159,   157,     0,     0,   161,
     172,   168,     0,     0,   163,     0,   158,   167,   162
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    98,    99,   237,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     186,   115,   144,   116,   140,    29,    30,    31,    32,    53,
      54,    55,    33,    34,   117,    36,    75,    76,    37,    38,
      39,   145,   137,    41,    42,    72,    73,   150,   151,   209,
     119,   120,   121,   122,   123,   124,   125,   276,   227,   126,
     285,   127,   128,   230,   265,   129,    43,    44,    45
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -194
static const yytype_int16 yypact[] =
{
     918,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
     -41,  -194,  -194,  -194,  -194,  -194,    31,    28,  -194,   -38,
       1,   918,    39,   -43,  -194,    72,  -194,   660,  -194,  -194,
    -194,     3,  -194,   918,  -194,  -194,    22,   918,    78,  -194,
     282,  -194,  -194,  -194,  -194,  -194,   918,    85,   918,    86,
    -194,    -4,     4,  -194,  -194,  -194,   752,    81,  -194,   918,
     918,    88,   233,  -194,    68,   -24,  -194,    87,    89,    91,
     592,    73,    75,   455,   835,   835,    92,   835,    69,  -194,
    -194,  -194,  -194,   835,  -194,  -194,  -194,  -194,  -194,    16,
    -194,    93,    40,   856,    95,   -29,   835,    62,    66,   -16,
      84,   116,   119,  -194,  -194,     6,  -194,   102,    99,  -194,
    -194,  -194,  -194,   352,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,     3,  -194,   -33,  -194,   835,   -27,   107,  -194,
       9,  -194,  -194,  -194,   101,  -194,   773,   422,    88,     3,
      19,  -194,  -194,  -194,   108,  -194,    78,   690,   524,   835,
    -194,    29,  -194,  -194,   127,  -194,  -194,   835,   -44,  -194,
      45,  -194,  -194,   835,   142,  -194,  -194,   835,   109,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,   835,  -194,   835,   835,
     835,   835,   835,   835,   835,   835,   835,   835,   835,   835,
     835,  -194,    -5,  -194,  -194,    81,   835,    -2,  -194,  -194,
     835,  -194,   115,  -194,  -194,  -194,   110,  -194,    30,    81,
      88,  -194,  -194,  -194,   111,   118,   918,   114,  -194,  -194,
     690,    48,  -194,   112,    51,  -194,  -194,   117,   111,  -194,
    -194,  -194,  -194,  -194,    62,    62,    66,    66,    66,    66,
     -16,   -16,    84,   116,  -194,  -194,   835,  -194,  -194,  -194,
    -194,  -194,   143,   455,   104,   120,   455,   835,   105,  -194,
    -194,   835,  -194,   835,   455,   141,  -194,    53,   455,  -194,
     111,  -194,   455,   113,   455,   121,  -194,  -194,  -194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
      20,  -194,   -58,   -73,   -61,   -13,   -17,  -194,   -59,   -92,
    -194,   -77,    41,     5,  -194,  -194,  -194,  -194,  -194,   130,
     131,   132,  -194,  -194,     2,  -194,  -194,    35,   -23,   -31,
    -194,     0,   -37,  -194,  -194,   125,   -63,    49,   -22,  -193,
      43,   -82,  -194,   170,   -75,    46,  -194,  -194,   -25,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,   163,  -194
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -24
static const yytype_int16 yytable[] =
{
      40,   164,    35,   161,    67,    28,    64,   143,    56,   153,
     168,   179,    46,   255,   192,   193,   170,   257,   200,    59,
     181,   182,   183,   184,    70,    64,    66,    60,    49,   235,
      47,    57,   146,    50,   155,    56,   206,    65,   156,    64,
     185,   204,   210,    40,   208,    35,    70,    71,    28,    70,
     118,   194,   195,   135,    66,    66,    57,   146,    57,    52,
     171,   172,    66,   270,   136,   136,   138,   256,   200,    71,
     148,   212,    71,   -23,   139,   173,   201,   174,   279,   213,
     224,   220,   231,   118,   153,   240,   142,   143,    48,   221,
     234,   200,   220,    69,   241,   205,   238,   207,   176,   232,
     260,    58,   177,   236,   165,   166,   266,   200,   254,   268,
     200,   283,   219,   200,   208,   200,   196,   197,   208,   246,
     247,   248,   249,   118,    70,    61,   187,   188,   189,   190,
     191,    74,   244,   245,   226,   250,   251,   154,   132,   134,
     146,   149,   169,   162,   157,   163,   158,    71,   159,   167,
     198,   175,   180,   224,   199,   202,   -22,   118,   118,   225,
     211,   214,   222,   233,   208,   239,   142,   -17,   258,   267,
     259,   262,   263,   200,   273,   271,   278,   269,   274,   208,
     282,   272,   253,   287,   275,   252,   130,   216,   131,   133,
     277,   223,   281,   288,   147,    64,   280,   218,   261,    51,
     286,   228,   204,   284,   229,   264,    68,   226,   242,   243,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
       0,     0,     0,     0,     0,     0,    65,     0,     0,     0,
     118,     0,   225,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,    21,    22,    23,
      24,    25,    26,   118,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,   118,     0,
       0,     0,   118,     0,   118,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   152,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,     0,     0,    89,    90,    91,    92,    93,
       0,     0,     0,     0,     0,    94,    95,     0,     0,     0,
       0,     0,    96,    50,    97,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,    77,    78,
      79,     0,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,     0,     0,    89,    90,    91,    92,    93,
       0,     0,     0,     0,     0,    94,    95,     0,     0,     0,
       0,     0,    96,    50,   203,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    77,    78,    79,   217,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,    94,    95,
       0,     0,     0,     0,     0,    96,    50,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,    93,     0,     0,     0,     0,     0,    94,    95,     0,
       0,     0,     0,     0,    96,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
       0,     0,     0,     0,     0,    94,    95,     0,     0,     0,
       0,     0,   160,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    62,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,    93,     0,     0,
       0,     0,     0,    94,    95,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    84,    85,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
       0,     0,   141,     0,     0,    94,    95,    84,    85,     0,
       0,     0,     0,     0,     0,     0,    89,    90,    91,    92,
      93,     0,     0,   215,     0,     0,    94,    95,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,   178,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    84,
      85,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,    94,    95,
      84,    85,     0,     0,     0,     0,     0,     0,     0,    89,
      90,    91,    92,    93,     0,     0,     0,     0,     0,    94,
      95,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,    21,    22,    23,    24,    25,    26
};

static const yytype_int16 yycheck[] =
{
       0,    83,     0,    80,    41,     0,    37,    66,    31,    72,
      87,   103,    53,   206,    30,    31,    93,   210,    62,    62,
      49,    50,    51,    52,    47,    56,    59,    70,     0,    73,
      71,    31,    59,    71,    58,    58,    69,    37,    62,    70,
      69,   123,    69,    43,   136,    43,    69,    47,    43,    72,
      50,    67,    68,    57,    59,    59,    56,    59,    58,    58,
      44,    45,    59,   256,    69,    69,    62,    69,    62,    69,
      70,    62,    72,    57,    70,    59,    70,    61,   271,    70,
     157,    62,   159,    83,   147,   177,    66,   146,    57,    70,
     167,    62,    62,    71,   186,   132,   173,   134,    58,    70,
      70,    62,    62,    58,    84,    85,    58,    62,   200,    58,
      62,    58,   149,    62,   206,    62,    32,    33,   210,   192,
     193,   194,   195,   123,   147,    53,   106,    65,    66,    63,
      64,    53,   190,   191,   157,   196,   197,    69,    53,    53,
      59,    53,    73,    70,    57,    70,    57,   147,    57,    57,
      34,    58,    57,   230,    35,    53,    57,   157,   158,   157,
      53,    60,    54,    36,   256,    23,   146,    58,    53,    57,
      60,    53,    58,    62,    70,    32,    71,    60,    58,   271,
      39,   263,   199,    70,   266,   198,    56,   146,    56,    58,
     267,   156,   274,    72,    69,   226,   273,   148,   220,    29,
     282,   158,   284,   278,   158,   230,    43,   230,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
     230,    -1,   230,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,   263,    -1,    -1,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,   278,    -1,
      -1,    -1,   282,    -1,   284,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    72,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    72,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    70,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    70,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    53,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    -1,    -1,    63,    64,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,    64,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,
      64,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,    27,    28,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    24,    25,    26,    27,    28,    29,    75,    97,    99,
     100,   101,   102,   106,   107,   108,   109,   112,   113,   114,
     115,   117,   118,   140,   141,   142,    53,    71,    57,     0,
      71,   127,    58,   103,   104,   105,   112,   115,    62,    62,
      70,    53,    53,    70,   113,   115,    59,   116,   141,    71,
     112,   115,   119,   120,    53,   110,   111,    36,    37,    38,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    53,
      54,    55,    56,    57,    63,    64,    70,    72,    76,    77,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    95,    97,   108,   115,   124,
     125,   126,   127,   128,   129,   130,   133,   135,   136,   139,
     103,   105,    53,   104,    53,    57,    69,   116,    62,    70,
      98,    60,    84,    92,    96,   115,    59,   119,   115,    53,
     121,   122,    72,   120,    69,    58,    62,    57,    57,    57,
      70,    95,    70,    70,   125,    84,    84,    57,    95,    73,
      95,    44,    45,    59,    61,    58,    58,    62,     3,    93,
      57,    49,    50,    51,    52,    69,    94,    84,    65,    66,
      63,    64,    30,    31,    67,    68,    32,    33,    34,    35,
      62,    70,    53,    72,   125,   116,    69,   116,    93,   123,
      69,    53,    62,    70,    60,    60,    96,    72,   121,   116,
      62,    70,    54,   111,    95,   108,   112,   132,   124,   129,
     137,    95,    70,    36,    95,    73,    58,    78,    95,    23,
      93,    93,    84,    84,    86,    86,    87,    87,    87,    87,
      88,    88,    89,    90,    93,   123,    69,   123,    53,    60,
      70,   122,    53,    58,   132,   138,    58,    57,    58,    60,
     123,    32,   125,    70,    58,   125,   131,    95,    71,   123,
      95,   125,    39,    58,   128,   134,   125,    70,    72
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { 
                                      /*
                                      @1; 
                                      Program *program = new Program($1);
                                      if (ReportError::NumErrors() == 0) 
                                          program->Print(0);
                                       */
                                   }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    {}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    {}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    {}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    {}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    {}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    {}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    {}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    {}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    {}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    {}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    {}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    {}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    {}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    {}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    {}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    {}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    {}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    {}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    {}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
    {}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    {}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    {}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    {}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    {}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    {}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    {}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 330 "parser.y"
    {}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    {}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    {}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    {}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    {}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 337 "parser.y"
    {}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 340 "parser.y"
    {}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 341 "parser.y"
    {}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    {}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    {}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    {}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    {}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 355 "parser.y"
    {}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    {}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    {}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    {}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    {}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    {}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    {}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    {}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    {}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 370 "parser.y"
    {}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 371 "parser.y"
    {}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    {}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    {}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    {}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    {}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 382 "parser.y"
    {}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 383 "parser.y"
    {}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 386 "parser.y"
    {}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    {}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    {}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 393 "parser.y"
    {}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 394 "parser.y"
    {}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 397 "parser.y"
    {}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    {}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 399 "parser.y"
    {}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 400 "parser.y"
    {}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 403 "parser.y"
    {}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
    {}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 407 "parser.y"
    {}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 408 "parser.y"
    {}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 409 "parser.y"
    {}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    {}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 413 "parser.y"
    {}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    {}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 415 "parser.y"
    {}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 416 "parser.y"
    {}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    {}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    {}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    {}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 424 "parser.y"
    {}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 427 "parser.y"
    {}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    {}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    {}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    {}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 436 "parser.y"
    {}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 439 "parser.y"
    {}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 440 "parser.y"
    {}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    {}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 444 "parser.y"
    {}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    {}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 446 "parser.y"
    {}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 447 "parser.y"
    {}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 450 "parser.y"
    {}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 451 "parser.y"
    {}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 454 "parser.y"
    {}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    {}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 456 "parser.y"
    {}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 457 "parser.y"
    {}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 460 "parser.y"
    {}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 461 "parser.y"
    {}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    {}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    {}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 464 "parser.y"
    {}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 465 "parser.y"
    {}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 466 "parser.y"
    {}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 467 "parser.y"
    {}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 468 "parser.y"
    {}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 469 "parser.y"
    {}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 470 "parser.y"
    {}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 471 "parser.y"
    {}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 472 "parser.y"
    {}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 473 "parser.y"
    {}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 474 "parser.y"
    {}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 475 "parser.y"
    {}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 476 "parser.y"
    {}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 477 "parser.y"
    {}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 478 "parser.y"
    {}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 479 "parser.y"
    {}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    {}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 483 "parser.y"
    {}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 486 "parser.y"
    {}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 487 "parser.y"
    {}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 490 "parser.y"
    {}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 491 "parser.y"
    {}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 494 "parser.y"
    {}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 495 "parser.y"
    {}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 498 "parser.y"
    {}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 499 "parser.y"
    {}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 502 "parser.y"
    {}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 505 "parser.y"
    {}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 508 "parser.y"
    {}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 509 "parser.y"
    {}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 512 "parser.y"
    {}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 513 "parser.y"
    {}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 514 "parser.y"
    {}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 515 "parser.y"
    {}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 516 "parser.y"
    {}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 517 "parser.y"
    {}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 518 "parser.y"
    {}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 521 "parser.y"
    {}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 522 "parser.y"
    {}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 525 "parser.y"
    {}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 526 "parser.y"
    {}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 529 "parser.y"
    {}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 530 "parser.y"
    {}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 533 "parser.y"
    {}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 536 "parser.y"
    {}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 537 "parser.y"
    {}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 540 "parser.y"
    {}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 541 "parser.y"
    {}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 544 "parser.y"
    {}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 547 "parser.y"
    {}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 550 "parser.y"
    {}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 551 "parser.y"
    {}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 554 "parser.y"
    {}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 555 "parser.y"
    {}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 556 "parser.y"
    {}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 559 "parser.y"
    {}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 560 "parser.y"
    {}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 563 "parser.y"
    {}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 564 "parser.y"
    {}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 567 "parser.y"
    {}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 568 "parser.y"
    {}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 569 "parser.y"
    {}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 570 "parser.y"
    {}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 573 "parser.y"
    { }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 574 "parser.y"
    { }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 577 "parser.y"
    {  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 578 "parser.y"
    {  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 581 "parser.y"
    {}
    break;



/* Line 1455 of yacc.c  */
#line 3198 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
		      yytoken, &yylval);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
#line 584 "parser.y"


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

