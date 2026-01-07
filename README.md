# COMPILER-DESIGN-BASICS
Lexical Analyzer in C 
 Description

This program implements a basic lexical analyzer in C.
It reads a mathematical expression from the user and identifies different tokens such as:

Identifiers

Numbers

Operators

Special symbols

Each character in the expression is analyzed individually and classified accordingly.

Objective

To understand the lexical analysis phase of a compiler, where the input expression is broken into meaningful tokens.

Features

Accepts a full mathematical expression as input

Identifies alphabets as identifiers

Identifies digits (0–9) as numbers

Recognizes common operators

Detects special symbols

Simple and beginner-friendly logic

 Tokens Identified
Token Type	Description
Identifier	Alphabet characters (a–z, A–Z)
Number	Digits from 0 to 9
Operator	+ - * / =
Special Symbol	; , ( )
 Input

A mathematical expression entered by the user.
Example:

a=b+5*(c-2);

 Output

Each character of the expression is printed along with its token type.

Example Output:

a : Identifier
= : Operator
b : Identifier
+ : Operator
5 : Number
* : Operator
( : Special Symbol
c : Identifier
- : Operator
2 : Number
) : Special Symbol
; : Special Symbol

 Concepts Used

Character array

while loop

Conditional statements (if–else)

isalpha() function

Basic compiler design concept (Lexical Analysis)

 Limitations

Handles single-character identifiers only

Multi-digit numbers are treated as separate digits

Does not handle keywords or floating-point numbers

No error handling for invalid characters

 Applications

Compiler design experiments

Understanding tokenization

Academic and lab exercises

Beginners learning C programming

Conclusion

This program demonstrates the basic working of a lexical analyzer by classifying characters into tokens. It is ideal for beginners to understand how compilers process source code at the lexical level.
