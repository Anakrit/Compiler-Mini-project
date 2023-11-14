/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntax.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include "lex.yy.c"
	extern int yylineno;
	int yyerror(char * s);
	int yylex();

#line 75 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 274 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  350

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      75,    76,    80,     2,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    83,
       2,    84,     2,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,    86,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    34,    35,    36,    37,    41,    42,    43,
      44,    45,    46,    47,    48,    52,    53,    57,    58,    59,
      60,    61,    62,    67,    68,    69,    70,    71,    75,    76,
      80,    81,    82,    83,    87,    88,    89,    93,    94,    95,
      99,   100,   101,   102,   103,   107,   108,   109,   113,   114,
     118,   119,   123,   124,   128,   129,   133,   134,   138,   139,
     143,   144,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   162,   163,   167,   171,   172,   176,   177,
     178,   179,   180,   181,   185,   186,   190,   191,   195,   196,
     197,   198,   199,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   218,   219,   220,   224,   225,
     229,   230,   234,   238,   239,   240,   241,   245,   246,   250,
     251,   252,   256,   257,   258,   262,   263,   267,   268,   272,
     273,   277,   278,   282,   283,   284,   285,   286,   287,   288,
     292,   293,   294,   295,   299,   300,   305,   306,   310,   311,
     315,   316,   317,   321,   322,   326,   327,   331,   332,   333,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   349,
     350,   351,   355,   356,   360,   361,   362,   363,   364,   365,
     369,   370,   371,   375,   376,   377,   378,   382,   383,   387,
     388,   392,   393,   397,   399,   401,   405,   407,   409,   411,
     416,   417,   418,   419,   420,   424,   425,   429,   430,   434,
     435,   436,   437
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "EXTERN", "REGISTER", "STATIC",
  "VOLATILE", "BREAK", "CONTINUE", "IF", "ELSE", "CASE", "DEFAULT", "DO",
  "FOR", "SWITCH", "WHILE", "CHAR", "DOUBLE", "ENUM", "FLOAT", "INT",
  "STRUCT", "UNION", "VOID", "CONST", "LONG", "SHORT", "SIGNED",
  "UNSIGNED", "GOTO", "RETURN", "SIZEOF", "TYPEDEF", "IDENTIFIER",
  "STR_LIT", "NUM", "FLOATNUM", "ELLIPSIS", "ASSIGN_BIT_RIGHT",
  "ASSIGN_BIT_LEFT", "ASSIGN_ADD", "ASSIGN_SUB", "ASSIGN_MULTI",
  "ASSIGN_DIV", "ASSIGN_MOD_DIV", "ASSIGN_BIT_AND", "ASSIGN_BIT_XOR",
  "ASSIGN_BIT_OR", "ASSIGN", "INCREMENT_OP", "DECREMENT_OP", "MEM_PTR",
  "MEM_SELECT", "TYPE_NAME", "LOGI_AND", "LOGI_OR", "LE", "GE", "LEEQ",
  "GEEQ", "EQ", "NEQ", "BIT_AND", "BIT_OR", "BIT_NOT", "BIT_XOR",
  "BIT_RIGHT_SH", "BIT_LEFT_SH", "SUB", "ADD", "DIV", "MOD", "NO_ELSE",
  "'('", "')'", "'['", "']'", "','", "'*'", "'?'", "':'", "';'", "'='",
  "'{'", "'}'", "$accept", "fundamental_exp", "extended_exp",
  "express_args_list", "unary", "unary_operator", "type_cast", "mul_div",
  "add_sub", "bit_shift_express", "relational", "equality_express",
  "and_express", "bit_xor_express", "bit_or_express", "logical_and",
  "logical_or", "conditional", "assign_express", "assignment_operator",
  "express", "constant_express", "declaration", "decl_specifiers",
  "initialization_declarators_list", "initialization_declarator",
  "storage_class_specifier", "type_specifier", "struct_union_specifier",
  "struct_union", "struct_decl_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "qualifier", "declarator", "direct_declarator", "pointer",
  "qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarations", "primary_abstract_declaration", "initializer",
  "initializer_list", "statement", "label_stmt", "braced_stmt",
  "decl_list", "statement_list", "express_stmt", "if_else_stmt",
  "loop_stmt", "transfer_ctrl_stmt", "start", "all_declarations",
  "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,    40,    41,    91,    93,    44,
      42,    63,    58,    59,    61,   123,   125
};
# endif

