%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "lex.yy.c"
	extern int yylineno;
	int yyerror(char * s);
	int yylex();
%}

%token AUTO EXTERN REGISTER STATIC VOLATILE
%token BREAK CONTINUE IF ELSE CASE DEFAULT DO FOR SWITCH WHILE
%token CHAR DOUBLE ENUM FLOAT INT STRUCT UNION VOID
%token CONST LONG SHORT SIGNED UNSIGNED
%token GOTO RETURN SIZEOF TYPEDEF
%token IDENTIFIER STR_LIT NUM FLOATNUM
%token ELLIPSIS
%token ASSIGN_BIT_RIGHT ASSIGN_BIT_LEFT ASSIGN_ADD ASSIGN_SUB ASSIGN_MULTI ASSIGN_DIV ASSIGN_MOD_DIV ASSIGN_BIT_AND ASSIGN_BIT_XOR ASSIGN_BIT_OR ASSIGN
%token INCREMENT_OP DECREMENT_OP 
%token MEM_PTR MEM_SELECT TYPE_NAME
%token LOGI_AND LOGI_OR 
%token LE GE LEEQ GEEQ EQ NEQ
%token BIT_AND BIT_OR BIT_NOT BIT_XOR BIT_RIGHT_SH BIT_LEFT_SH 
%token SUB ADD DIV MOD


%nonassoc NO_ELSE
%nonassoc ELSE

%start start

%%
fundamental_exp
	: IDENTIFIER
	| NUM
	| FLOATNUM
	| STR_LIT
	| '(' express ')'
	;

extended_exp
	: fundamental_exp
	| extended_exp '[' express ']'
	| extended_exp '(' ')' 				
	| extended_exp '(' express_args_list ')'
	| extended_exp MEM_SELECT IDENTIFIER 		
	| extended_exp MEM_PTR IDENTIFIER		
	| extended_exp INCREMENT_OP				
	| extended_exp DECREMENT_OP
	;		

express_args_list
	: assign_express
	| express_args_list ',' assign_express
	;

unary
	: extended_exp
	| INCREMENT_OP unary 	
	| DECREMENT_OP unary 
	| unary_operator type_cast
	| SIZEOF unary 	
	| SIZEOF '(' type_name ')' 
	;
					

unary_operator
	: BIT_AND 
	| '*' 
	| ADD 
	| SUB 
	| BIT_NOT
	;

type_cast
	: unary
	| '(' type_name ')' type_cast
	;

mul_div
	: type_cast
	| mul_div '*' type_cast 
	| mul_div DIV type_cast 
	| mul_div MOD type_cast 
	;

add_sub
	: mul_div
	| add_sub ADD mul_div 
	| add_sub SUB mul_div
	;

bit_shift_express
	: add_sub
	| bit_shift_express BIT_LEFT_SH add_sub 	
	| bit_shift_express BIT_RIGHT_SH add_sub 
	;

relational
	: bit_shift_express
	| relational LE bit_shift_express
	| relational GE bit_shift_express
	| relational LEEQ bit_shift_express 
	| relational GEEQ bit_shift_express 
	;

equality_express
	: relational
	| equality_express EQ relational
	| equality_express NEQ relational 
	;

and_express
	: equality_express
	| and_express BIT_AND equality_express 
	;

bit_xor_express
	: and_express
	| bit_xor_express BIT_XOR and_express 	
	;

bit_or_express
	: bit_xor_express
	| bit_or_express BIT_OR bit_xor_express
	;

logical_and
	: bit_or_express
	| logical_and LOGI_AND bit_or_express 
	;

logical_or
	: logical_and
	| logical_or LOGI_OR logical_and
	;

conditional
	: logical_or
	| logical_or '?' express ':' conditional 
	;

assign_express
	: conditional
	| unary assignment_operator assign_express
	;

assignment_operator
	: ASSIGN 		
	| ASSIGN_MULTI 	
	| ASSIGN_DIV 	
	| ASSIGN_MOD_DIV 	
	| ASSIGN_ADD 	
	| ASSIGN_SUB 	
	| ASSIGN_BIT_LEFT 	
	| ASSIGN_BIT_RIGHT 	
	| ASSIGN_BIT_AND 	
	| ASSIGN_BIT_XOR 	
	| ASSIGN_BIT_OR 	
	;

express
	: assign_express
	| express ',' assign_express 
	;

constant_express
	: conditional
	;

declaration
	: decl_specifiers ';' 			 
	| decl_specifiers initialization_declarators_list ';'
	;

