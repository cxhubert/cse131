/* File:  scanner.l
 * ----------------
 * Lex input file to generate the scanner for the compiler.
 */

%{

/* The text within this first region delimited by %{ and %} is assumed to
 * be C/C++ code and will be copied verbatim to the lex.yy.c file ahead
 * of the definitions of the yylex() function. Add other header file inclusions
 * or C++ variable declarations/prototypes that are needed by your code here.
 */

#include <string.h>
#include "scanner.h"
#include "utility.h" // for PrintDebug()
#include "errors.h"

#define GLSL_MAX_IDEN_LEN 1023

/* Global variable: yylval
 * -----------------------
 * This global variable is how we get attribute information about the token
 * just scanned to the client. The scanner sets the global variable
 * appropriately and since it's global the client can just read it.  In the
 * future, this variable will be declared for us in the y.tab.c file
 * produced by Yacc, but for now, we declare it manually.
 */
YYSTYPE yylval;  // manually declared for pp1, later Yacc provides

/* Global variable: yylloc
 * -----------------------
 * This global variable is how we get position information about the token
 * just scanned to the client. (Operates similarly to yylval above)
 */
struct yyltype yylloc; // manually dclared for pp1, later Yacc provides


/* Macro: YY_USER_ACTION
 * ---------------------
 * This flex built-in macro can be defined to provide an action which is
 * always executed prior to any matched rule's action. Basically, it is
 * a way of having a piece of code common to all actions factored out to
 * this routine.  We already defined it for you and left the empty
 * function DoBeforeEachAction ready for your use as needed. It will
 * be called once for each pattern scanned from the file, before
 * executing its action.
 */
static void DoBeforeEachAction();
#define YY_USER_ACTION DoBeforeEachAction();

%}

 /* The section before the first %% is the Definitions section of the lex
  * input file. Here is where you set options for the scanner, define lex
  * states, and can set up definitions to give names to regular expressions
  * as a simple substitution mechanism that allows for more readable
  * entries in the Rules section later.
  */

dig               [[:digit:]]
ident             [_[:alpha:]][_[:alnum:]]*
single_char_token [\+\-\*\/\%\<\>\=\!\&\|\!\;\,\.\[\]\(\)\{\}\^\~\:\?]
int_const         {dig}+
float_const       (((({dig}+\.{dig}*)|(\.{dig}+))f?)|({dig}+f))
single_line_com   "//".*\n


%x COMMENT

%%             /* BEGIN RULES SECTION */
 /* All patterns and actions should be placed between the start and stop
  * %% markers which delimit the Rules section.
  */

<*>" "     {}
<*>\t      { yylloc.last_column += 7; }
<*>\n      { ++yylloc.first_line; yylloc.last_column = 0; }

"const"    { return T_Const; }
"uniform"  { return T_Uniform; }
"layout"   { return T_Layout; }
"break"    { return T_Break; }
"continue" { return T_Continue; }
"do"       { return T_Do; }
"for"      { return T_For; }
"while"    { return T_While; }
"switch"   { return T_Switch; }
"case"     { return T_Case; }
"default"  { return T_Default; }
"if"       { return T_If; }
"else"     { return T_Else; }
"return"   { return T_Return; }
"in"       { return T_In; }
"out"      { return T_Out; }
"inout"    { return T_InOut; }
"float"    { return T_Float; }
"int"      { return T_Int; }
"void"     { return T_Void; }
"bool"     { return T_Bool; }
"mat2"     { return T_Mat2; }
"mat3"     { return T_Mat3; }
"mat4"     { return T_Mat4; }
"vec2"     { return T_Vec2; }
"vec3"     { return T_Vec3; }
"vec4"     { return T_Vec4; }
"ivec2"    { return T_IVec2; }
"ivec3"    { return T_IVec3; }
"ivec4"    { return T_IVec4; }
"bvec2"    { return T_BVec2; }
"bvec3"    { return T_BVec3; }
"bvec4"    { return T_BVec4; }
"uint"     { return T_UInt; }
"uvec2"    { return T_UVec2; }
"uvec3"    { return T_UVec3; }
"uvec4"    { return T_UVec4; }
"struct"   { return T_Struct; }
"NULL"     { return T_Null;}

"true" {
	yylval.boolConstant = 1;
  return T_BoolConstant;
}

"false" {
  yylval.boolConstant = 0;
  return T_BoolConstant;
}

{int_const}    { yylval.integerConstant = strtol(yytext, NULL, 10);
                 return T_IntConstant; }

{float_const}  { yylval.floatConstant = atof(yytext);
                 return T_FloatConstant; }

{single_char_token} { return yytext[0]; }

"<=" 	       { return T_LessEqual; }
">="         { return T_GreaterEqual; }
"=="         { return T_Equal; }
"!="         { return T_NotEqual; }
"&&"         { return T_And; }
"||"         { return T_Or; }
"[]"         { return T_Dims; }
"++"         { return T_Inc; }
"--"         { return T_Dec; }

{ident} {
	if (yyleng > GLSL_MAX_IDEN_LEN) {
		ReportError::LongIdentifier(&yylloc, yytext);
	} else {
		memset(&yylval, 0, sizeof(yylval));
		strncpy(yylval.identifier, yytext, MaxIdentLen);

		return T_Identifier;
	}
}

{single_line_com} { ++yylloc.first_line; yylloc.last_column = 0; }

"/*"              { BEGIN(COMMENT); }
<COMMENT>.        {}
<COMMENT><<EOF>>  { BEGIN(INITIAL); ReportError::UntermComment(); }
<COMMENT>"*/"     { BEGIN(INITIAL); }

. { ReportError::UnrecogChar(&yylloc, yytext[0]); }

%%
/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated lex.yy.c file.
 * This section is where you put definitions of helper functions.
 */


/* Function: InitScanner
 * ---------------------
 * This function will be called before any calls to yylex().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the scanner (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yy_flex_debug that controls whether flex prints debugging information
 * about each token and what rule was matched. If set to false, no information
 * is printed. Setting it to true will give you a running trail that might
 * be helpful when debugging your scanner. Please be sure the variable is
 * set to false when submitting your final version.
 */
void InitScanner()
{
    PrintDebug("lex", "Initializing scanner");
    yy_flex_debug = false;
		yylloc.first_line = 1;
    yylloc.last_column = 0;
}


/* Function: DoBeforeEachAction()
 * ------------------------------
 * This function is installed as the YY_USER_ACTION. This is a place
 * to group code common to all actions.
 */
static void DoBeforeEachAction()
{
  yylloc.first_column = yylloc.last_column + 1;
  yylloc.last_column = yylloc.first_column + yyleng - 1;
}
