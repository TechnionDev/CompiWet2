/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     VOID = 258,
     INT = 259,
     BYTE = 260,
     B = 261,
     BOOL = 262,
     TRUE = 263,
     FALSE = 264,
     RETURN = 265,
     WHILE = 266,
     BREAK = 267,
     CONTINUE = 268,
     CASE = 269,
     DEFAULT = 270,
     COLON = 271,
     SC = 272,
     COMMA = 273,
     LBRACE = 274,
     RBRACE = 275,
     ID = 276,
     NUM = 277,
     STRING = 278,
     ASSIGN = 279,
     OR = 280,
     AND = 281,
     RELOPL = 282,
     RELOPN = 283,
     ADD = 284,
     MUL = 285,
     RPAREN = 286,
     IF = 287,
     ELSE = 288,
     SWITCH = 289,
     LPAREN = 290,
     NOT = 291,
     EPSILON = 292,
     AUX = 293
   };
#endif
/* Tokens.  */
#define VOID 258
#define INT 259
#define BYTE 260
#define B 261
#define BOOL 262
#define TRUE 263
#define FALSE 264
#define RETURN 265
#define WHILE 266
#define BREAK 267
#define CONTINUE 268
#define CASE 269
#define DEFAULT 270
#define COLON 271
#define SC 272
#define COMMA 273
#define LBRACE 274
#define RBRACE 275
#define ID 276
#define NUM 277
#define STRING 278
#define ASSIGN 279
#define OR 280
#define AND 281
#define RELOPL 282
#define RELOPN 283
#define ADD 284
#define MUL 285
#define RPAREN 286
#define IF 287
#define ELSE 288
#define SWITCH 289
#define LPAREN 290
#define NOT 291
#define EPSILON 292
#define AUX 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

