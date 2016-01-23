
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
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



/* Line 1676 of yacc.c  */
#line 222 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


