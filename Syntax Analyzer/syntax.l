%{
#include <stdio.h>
#include <string.h>
#include "y.tab.c"
int lineCount=1;
int nestedCommentCount=0;
int commentFlag=0;
int yylex();
int yyerror(char *a);
%}

digit			[0-9]
letter			[a-zA-Z]
alphanum        [0-9a-zA-z_]
hex			[a-fA-F0-9]
exponent			[Ee][+-]?{digit}+
floatsuffix			(f|F|l|letter)
intsuffix			(u|U|l|letter)*

%x MULTILINE_COMMENT
%option yylineno
%%

\/\/.*

\/\*          { BEGIN(MULTILINE_COMMENT);
					  nestedCommentCount++; 
					}
					
<MULTILINE_COMMENT>\/\* { nestedCommentCount++;
					  if(nestedCommentCount>1)
					 commentFlag = 1;
					}
					
<MULTILINE_COMMENT>\*\/ { BEGIN(INITIAL); 
						 if(nestedCommentCount>0)
                       nestedCommentCount--;
                           if(nestedCommentCount==0)
                            BEGIN(INITIAL);
                    }
                    
<MULTILINE_COMMENT>\n {lineCount++;}
<MULTILINE_COMMENT>. {}



"auto"			{ return AUTO; }
"break"			{ return BREAK; }
"case"			{ return CASE; }
"char"			{ return CHAR; }
"const"			{ return CONST; }
"continue"		{ return CONTINUE; }
"default"		{ return DEFAULT; }
"do"			{ return DO; }
"double"		{ return DOUBLE; }
"else"			{ return ELSE; }
"enum"			{ return ENUM; }
"extern"		{ return EXTERN; }
"float"			{ return FLOAT; }
"for"			{ return FOR; }
"goto"			{ return GOTO; }
"if"			{ return IF; }
"int"			{ return INT; }
"long"			{ return LONG; }
"register"		{ return REGISTER; }
"return"		{ return RETURN; }
"short"			{ return SHORT; }
"signed"		{ return SIGNED; }
"sizeof"		{ return SIZEOF; }
"static"		{ return STATIC; }
"struct"		{ return STRUCT; }
"switch"		{ return SWITCH; }
"typedef"		{ return TYPEDEF; }
"union"			{ return UNION; }
"unsigned"		{ return UNSIGNED; }
"void"			{ return VOID; }
"volatile"		{ return VOLATILE; }
"while"			{ return WHILE; }

({letter}|[_])({alphanum})+		{ return IDENTIFIER ; }
{letter}({alphanum})*		{ return IDENTIFIER ; }
\"(\\.|[^\\"])*\"		{ return STR_LIT ; }
0[xX]{hex}+{intsuffix}?			{return NUM;}
0{digit}+{intsuffix}?				{ return NUM; }
{hex}+{intsuffix}?				{return NUM; }
'(\\.|[^\\'])+'		{return STR_LIT; }
{digit}+{exponent}{floatsuffix}?			{return FLOATNUM; }
{digit}*"."{digit}+({exponent})?{floatsuffix}?		{ return FLOATNUM; }
{digit}+"."{digit}*({exponent})?{floatsuffix}?		{ return FLOATNUM; }

"..."			{  return(ELLIPSIS); }
">>="			{  return(ASSIGN_BIT_RIGHT); }
"<<="			{  return(ASSIGN_BIT_LEFT); }
"+="			{  return(ASSIGN_ADD); }
"-="			{  return(ASSIGN_SUB); }
"*="			{  return(ASSIGN_MULTI); }
"/="			{  return(ASSIGN_DIV); }
"%="			{  return(ASSIGN_MOD_DIV); }
"&="			{  return(ASSIGN_BIT_AND); }
"^="			{  return(ASSIGN_BIT_XOR); }
"|="			{  return(ASSIGN_BIT_OR); }
">>"			{  return(BIT_RIGHT_SH); }
"<<"			{  return(BIT_LEFT_SH); }
"++"			{  return(INCREMENT_OP); }
"--"			{  return(DECREMENT_OP); }
"->"			{  return(MEM_PTR); }
"&&"			{  return(LOGI_AND); }
"||"			{  return(LOGI_OR); }
"<="			{  return(LEEQ); }
">="			{  return(GEEQ); }
"=="			{  return(EQ); }
"!="			{  return(NEQ); }
";"			{  return(';'); }
("{")		{return('{'); }
("}")		{return('}'); }
","			{  return(','); }
":"			{  return(':'); }
"="			{  return ASSIGN; }
"("			{  return('('); }
")"			{  return(')'); }
("[")		{  return('['); }
("]")		{  return(']'); }
"."			{  return MEM_SELECT; }
"&"			{  return BIT_AND; }
"!"			{  return BIT_NOT; }
"~"			{  return BIT_NOT; }
"-"			{  return SUB; }
"+"			{  return ADD; }
"*"			{  return ('*'); }
"/"			{  return DIV; }
"%"			{  return MOD; }
"<"			{  return GE; }
">"			{  return LE; }
"^"			{  return BIT_XOR; }
"|"			{  return BIT_OR; }
"?"			{  return('?'); }


"#include"(.)*"\n"	{ lineCount++; }
"#define"(.)*"\n"	{ lineCount++; }

[ ]			{}
[\t\v\f]	{}
[\n]	    { lineCount++; }
.			{ }

%%
int yywrap()
{
	return 1;
}

int yyerror(char *a){
    printf("ERROR! Line No.: %d", yylineno);
    return 1;
}
