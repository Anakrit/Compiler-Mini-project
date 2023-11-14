Compiler Design Mini-Project for C language
============================================

### Team Members
 1. Anant Singh - 211cs104
 2. Harsh Vardhan Singh - 211cs128
 3. Ansh Rajvanshi - 211cs106

# Lexical Analyzer

This folder contains the code for the Lexical Analyzere.

|file|contents|
|----|--------|
|lexer.l|lex file with rules|
|symboltable.h|symbol table implementation using hash organisation|
|tokens.h| tokens used (as enums)|

# Syntax Analyzer

This folder contains the code for the Syntax/Parser Analyzer.

|file|contents|
|----|--------|
|syntax.l| lex file with rules|
|syntax.y|[ definitions ] %% [ rules ] [ %% [ user functions ]|

# Semantic Analyzer

This folder contains the code for the Semantic Analyzer.

|file|contents|
|----|--------|
|scanner.l|Extended regular expressions, Character patterns, Definitions, Translations, Functions, Rules, Actions|
|parser.y|[ definitions ] %% [ rules ] [ %% [ user functions ]|

### The test cases are in the test-cases/tests folder.