#define YYPACT_NINF -191

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-191)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     994,  -191,  -191,  -191,  -191,  -191,  -191,  -191,   -18,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,   -12,    12,  -191,   -27,  1227,  1227,  -191,   -14,
    -191,  1227,   532,    99,   -11,   570,  -191,  -191,   -74,    -1,
     -21,  -191,  -191,    12,  -191,   -10,  -191,   494,  -191,  -191,
     -45,  1295,  -191,   326,  -191,   -27,  -191,   532,  1113,  1293,
      99,  -191,  -191,    -1,   -25,   -36,  -191,  -191,  -191,  -191,
     -12,  -191,   742,  -191,   532,  1295,  1295,   608,  -191,     2,
    1295,    -5,   112,    50,  1385,    63,   829,    72,   140,   170,
     171,   147,  1410,   138,  -191,  -191,  -191,  1431,  1431,  -191,
    -191,  -191,  -191,  1035,  -191,  -191,  -191,  -191,    67,   325,
    1385,  -191,    42,    32,    64,   133,   166,   172,   187,   201,
     220,   -24,  -191,  -191,    33,  -191,  -191,  -191,   410,   671,
    -191,  -191,  -191,  -191,   198,  -191,  -191,  -191,  -191,   -15,
     207,   205,  -191,    62,  -191,  -191,  -191,  -191,   209,    10,
    1385,    -1,  -191,  -191,   742,  -191,  -191,  -191,   646,  -191,
    -191,  -191,  1385,    45,  -191,   203,  -191,  -191,  -191,  1385,
     206,   829,   273,  1229,  1385,  1385,   208,  -191,    60,  1035,
    -191,   829,  1385,  -191,  -191,    70,    54,   219,  -191,  -191,
     261,   262,   821,  1385,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  1385,  -191,  1385,  1385,  1385,
    1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,  1385,
    1385,  1385,  1385,  1385,  1385,  1385,  1385,  -191,  -191,   750,
    -191,  -191,   912,  1318,  -191,     4,  -191,   139,  -191,  1189,
    -191,   263,  -191,  -191,  -191,  -191,  -191,    22,  -191,  -191,
       2,  -191,  1385,   131,   829,  -191,   224,  1229,   145,   161,
    -191,  -191,   225,  -191,  -191,   950,   180,  -191,  1385,  -191,
    -191,  -191,   167,  -191,   181,  -191,  -191,  -191,  -191,    42,
      42,    32,    32,    64,    64,    64,    64,   133,   133,   166,
     172,   187,   201,   220,   -30,  -191,  -191,  -191,   226,   228,
    -191,   222,   139,  1151,  1339,  -191,  -191,  -191,   242,  -191,
    -191,  -191,   829,  -191,  1385,  1364,   829,   829,  -191,  -191,
    -191,  1385,  -191,  1385,  -191,  -191,  -191,  -191,   229,  -191,
     231,  -191,  -191,   299,   168,   829,   177,  -191,  -191,  -191,
    -191,  -191,  -191,   829,   232,  -191,   829,  -191,  -191,  -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    91,    89,    92,    90,   130,    94,    99,     0,    98,
      96,   108,   109,    93,   129,    97,    95,   100,   101,    88,
     133,   104,     0,   140,   208,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   124,     0,
       0,   144,   141,   142,    76,     0,    84,    86,    79,    81,
     107,     0,    83,     0,   187,     0,   212,     0,     0,     0,
     131,     1,   206,     0,   127,     0,   125,   134,   145,   143,
       0,    77,     0,   210,     0,     0,   114,     0,   110,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     5,     3,     4,     0,     0,    23,
      27,    26,    25,     0,    24,   191,   183,     7,    17,    28,
       0,    30,    34,    37,    40,    45,    48,    50,    52,    54,
      56,    58,    60,    73,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,    86,   188,   211,   153,   139,   152,
       0,   146,   148,     0,     2,   136,    28,    75,     0,     0,
       0,     0,   122,    85,     0,   169,    87,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,   202,   201,     0,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
      21,     0,     0,    18,    19,     0,   155,     0,    13,    14,
       0,     0,     0,     0,    69,    68,    66,    67,    63,    64,
      65,    70,    71,    72,    62,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   185,     0,
     184,   190,     0,     0,   150,   157,   151,   158,   137,     0,
     138,     0,   135,   123,   128,   126,   172,     0,   105,   120,
       0,   112,     0,     0,     0,   182,     0,     0,     0,     0,
     200,   204,     0,   180,     6,     0,   157,   156,     0,    12,
      11,     9,     0,    15,     0,    61,    32,    33,    31,    36,
      35,    39,    38,    41,    42,    43,    44,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,     0,   170,
     118,   121,     0,   181,     0,     0,     0,     0,    22,    29,
      10,     0,     8,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,   193,     0,     0,     0,   195,   196,    16,
      59,   168,   164,     0,     0,   198,     0,   194,   197,   199
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,  -191,  -191,   -56,  -191,   -98,    59,    61,   -28,
      53,    91,    93,    96,    97,    95,  -191,   -55,   -57,  -191,
     -89,   -62,     9,     0,  -191,   251,  -191,   128,  -191,  -191,
     248,   -71,   -29,  -191,    74,  -191,   313,   174,   158,    -9,
     -33,   -13,  -191,   -53,  -191,    87,  -191,   200,  -114,  -190,
    -136,  -191,   -54,  -191,    66,    52,   252,  -166,  -191,  -191,
    -191,  -191,   347,  -191
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   272,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   205,
     124,   148,    54,    55,    45,    46,    26,    27,    28,    29,
      77,    78,    79,   163,   164,    30,    65,    66,    31,    32,
      33,    34,    43,   298,   141,   142,   143,   187,   299,   237,
     156,   247,   125,   126,   127,    57,   129,   130,   131,   132,
     133,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,    60,   178,   146,   147,   140,   161,   257,    20,    24,
      42,    63,   206,    40,   185,   155,    47,    38,   246,     5,
      20,    50,   170,    20,    20,   236,    48,    49,   146,   147,
      69,    52,   172,   224,    64,    25,   180,    20,    14,    20,
      75,   183,   184,   151,    24,   302,   134,   159,    22,   226,
     152,   166,   323,    23,   146,    67,    44,   225,   139,   150,
     232,   134,   233,    22,    22,    23,   135,    39,    23,    70,
     165,    51,   267,    71,   186,   231,   302,    22,   167,   232,
     253,   233,    23,   135,   162,   258,   259,   161,   244,   151,
     185,   315,    23,   185,   146,   147,   243,   155,    56,    74,
     249,   308,   210,   211,   274,   128,   146,   147,   309,   276,
     277,   278,   226,    73,   207,   208,   227,   255,   188,   189,
     190,   191,   209,   136,   250,   169,   235,   263,   251,   265,
     234,   233,   212,   213,    23,   273,   294,   135,   240,   226,
     157,   241,   192,   261,   193,   171,   264,   173,   275,   226,
     186,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   295,
     319,   301,   332,   266,    58,   231,    59,   146,   147,    76,
      92,    41,   144,    94,    95,    96,   283,   284,   285,   286,
     311,   214,   215,   216,   217,   168,   146,   147,    97,    98,
     313,    68,    60,    76,    76,    76,   176,   312,    76,    80,
     226,    99,   146,   100,   303,   174,   304,   101,   102,   235,
     181,   316,   103,    40,   226,   334,   336,   104,   218,   219,
     177,    76,   139,    80,    80,    80,   220,   317,    80,   139,
     226,   165,   330,   320,   344,   175,   321,   226,   146,   147,
     328,   155,   266,   346,   221,   265,   226,   233,   333,   322,
     226,    80,   337,   338,   339,   139,   222,   146,   340,   279,
     280,   287,   288,   281,   282,    92,   223,   144,    94,    95,
      96,   345,    72,   238,   239,   252,    76,   242,   254,   347,
     256,   260,   349,    97,    98,   268,   269,   270,   307,   314,
     326,   318,   324,   139,   325,   341,    99,    76,   100,   342,
     343,   289,   101,   102,   290,   348,    80,   103,   291,   293,
     292,   153,   104,   158,   310,   245,   306,   154,   331,     1,
       2,     3,     4,     5,    81,    82,    83,    80,    84,    85,
      86,    87,    88,    89,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    90,    91,    92,
      19,    93,    94,    95,    96,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   149,    97,    98,   262,
     229,    21,    62,     0,     0,     0,     0,     0,     0,     0,
      99,     0,   100,     0,     0,     0,   101,   102,     0,     0,
       0,   103,     0,     0,     0,     0,   104,     0,     0,   105,
       0,    53,   106,     1,     2,     3,     4,     5,    81,    82,
      83,     0,    84,    85,    86,    87,    88,    89,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    90,    91,    92,    19,    93,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    98,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,   100,     0,     0,     0,
     101,   102,     0,     0,     0,   103,     0,     0,     0,     0,
     104,     0,     0,   105,     0,    53,   228,     1,     2,     3,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,     0,    19,     0,     0,     0,
      61,     0,     0,     1,     2,     3,     4,     5,    72,    53,
       0,     0,     0,     0,     0,     0,     0,    21,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     0,     0,     0,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,    53,     0,     0,
       0,     0,     0,     0,     0,    21,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
      23,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,    81,
      82,    83,     0,    84,    85,    86,    87,    88,    89,     0,
       0,     0,     0,     0,   160,     0,     0,     0,     0,     0,
       0,    21,    90,    91,    92,     0,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,   248,     0,     0,    99,     0,   100,     0,     0,
       0,   101,   102,     0,     0,     0,   103,     0,     0,     0,
       0,   104,     0,     0,   105,     0,    53,   230,    81,    82,
      83,     0,    84,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,    92,     0,   144,    94,    95,
      96,    90,    91,    92,     0,    93,    94,    95,    96,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,    97,    98,     0,     0,     0,    99,     0,   100,     0,
       0,     0,   101,   102,    99,     0,   100,   103,     0,     0,
     101,   102,   104,     0,     0,   103,     0,   154,     0,     0,
     104,     0,     0,   105,     0,    53,   296,    81,    82,    83,
       0,    84,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,    92,     0,   144,    94,    95,    96,
      90,    91,    92,     0,    93,    94,    95,    96,     0,     0,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,    99,     0,   100,     0,     0,
       0,   101,   102,    99,     0,   100,   103,   271,     0,   101,
     102,   104,     0,     0,   103,     0,     0,     0,     0,   104,
       0,     0,   105,     0,    53,     1,     2,     3,     4,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,     0,    19,    20,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     0,     0,     0,    19,     0,     0,   232,   297,   233,
       0,     0,    23,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   265,   297,   233,    19,    20,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,    92,    22,
     144,    94,    95,    96,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,    98,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,   100,     0,     0,     0,   101,   102,     0,     0,     0,
     103,     0,     0,     0,     0,   104,     1,     2,     3,     4,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,     0,     0,    19,   137,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     0,     0,     0,    19,     0,     0,     0,   138,
       0,     0,     1,     2,     3,     4,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,    19,     0,     0,     0,   327,   305,     0,
       1,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     0,     0,
       0,    19,    92,     0,   144,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    98,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,   100,     0,     0,     0,   101,
     102,     0,     5,     0,   103,     0,     0,     0,     0,   104,
       0,     0,   105,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    92,     0,   144,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    98,     0,     0,     0,     0,
      21,    92,     0,   144,    94,    95,    96,    99,     0,   100,
       0,     0,     0,   101,   102,     0,     0,     0,   103,    97,
      98,   145,    92,   104,   144,    94,    95,    96,     0,     0,
       0,     0,    99,     0,   100,     0,     0,     0,   101,   102,
      97,    98,     0,   103,     0,     0,   300,    92,   104,   144,
      94,    95,    96,    99,     0,   100,     0,     0,     0,   101,
     102,     0,     0,     0,   103,    97,    98,   329,    92,   104,
     144,    94,    95,    96,     0,     0,     0,     0,    99,     0,
     100,     0,     0,     0,   101,   102,    97,    98,     0,   103,
     335,     0,     0,    92,   104,   144,    94,    95,    96,    99,
       0,   100,     0,     0,     0,   101,   102,     0,     0,     0,
     103,    97,    98,     0,    92,   104,   144,    94,    95,    96,
       0,     0,     0,     0,    99,     0,   100,     0,     0,     0,
     101,   102,    97,    98,     0,   179,     0,     0,     0,     0,
     104,     0,     0,     0,     0,    99,     0,   100,     0,     0,
       0,   101,   102,     0,     0,     0,   182,     0,     0,     0,
       0,   104
};

