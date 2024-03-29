/* File: scanner.h
 * ---------------
 * You should not need to modify this file. It declare a few constants,
 * types, variables,and functions that are used and/or exported by
 * the lex-generated scanner.
 */

#ifndef _H_scanner
#define _H_scanner

#include <stdio.h>

#define MaxIdentLen 31    // Maximum length for identifiers

  
/* Typedef: TokenType enum
 * -----------------------
 * This enumeration defines the constants for the different token types.
 * The scanner should return these values for the associated key words
 * and token types.  The numbers start at 256 because 0-255 are reserved
 * for single character token values. After pp1, we will rely on
 * y.tab.h generated by yacc for these constants.
 */
typedef enum { 
    T_Void = 256, T_Int, T_Float, T_Bool, T_Null, T_Dims,
    T_LessEqual, T_GreaterEqual, T_Equal, T_NotEqual, 
    T_Inc, T_Dec, T_And, T_Or, T_While, T_For, T_If, 
    T_Else, T_Return, T_Break, T_Identifier, T_IntConstant, T_FloatConstant,
    T_StringConstant, T_BoolConstant, T_Const, T_Uniform, T_Layout, T_Continue, 
    T_Do, T_Switch, T_Case, T_Default, T_In, T_Out, T_InOut,
    T_Mat2, T_Mat3, T_Mat4, T_Vec2, T_Vec3, T_Vec4, T_IVec2, T_IVec3,
    T_IVec4, T_BVec2, T_BVec3, T_BVec4, T_UInt, T_UVec2, T_UVec3, T_UVec4,
    T_Struct, T_NumTokenTypes
} TokenType;

 
/* These are a list of printable names for each token value defined
 * above.  The strings should match in position to the types. They
 * are used in our main program to verify output from your scanner.
 */
static const char *gTokenNames[T_NumTokenTypes] = {
  "T_Void", "T_Int", "T_Float", "T_Bool", "T_Null", "T_Dims",
  "T_LessEqual", "T_GreaterEqual", "T_Equal", "T_NotEqual",
  "T_Inc", "T_Dec", "T_And", "T_Or", "T_While", "T_For", "T_If", 
  "T_Else", "T_Return", "T_Break", "T_Identifier", "T_IntConstant", 
  "T_FloatConstant", "T_StringConstant", "T_BoolConstant", 
  "T_Const", "T_Uniform", "T_Layout", 
  "T_Continue", "T_Do", "T_Switch", "T_Case", "T_Default", "T_In", 
  "T_Out", "T_Inout", "T_Mat2", "T_Mat3", "T_Mat4", "T_Vec2", "T_Vec3", 
  "T_Vec4", "T_Ivec2", "T_Ivec3", "T_Ivec4", "T_Bvec2", "T_Bvec3", 
  "T_Bvec4", "T_Uint", "T_Uvec2", "T_Uvec3", "T_Uvec4", "T_Struct"
};

 
/* Typedef: YYSTYPE
 * ----------------
 * Defines the union type that is used by the scanner to store
 * attibute information about tokens as they are scanned. This
 * type definition will be generated by Yacc in the later assignments.
 */
typedef union {
    int integerConstant;
    bool boolConstant;
    char *stringConstant;
    float floatConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
} YYSTYPE;

 
/* Global variable: yylval
 * -----------------------
 * Strange name, but by convention, this is the name of union that
 * is written to by scanner and read by parser containing information
 * about the lexeme just scanned.
 */
extern YYSTYPE yylval;

extern char *yytext;      // Text of lexeme just scanned

int yylex();              // Defined in the generated lex.yy.c file

void InitScanner();                 // Defined in scanner.l user subroutines
 
#endif