decl_specifiers
	: storage_class_specifier
	| storage_class_specifier decl_specifiers
	| type_specifier
	| type_specifier decl_specifiers
	| qualifier
	| qualifier decl_specifiers
	;

initialization_declarators_list
	: initialization_declarator
	| initialization_declarators_list ',' initialization_declarator 
	;

initialization_declarator
	: declarator
	| declarator '=' initializer 
	;

storage_class_specifier
	: TYPEDEF 	
	| EXTERN 	
	| STATIC 	
	| AUTO 		
	| REGISTER 	
	;

type_specifier
	: VOID 		
	| CHAR 		
	| SHORT 	
	| INT 		
	| LONG 		
	| FLOAT 	
	| DOUBLE 	
	| SIGNED 	
	| UNSIGNED 	
	| struct_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_union_specifier
	: struct_union IDENTIFIER '{' struct_decl_list '}'
	| struct_union '{' struct_decl_list '}'
	| struct_union IDENTIFIER
	;

struct_union
	: STRUCT 	
	| UNION 	
	;

struct_decl_list
	: struct_declaration
	| struct_decl_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';' 
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| qualifier specifier_qualifier_list
	| qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_express
	| declarator ':' constant_express 
	;

enum_specifier
	: ENUM '{' enumerator_list '}' 			
	| ENUM IDENTIFIER '{' enumerator_list '}' 	
	| ENUM IDENTIFIER 
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER 
	| IDENTIFIER '=' constant_express 
	;

qualifier
	: CONST 	
	| VOLATILE 	
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER 						
	| '(' declarator ')' 					
	| direct_declarator '[' constant_express ']' 	
	| direct_declarator '[' ']' 				
	| direct_declarator '(' parameter_type_list ')' 	
	| direct_declarator '(' identifier_list ')' 		
	| direct_declarator '(' ')' 				
	;

pointer
	: '*'
	| '*' pointer 	
	| '*' qualifier_list 	
	| '*' qualifier_list pointer 	
	;

qualifier_list
	: qualifier
	| qualifier_list qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS 		
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration 
	;

parameter_declaration
	: decl_specifiers declarator
	| decl_specifiers abstract_declarations
	| decl_specifiers
	;

identifier_list
	: IDENTIFIER 				
	| identifier_list ',' IDENTIFIER 	
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarations
	;

abstract_declarations
	: pointer
	| primary_abstract_declaration
	| pointer primary_abstract_declaration
	;

primary_abstract_declaration
	: '(' abstract_declarations ')' 					
	| '[' ']' 							
	| '[' constant_express ']' 					
	| primary_abstract_declaration '[' ']' 				
	| primary_abstract_declaration '[' constant_express ']' 	
	| '(' ')' 							
	| '(' parameter_type_list ')' 					
	| primary_abstract_declaration '(' ')' 				
	| primary_abstract_declaration '(' parameter_type_list ')' 	
	;

initializer
	: assign_express
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer 
	;

statement
	: label_stmt
	| braced_stmt
	| express_stmt
	| if_else_stmt
	| loop_stmt
	| transfer_ctrl_stmt
	;

label_stmt
	: IDENTIFIER ':' statement  			
	| CASE constant_express ':'  statement 	
	| DEFAULT ':' statement 			
	;

braced_stmt
	: '{' '}'
	| '{' statement_list '}'
	| '{' decl_list '}'
	| '{' decl_list statement_list '}'
	;

decl_list
	: declaration
	| decl_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

express_stmt
	: ';' 				
	| express ';' 	
	;

if_else_stmt
	: IF '(' express ')' statement %prec NO_ELSE 
				
  	| IF '(' express ')' statement ELSE statement 
  				
	| SWITCH '(' express ')' statement 
	;

loop_stmt
	: WHILE '(' express ')' statement  
			
	| DO statement WHILE '(' express ')' ';' 
			
	| FOR '(' express_stmt express_stmt ')' statement  
			
	| FOR '(' express_stmt express_stmt express ')' statement 
			
	;

transfer_ctrl_stmt
	: GOTO IDENTIFIER ';' 	
	| CONTINUE ';' 		
	| BREAK ';'  		
	| RETURN ';'  		
	| RETURN express ';'	
	;

start
	: all_declarations
	| start all_declarations
	;

all_declarations
	: function_definition
	| declaration
	;

function_definition
	: decl_specifiers declarator decl_list braced_stmt
	| decl_specifiers declarator braced_stmt
	| declarator decl_list braced_stmt
	| declarator braced_stmt
	;
%%

int main(){
	yyin = fopen("input.c", "r");
	yyparse();
	fclose(yyin);
	return 0;
}
