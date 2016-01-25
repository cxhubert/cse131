
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
     T_Vec2 = 262,
     T_Vec3 = 263,
     T_Vec4 = 264,
     T_Mat2 = 265,
     T_Mat3 = 266,
     T_Mat4 = 267,
     T_FieldSelection = 268,
     T_In = 269,
     T_Out = 270,
     T_Uniform = 271,
     T_Layout = 272,
     T_LessEqual = 273,
     T_GreaterEqual = 274,
     T_Equal = 275,
     T_NotEqual = 276,
     T_And = 277,
     T_Or = 278,
     T_While = 279,
     T_For = 280,
     T_If = 281,
     T_Else = 282,
     T_Return = 283,
     T_Break = 284,
     T_Continue = 285,
     T_Inc = 286,
     T_Dec = 287,
     T_Switch = 288,
     T_Case = 289,
     T_Default = 290,
     T_Mul_Assign = 291,
     T_Div_Assign = 292,
     T_Add_Assign = 293,
     T_Sub_Assign = 294,
     T_Identifier = 295,
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
#define T_FieldSelection 268
#define T_In 269
#define T_Out 270
#define T_Uniform 271
#define T_Layout 272
#define T_LessEqual 273
#define T_GreaterEqual 274
#define T_Equal 275
#define T_NotEqual 276
#define T_And 277
#define T_Or 278
#define T_While 279
#define T_For 280
#define T_If 281
#define T_Else 282
#define T_Return 283
#define T_Break 284
#define T_Continue 285
#define T_Inc 286
#define T_Dec 287
#define T_Switch 288
#define T_Case 289
#define T_Default 290
#define T_Mul_Assign 291
#define T_Div_Assign 292
#define T_Add_Assign 293
#define T_Sub_Assign 294
#define T_Identifier 295
#define T_IntConstant 296
#define T_FloatConstant 297
#define T_BoolConstant 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 41 "parser.y"

  int integerConstant;
  bool boolConstant;
  float floatConstant;
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
#line 270 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 282 "y.tab.c"

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNRULES -- Number of states.  */
#define YYNSTATES  198

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
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      21,    25,    28,    31,    34,    37,    40,    42,    45,    49,
      52,    54,    56,    58,    61,    64,    67,    69,    71,    73,
      77,    81,    83,    87,    91,    93,    97,   101,   105,   109,
     111,   115,   119,   121,   125,   127,   131,   133,   135,   139,
     141,   143,   145,   147,   149,   151,   154,   157,   161,   164,
     166,   168,   171,   175,   179,   182,   184,   186,   188,   190,
     193,   195,   198,   203,   205,   209,   211,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   254,   256,   258,
     260,   262,   264,   266,   269,   273,   275,   278,   280,   283,
     289,   293,   295,   297,   302,   310,   312,   316,   319,   325,
     332,   334,   336,   339,   343,   346,   348,   350,   352
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,   115,    -1,    40,    -1,    41,    -1,    42,
      -1,    43,    -1,    44,    79,    45,    -1,    61,    -1,    63,
      -1,    62,    46,    13,    -1,    62,    31,    -1,    62,    32,
      -1,    64,    45,    -1,    65,    45,    -1,    66,     3,    -1,
      66,    -1,    66,    77,    -1,    65,    47,    77,    -1,    67,
      44,    -1,    97,    -1,    62,    -1,    62,    -1,    31,    68,
      -1,    32,    68,    -1,    69,    68,    -1,    48,    -1,    49,
      -1,    68,    -1,    70,    50,    68,    -1,    70,    51,    68,
      -1,    70,    -1,    71,    48,    70,    -1,    71,    49,    70,
      -1,    71,    -1,    72,    52,    71,    -1,    72,    53,    71,
      -1,    72,    18,    71,    -1,    72,    19,    71,    -1,    72,
      -1,    73,    20,    72,    -1,    73,    21,    72,    -1,    73,
      -1,    74,    22,    73,    -1,    74,    -1,    75,    23,    74,
      -1,    75,    -1,    76,    -1,    68,    78,    77,    -1,    54,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    77,
      -1,    81,    55,    -1,    88,    55,    -1,    94,    40,    55,
      -1,    82,    45,    -1,    84,    -1,    83,    -1,    84,    86,
      -1,    83,    47,    86,    -1,    90,    40,    44,    -1,    97,
      40,    -1,    85,    -1,    87,    -1,    97,    -1,    89,    -1,
      90,    40,    -1,    97,    -1,    94,    97,    -1,    17,    44,
      92,    45,    -1,    93,    -1,    40,    54,    41,    -1,    95,
      -1,    94,    95,    -1,    96,    -1,    91,    -1,    14,    -1,
      15,    -1,    16,    -1,    98,    -1,     3,    -1,     6,    -1,
       5,    -1,     4,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,    12,    -1,    77,    -1,    80,    -1,
     103,    -1,   102,    -1,   100,    -1,   105,    -1,   106,    -1,
     109,    -1,   111,    -1,   112,    -1,    56,    57,    -1,    56,
     104,    57,    -1,   101,    -1,   104,   101,    -1,    55,    -1,
      79,    55,    -1,    26,    44,    79,    45,   107,    -1,   101,
      27,   101,    -1,   101,    -1,    79,    -1,    90,    40,    20,
      99,    -1,    33,    44,    79,    45,    56,   110,    57,    -1,
     104,    -1,    34,    79,    58,    -1,    35,    58,    -1,    24,
      44,   108,    45,   101,    -1,    25,    44,   113,   114,    45,
     101,    -1,   105,    -1,   100,    -1,   108,    55,    -1,   108,
      55,    79,    -1,   115,   116,    -1,   116,    -1,   117,    -1,
      80,    -1,    81,   103,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   253,   253,   263,   264,   265,   266,   267,   270,   271,
     272,   273,   274,   280,   281,   284,   285,   288,   289,   292,
     295,   296,   299,   300,   301,   302,   305,   306,   309,   310,
     311,   314,   315,   316,   319,   320,   321,   322,   323,   326,
     327,   328,   331,   332,   335,   336,   339,   342,   343,   346,
     347,   348,   349,   350,   353,   359,   360,   361,   365,   368,
     369,   372,   373,   376,   381,   384,   385,   388,   391,   394,
     397,   398,   401,   404,   407,   410,   411,   414,   415,   418,
     419,   420,   423,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   438,   441,   444,   445,   448,   449,   450,
     451,   452,   453,   456,   457,   460,   461,   464,   465,   468,
     471,   472,   475,   476,   479,   482,   485,   486,   489,   490,
     493,   494,   497,   498,   502,   503,   506,   507,   510
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Float",
  "T_Vec2", "T_Vec3", "T_Vec4", "T_Mat2", "T_Mat3", "T_Mat4",
  "T_FieldSelection", "T_In", "T_Out", "T_Uniform", "T_Layout",
  "T_LessEqual", "T_GreaterEqual", "T_Equal", "T_NotEqual", "T_And",
  "T_Or", "T_While", "T_For", "T_If", "T_Else", "T_Return", "T_Break",
  "T_Continue", "T_Inc", "T_Dec", "T_Switch", "T_Case", "T_Default",
  "T_Mul_Assign", "T_Div_Assign", "T_Add_Assign", "T_Sub_Assign",
  "T_Identifier", "T_IntConstant", "T_FloatConstant", "T_BoolConstant",
  "'('", "')'", "'.'", "','", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'",
  "'='", "';'", "'{'", "'}'", "':'", "$accept", "Program", "Pri_Expr",
  "Post_Expr", "Fn_Call", "Fn_Call_Hdr_No_Param", "Fn_Call_Hdr_With_Param",
  "Fn_Call_Hdr", "Fn_Ident", "Un_Expr", "Un_Op", "Mul_Expr", "Add_Expr",
  "Rel_Expr", "Eq_Expr", "Log_And_Expr", "Log_Or_Expr", "Cond_Expr",
  "Assn_Expr", "Assn_Oper", "Expr", "Decl", "Fn_Proto", "Fn_Declr",
  "Fn_Hdr_With_Param", "Fn_Hdr", "Param_Declr", "Param_Decl",
  "Param_Type_Spec", "Init_Declr_List", "Single_Decl", "Fully_Spec_Type",
  "Layout_Q", "Layout_ID_List", "Layout_ID", "Type_Q", "Single_Type_Q",
  "Storage_Q", "Type_Spec", "Type_Spec_Nonarr", "Init", "Decl_Stmt",
  "Stmt", "Simple_Stmt", "Compd_Stmt", "Stmt_List", "Expr_Stmt",
  "Select_Stmt", "Select_Rest_Stmt", "Cond", "Switch_Stmt",
  "Switch_Stmt_List", "Case_Label", "Iter_Stmt", "For_Init_Stmt",
  "For_Rest_Stmt", "Trans_Unit", "Ext_Decl", "Fn_Def", 0
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
       0,    59,    60,    61,    61,    61,    61,    61,    62,    62,
      62,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    72,    73,
      73,    73,    74,    74,    75,    75,    76,    77,    77,    78,
      78,    78,    78,    78,    79,    80,    80,    80,    81,    82,
      82,    83,    83,    84,    85,    86,    86,    87,    88,    89,
      90,    90,    91,    92,    93,    94,    94,    95,    95,    96,
      96,    96,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,   100,   101,   101,   102,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     107,   107,   108,   108,   109,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     2,     2,     2,     2,     2,     1,     2,     3,     2,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     2,     1,
       1,     2,     3,     3,     2,     1,     1,     1,     1,     2,
       1,     2,     4,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     2,     1,     2,     5,
       3,     1,     1,     4,     7,     1,     3,     2,     5,     6,
       1,     1,     2,     3,     2,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    83,    86,    85,    84,    87,    88,    89,    90,    91,
      92,    79,    80,    81,     0,     0,   127,     0,     0,    60,
      59,     0,    68,     0,    78,     0,    75,    77,    70,    82,
       2,   125,   126,     0,     1,    55,     0,   128,    58,     0,
      65,    61,    66,    67,    56,    69,     0,    76,    71,   124,
       0,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     0,    26,    27,   107,   103,
       8,    22,     9,     0,     0,    16,     0,    28,     0,    31,
      34,    39,    42,    44,    46,    47,    54,     0,    94,     0,
      20,    97,   105,    96,    95,     0,    98,    99,   100,   101,
     102,    62,    64,    63,    57,     0,    72,     0,     0,     0,
      23,    20,    24,     0,     0,   117,     0,    11,    12,     0,
      13,    14,     0,    15,    17,    19,    50,    51,    52,    53,
      49,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,   104,   106,    74,   112,
       0,     0,     0,   121,   120,     0,     0,     0,   116,     7,
      10,    18,    48,    29,    30,    28,    32,    33,    37,    38,
      35,    36,    40,    41,    43,    45,     0,     0,     0,     0,
       0,     0,     0,   118,   122,     0,   111,   109,     0,    93,
     113,   123,   119,     0,   115,     0,   110,   114
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   131,
      87,    88,    89,    18,    19,    20,    40,    41,    42,    21,
      22,    23,    24,    51,    52,    25,    26,    27,   111,    29,
     190,    91,    92,    93,    94,    95,    96,    97,   187,   152,
      98,   195,    99,   100,   155,   179,    30,    31,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
      67,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,   -37,    28,  -102,    11,     3,    -2,
     428,    30,  -102,    56,  -102,     7,  -102,  -102,  -102,  -102,
      67,  -102,  -102,    57,  -102,  -102,   192,  -102,  -102,   428,
    -102,  -102,  -102,    58,  -102,    60,    45,  -102,  -102,  -102,
      47,    61,  -102,    78,    79,    80,   371,   371,    81,   371,
      68,  -102,  -102,  -102,  -102,   371,  -102,  -102,  -102,  -102,
    -102,     6,  -102,    94,    -1,   418,   100,    26,   371,   -19,
      20,     8,    70,    83,   122,  -102,  -102,    91,  -102,    92,
     108,  -102,  -102,  -102,  -102,   247,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,   109,  -102,   356,   126,   371,
    -102,  -102,  -102,   371,    95,  -102,   104,  -102,  -102,   139,
    -102,  -102,   371,   110,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,   371,  -102,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,  -102,  -102,  -102,  -102,  -102,
     116,    67,   114,  -102,  -102,   356,   115,   117,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   -19,   -19,    20,    20,
      20,    20,     8,     8,    70,    83,   141,   302,   118,   119,
     302,   107,   371,  -102,   371,   302,   138,  -102,   302,  -102,
    -102,  -102,  -102,   302,   302,   121,  -102,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,   -23,
    -102,   -48,   -97,   -49,    33,    27,  -102,  -102,   -73,  -102,
     -56,     5,    29,  -102,  -102,  -102,  -102,   133,  -102,  -102,
    -102,  -101,  -102,  -102,  -102,   -99,   -24,  -102,     0,  -102,
    -102,    71,   -91,  -102,   165,    -5,    76,  -102,  -102,    31,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,   157,  -102
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -84
static const yytype_int16 yytable[] =
{
      28,    47,   124,   114,   147,    16,   150,    33,   151,   116,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      43,    11,    12,    13,    14,    48,   137,   138,    34,    17,
      28,   133,   134,   110,   112,    16,    90,   117,   118,    43,
     168,   169,   170,   171,   121,    39,   122,    46,    38,   161,
     -21,   149,   119,   156,   150,   132,   151,   157,   162,    17,
     139,   140,   126,   127,   128,   129,    35,    36,   135,   136,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
     130,    11,    12,    13,    14,    44,   183,   166,   167,   186,
     141,   142,   172,   173,   192,    90,    45,    50,   102,   149,
     104,   105,   196,   147,   103,   143,   106,    90,    90,   189,
     163,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   107,   108,   109,   113,   115,    47,   191,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,   120,
      11,    12,    13,    14,   125,   144,   145,    35,   -70,   159,
     148,    48,   160,   158,   -83,    90,   176,    56,    57,   177,
     180,   182,   181,   188,   185,   193,    61,    62,    63,    64,
      65,   175,   101,   184,    66,    67,   174,    90,   197,   153,
      90,    68,    37,   194,   154,    90,   178,    49,    90,     0,
       0,     0,     0,    90,    90,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,    11,    12,    13,    14,
       0,     0,     0,     0,     0,     0,    53,    54,    55,     0,
       0,     0,     0,    56,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,    65,     0,     0,     0,
      66,    67,     0,     0,     0,     0,     0,    68,    36,    69,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,    11,    12,    13,    14,     0,     0,     0,     0,     0,
       0,    53,    54,    55,     0,     0,     0,     0,    56,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    63,
      64,    65,     0,     0,     0,    66,    67,     0,     0,     0,
       0,     0,    68,    36,   146,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,    11,    12,    13,    14,
       0,     0,     0,     0,     0,     0,    53,    54,    55,     0,
       0,     0,     0,    56,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,    65,     0,     0,     0,
      66,    67,     0,     0,     0,     0,     0,    68,    36,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
      11,    12,    13,    14,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,    56,    57,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,     0,    56,    57,    66,    67,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,     0,     0,     0,    66,
      67,   123,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,     0,     0,     0,    66,    67
};

