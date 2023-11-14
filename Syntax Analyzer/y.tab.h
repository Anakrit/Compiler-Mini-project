/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    EXTERN = 259,
    REGISTER = 260,
    STATIC = 261,
    VOLATILE = 262,
    BREAK = 263,
    CONTINUE = 264,
    IF = 265,
    ELSE = 266,
    CASE = 267,
    DEFAULT = 268,
    DO = 269,
    FOR = 270,
    SWITCH = 271,
    WHILE = 272,
    CHAR = 273,
    DOUBLE = 274,
    ENUM = 275,
    FLOAT = 276,
    INT = 277,
    STRUCT = 278,
    UNION = 279,
    VOID = 280,
    CONST = 281,
    LONG = 282,
    SHORT = 283,
    SIGNED = 284,
    UNSIGNED = 285,
    GOTO = 286,
    RETURN = 287,
    SIZEOF = 288,
    TYPEDEF = 289,
    IDENTIFIER = 290,
    STR_LIT = 291,
    NUM = 292,
    FLOATNUM = 293,
    ELLIPSIS = 294,
    ASSIGN_BIT_RIGHT = 295,
    ASSIGN_BIT_LEFT = 296,
    ASSIGN_ADD = 297,
    ASSIGN_SUB = 298,
    ASSIGN_MULTI = 299,
    ASSIGN_DIV = 300,
    ASSIGN_MOD_DIV = 301,
    ASSIGN_BIT_AND = 302,
    ASSIGN_BIT_XOR = 303,
    ASSIGN_BIT_OR = 304,
    ASSIGN = 305,
    INCREMENT_OP = 306,
    DECREMENT_OP = 307,
    MEM_PTR = 308,
    MEM_SELECT = 309,
    TYPE_NAME = 310,
    LOGI_AND = 311,
    LOGI_OR = 312,
    LE = 313,
    GE = 314,
    LEEQ = 315,
    GEEQ = 316,
    EQ = 317,
    NEQ = 318,
    BIT_AND = 319,
    BIT_OR = 320,
    BIT_NOT = 321,
    BIT_XOR = 322,
    BIT_RIGHT_SH = 323,
    BIT_LEFT_SH = 324,
    SUB = 325,
    ADD = 326,
    DIV = 327,
    MOD = 328,
    NO_ELSE = 329
  };
#endif
/* Tokens.  */
#define AUTO 258
#define EXTERN 259
#define REGISTER 260
#define STATIC 261
#define VOLATILE 262
#define BREAK 263
#define CONTINUE 264
#define IF 265
#define ELSE 266
#define CASE 267
#define DEFAULT 268
#define DO 269
#define FOR 270
#define SWITCH 271
#define WHILE 272
#define CHAR 273
#define DOUBLE 274
#define ENUM 275
#define FLOAT 276
#define INT 277
#define STRUCT 278
#define UNION 279
#define VOID 280
#define CONST 281
#define LONG 282
#define SHORT 283
#define SIGNED 284
#define UNSIGNED 285
#define GOTO 286
#define RETURN 287
#define SIZEOF 288
#define TYPEDEF 289
#define IDENTIFIER 290
#define STR_LIT 291
#define NUM 292
#define FLOATNUM 293
#define ELLIPSIS 294
#define ASSIGN_BIT_RIGHT 295
#define ASSIGN_BIT_LEFT 296
#define ASSIGN_ADD 297
#define ASSIGN_SUB 298
#define ASSIGN_MULTI 299
#define ASSIGN_DIV 300
#define ASSIGN_MOD_DIV 301
#define ASSIGN_BIT_AND 302
#define ASSIGN_BIT_XOR 303
#define ASSIGN_BIT_OR 304
#define ASSIGN 305
#define INCREMENT_OP 306
#define DECREMENT_OP 307
#define MEM_PTR 308
#define MEM_SELECT 309
#define TYPE_NAME 310
#define LOGI_AND 311
#define LOGI_OR 312
#define LE 313
#define GE 314
#define LEEQ 315
#define GEEQ 316
#define EQ 317
#define NEQ 318
#define BIT_AND 319
#define BIT_OR 320
#define BIT_NOT 321
#define BIT_XOR 322
#define BIT_RIGHT_SH 323
#define BIT_LEFT_SH 324
#define SUB 325
#define ADD 326
#define DIV 327
#define MOD 328
#define NO_ELSE 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