static const yytype_int16 yycheck[] =
{
       0,    34,    91,    59,    59,    58,    77,   173,    35,     0,
      23,    85,   110,    22,   103,    72,    25,    35,   154,     7,
      35,    35,    84,    35,    35,   139,    26,    27,    84,    84,
      43,    31,    86,    57,    35,    35,    92,    35,    26,    35,
      85,    97,    98,    79,    35,   235,    55,    76,    75,    79,
      86,    80,    82,    80,   110,    76,    83,    81,    58,    84,
      75,    70,    77,    75,    75,    80,    57,    85,    80,    79,
      79,    85,   186,    83,   103,   129,   266,    75,    83,    75,
     169,    77,    80,    74,    82,   174,   175,   158,   150,    79,
     179,   257,    80,   182,   150,   150,    86,   154,    32,    47,
     162,    79,    70,    71,   193,    53,   162,   162,    86,   207,
     208,   209,    79,    47,    72,    73,    83,   171,    51,    52,
      53,    54,    80,    57,    79,    75,   139,   181,    83,    75,
     139,    77,    68,    69,    80,   192,   225,   128,    76,    79,
      74,    79,    75,    83,    77,    82,    76,    75,   205,    79,
     179,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   226,
     268,   233,   308,   186,    75,   229,    77,   233,   233,    51,
      33,    23,    35,    36,    37,    38,   214,   215,   216,   217,
     252,    58,    59,    60,    61,    83,   252,   252,    51,    52,
     254,    43,   235,    75,    76,    77,    35,    76,    80,    51,
      79,    64,   268,    66,    75,    75,    77,    70,    71,   232,
      82,    76,    75,   232,    79,   314,   315,    80,    62,    63,
      83,   103,   232,    75,    76,    77,    64,    76,    80,   239,
      79,   250,   304,    76,    76,    75,    79,    79,   304,   304,
     303,   308,   265,    76,    67,    75,    79,    77,   312,    78,
      79,   103,   316,   317,   321,   265,    65,   323,   323,   210,
     211,   218,   219,   212,   213,    33,    56,    35,    36,    37,
      38,   335,    84,    76,    79,    82,   158,    78,    82,   343,
      17,    83,   346,    51,    52,    76,    35,    35,    35,    75,
      78,    76,    76,   303,    76,    76,    64,   179,    66,    78,
      11,   220,    70,    71,   221,    83,   158,    75,   222,   224,
     223,    70,    80,    75,   250,   151,   239,    85,    86,     3,
       4,     5,     6,     7,     8,     9,    10,   179,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    63,    51,    52,   179,
     128,    55,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      -1,    85,    86,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    85,    86,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
       0,    -1,    -1,     3,     4,     5,     6,     7,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    64,    -1,    66,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    85,    86,     8,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      38,    31,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,    64,    -1,    66,    -1,
      -1,    -1,    70,    71,    64,    -1,    66,    75,    -1,    -1,
      70,    71,    80,    -1,    -1,    75,    -1,    85,    -1,    -1,
      80,    -1,    -1,    83,    -1,    85,    86,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    64,    -1,    66,    -1,    -1,
      -1,    70,    71,    64,    -1,    66,    75,    76,    -1,    70,
      71,    80,    -1,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    85,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,    75,    76,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    75,    76,    77,    34,    35,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    75,
      35,    36,    37,    38,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    66,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    76,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    76,    39,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    70,
      71,    -1,     7,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,
      55,    33,    -1,    35,    36,    37,    38,    64,    -1,    66,
      -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    75,    51,
      52,    78,    33,    80,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    70,    71,
      51,    52,    -1,    75,    -1,    -1,    78,    33,    80,    35,
      36,    37,    38,    64,    -1,    66,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    75,    51,    52,    78,    33,    80,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    70,    71,    51,    52,    -1,    75,
      76,    -1,    -1,    33,    80,    35,    36,    37,    38,    64,
      -1,    66,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      75,    51,    52,    -1,    33,    80,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,
      70,    71,    51,    52,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    34,
      35,    55,    75,    80,   109,   110,   113,   114,   115,   116,
     122,   125,   126,   127,   128,   148,   149,   150,    35,    85,
     126,   125,   128,   129,    83,   111,   112,   126,   110,   110,
      35,    85,   110,    85,   109,   110,   141,   142,    75,    77,
     127,     0,   149,    85,    35,   123,   124,    76,   125,   128,
      79,    83,    84,   141,   142,    85,   114,   117,   118,   119,
     125,     8,     9,    10,    12,    13,    14,    15,    16,    17,
      31,    32,    33,    35,    36,    37,    38,    51,    52,    64,
      66,    70,    71,    75,    80,    83,    86,    88,    89,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   107,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   126,   109,   141,    35,    76,   110,
     130,   131,   132,   133,    35,    78,    91,   104,   108,   123,
      84,    79,    86,   112,    85,   105,   137,   141,   117,   119,
      86,   118,    82,   120,   121,   126,   119,    83,    83,    75,
     108,    82,   139,    75,    75,    75,    35,    83,   107,    75,
      91,    82,    75,    91,    91,   107,   119,   134,    51,    52,
      53,    54,    75,    77,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   106,    93,    72,    73,    80,
      70,    71,    68,    69,    58,    59,    60,    61,    62,    63,
      64,    67,    65,    56,    57,    81,    79,    83,    86,   143,
      86,   139,    75,    77,   126,   128,   135,   136,    76,    79,
      76,    79,    78,    86,   108,   124,   137,   138,    86,   108,
      79,    83,    82,   107,    82,   139,    17,   144,   107,   107,
      83,    83,   134,   139,    76,    75,   128,   135,    76,    35,
      35,    76,    90,   105,   107,   105,    93,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      99,   100,   101,   102,   107,   105,    86,    76,   130,   135,
      78,   108,   136,    75,    77,    39,   132,    35,    79,    86,
     121,   108,    76,   139,    75,   144,    76,    76,    76,    93,
      76,    79,    78,    82,    76,    76,    78,    76,   130,    78,
     108,    86,   137,   139,   107,    76,   107,   139,   139,   105,
     104,    76,    78,    11,    76,   139,    76,   139,    83,   139
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   116,   116,
     117,   117,   118,   119,   119,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     140,   140,   140,   141,   141,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   145,   146,   146,   146,   146,
     147,   147,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   150
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 1861 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 439 "syntax.y" /* yacc.c:1906  */


int main(){
	yyin = fopen("input.c", "r");
	yyparse();
	fclose(yyin);
	return 0;
}