static const yytype_int16 yycheck[] =
{
       0,    25,    75,    59,    95,     0,   107,    44,   107,    65,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      20,    14,    15,    16,    17,    25,    18,    19,     0,     0,
      30,    50,    51,    56,    57,    30,    36,    31,    32,    39,
     137,   138,   139,   140,    45,    47,    47,    40,    45,   122,
      44,   107,    46,   109,   155,    78,   155,   113,   131,    30,
      52,    53,    36,    37,    38,    39,    55,    56,    48,    49,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      54,    14,    15,    16,    17,    55,   177,   135,   136,   180,
      20,    21,   141,   142,   185,    95,    40,    40,    40,   155,
      55,    54,   193,   194,    44,    22,    45,   107,   108,   182,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    44,    44,    44,    44,    58,   151,   184,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    45,
      14,    15,    16,    17,    44,    23,    55,    55,    40,    45,
      41,   151,    13,    58,    44,   155,    40,    31,    32,    45,
      45,    20,    45,    56,    45,    27,    40,    41,    42,    43,
      44,   144,    39,    55,    48,    49,   143,   177,    57,   108,
     180,    55,    17,   188,   108,   185,   155,    30,   188,    -1,
      -1,    -1,    -1,   193,   194,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    31,    32,    48,    49,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    48,
      49,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    14,    15,    16,    17,    60,    80,    81,    82,    83,
      84,    88,    89,    90,    91,    94,    95,    96,    97,    98,
     115,   116,   117,    44,     0,    55,    56,   103,    45,    47,
      85,    86,    87,    97,    55,    40,    40,    95,    97,   116,
      40,    92,    93,    24,    25,    26,    31,    32,    33,    34,
      35,    40,    41,    42,    43,    44,    48,    49,    55,    57,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    79,    80,    81,
      97,   100,   101,   102,   103,   104,   105,   106,   109,   111,
     112,    86,    40,    44,    55,    54,    45,    44,    44,    44,
      68,    97,    68,    44,    79,    58,    79,    31,    32,    46,
      45,    45,    47,     3,    77,    44,    36,    37,    38,    39,
      54,    78,    68,    50,    51,    48,    49,    18,    19,    52,
      53,    20,    21,    22,    23,    55,    57,   101,    41,    79,
      90,    94,   108,   100,   105,   113,    79,    79,    58,    45,
      13,    77,    77,    68,    68,    68,    70,    70,    71,    71,
      71,    71,    72,    72,    73,    74,    40,    45,   108,   114,
      45,    45,    20,   101,    55,    45,   101,   107,    56,    77,
      99,    79,   101,    27,   104,   110,   101,    57
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
#line 253 "parser.y"
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
#line 263 "parser.y"
    {}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    {}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    {}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    {}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    {}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    {}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    {}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    {}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    {}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    {}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    {}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    {}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    {}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    {}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    {}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    {}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    {}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    {}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    {}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    {}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    {}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
    {}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    {}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    {}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    {}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    {}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    {}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    {}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    {}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    {}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    {}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    {}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    {}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    {}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    {}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 343 "parser.y"
    {}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 346 "parser.y"
    {}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 347 "parser.y"
    {}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    {}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    {}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 353 "parser.y"
    {}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    {}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 361 "parser.y"
    {}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    {}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    {}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    {}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    {}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    {}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    {}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 381 "parser.y"
    {}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    {}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 385 "parser.y"
    {}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    {}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 391 "parser.y"
    {}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 394 "parser.y"
    {}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 397 "parser.y"
    {}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    {}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 401 "parser.y"
    {}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 404 "parser.y"
    {}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 407 "parser.y"
    {}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    {}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 411 "parser.y"
    {}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    {}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 415 "parser.y"
    {}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 418 "parser.y"
    {}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 419 "parser.y"
    {}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    {}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    {}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    { (yyval.node) = Type::voidType; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 427 "parser.y"
    { (yyval.node) = Type::floatType; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    { (yyval.node) = Type::intType; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 429 "parser.y"
    { (yyval.node) = Type::boolType; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 430 "parser.y"
    { (yyval.node) = Type::vec2Type; }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    { (yyval.node) = Type::vec3Type; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    { (yyval.node) = Type::vec4Type; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    { (yyval.node) = Type::mat2Type; }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 434 "parser.y"
    { (yyval.node) = Type::mat3Type; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    { (yyval.node) = Type::mat4Type; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 438 "parser.y"
    {}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 441 "parser.y"
    {}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 444 "parser.y"
    {}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    {}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 448 "parser.y"
    {}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 449 "parser.y"
    {}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 450 "parser.y"
    {}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 451 "parser.y"
    {}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    {}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 453 "parser.y"
    {}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 456 "parser.y"
    {}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 457 "parser.y"
    {}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 460 "parser.y"
    {}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 461 "parser.y"
    {}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 464 "parser.y"
    {}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 465 "parser.y"
    {}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 468 "parser.y"
    {}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 471 "parser.y"
    {}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 472 "parser.y"
    {}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 475 "parser.y"
    {}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 476 "parser.y"
    {}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 479 "parser.y"
    {}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    {}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 485 "parser.y"
    {}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 486 "parser.y"
    {}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 489 "parser.y"
    {}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 490 "parser.y"
    {}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 493 "parser.y"
    {}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 494 "parser.y"
    {}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 497 "parser.y"
    {}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 498 "parser.y"
    {}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 502 "parser.y"
    { }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 503 "parser.y"
    { }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 506 "parser.y"
    {/* $$ = $1; */}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 507 "parser.y"
    {/* $$ = $1; */}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 510 "parser.y"
    {}
    break;



/* Line 1455 of yacc.c  */
#line 2626 "y.tab.c"
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
#line 513 "parser.y"


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

