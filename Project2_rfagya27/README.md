# CS333 - Project 2 - README
### ROSE FRIMPOMAA AGYAPONG
### 

***Google Sites Report: (https://sites.google.com/colby.edu/rosefrimpomaa/home)***

## Directory Layout:
```
Project2_rfagya27/
├── clite_parser_test.txt
├── clite_parser.yy
├── count_vowels.yy
├── encode_extension_test.txt
├── encode_extension.yy
├── encode.txt
├── encode.yy
├── encryption_extension.yy
├── encryption_test.txt
├── html_stripper.yy
├── odd_even_test.txt
├── odd_even.yy
├── test_stripper.txt
├── README.md
```

## OS and C compiler
OS: OSX Ventura 13.6.7 
C compiler: Apple clang version 15.0.0 (clang-1500.0.40.1)

## Part I 
### task 1
**Compile:** $ gcc -o encode lex.yy.c -ll

**Run:** $ ./encode encode.txt

**Output:**
Uryyb, Jbeyq!
Zl anzr vf Ntlncbat!

**Screenshot** ![alt text](<Screenshot 2025-03-08 at 6.39.43 PM.png>)

**Explanation**
alphabetical character (both lowercase and uppercase) by 13 positions in the alphabet, wrapping
around if necessary. The main matching rule matches `[a-z]` and `[A-Z]` as lowercase and
uppercase letters respectively. It also has the `.` rule which matches any character except newline.
The program also prints non-alphabetical characters unchanged.
Example of shifting a specific letter:
Taking the letter 'C' as an example. When 'C' is encountered in the input string, according to the
code, it will be shifted by 13 positions forward in the alphabet. Since 'T' is the 3rd letter in the
alphabet, shifting it by 13 positions will result in 'P' ('C' + 13 = 'P'). Therefore, the letter 'C' is correctly
shifted to 'P' as expected.
Additionally, we can see that when I run the code using the output from the first run (“My name is
Agyapong!”), we get back the original input (“Zl anzr vf Ntlncbat!”)


### task 2
**Compile:** $ gcc -o count_vowels lex.yy.c -ll

**Run:** $ ./count_vowels encode.txt

**Screenshot** ![alt text](<Screenshot 2025-03-08 at 6.48.07 PM.png>)

**Output:**
Number of Rows: 1
Number of Characters: 34
Occurrences of each vowel:
a: 3
e: 2
i: 1
o: 3
u: 0

**Explanation**
This code is a program that reads an input file, counts the number of rows, characters, and
occurrences of each vowel (a, e, i, o, u) in the file, and then prints out the counts.
The rules defined in the Flex section match newline characters (`\n`) and all other characters (`.`).
When a newline character is encountered, the row count is incremented (`rows++`). For other
characters, the character count is incremented (‘characters++’), and a switch statement is used to
check if the character is a vowel (`a`, `e`, `i`, `o`, `u`). If it is, the corresponding count in the `vowels`
array is incremented .
Using the picture above as the example, we can see that the number of characters, the number of
rows and the occurences of each vowel is consistent with what can be seen in the picture, which
demonstrates that the code works. Thus, as an example, there are two e’s in the picture which are
consistent with the output.

 
### task 3
**Compile:** $ gcc -o html_stripper lex.yy.c -ll

**Run:** $ ./html_stripper test_stripper.txt

**Screenshot** ![alt text](<Screenshot 2025-03-08 at 7.39.01 PM.png>)

**Output:**
This is a page title
Here is a header
Here is some body text in a paragraph
Here is a link to cs.colby.edu
inside a paragraph.

This is the final paragraph.

**EXplanation**
This Flex code serves as a lexical analyzer for HTML-like files. It processes input text, removing
extraneous whitespace, comments, and certain tags. The program takes an HTML-like input file and
performs various operations on it. These operations include removing leading and trailing
whitespace, removing HTML comments, and condensing multiple whitespace characters into a
single space. The resulting processed text is then printed to the standard output. These rules
collectively process the input file, performing the defined operations. For instance, when handling a
comment like `<!-- This is a comment -->`, the lexer will eliminate the comment, resulting in the
removal of that segment from the output.
Example:
Using the input <p>Hello, world!</p>
When this input is processed, it will remove the comment and extra whitespace, resulting in the
output: Hello, world!

### task 4
**Compile:** $ gcc -o clite_parser lex.yy.c -ll

**Run:** $ ./clite_parser clite_parser_test.txt

**Screenshot** ![alt text](<Screenshot 2025-03-08 at 6.56.48 PM.png>)

**Output:**
Keyword-int
Identifier-main
Open-paren
Close-paren
Open-bracket
Keyword-int
Identifier-a
Assignment
Integer-6
Keyword-int
Identifier-b
Assignment
Float-5.0
Keyword-if
Open-paren
Identifier-a
Comparison-<
Identifier-b
Close-paren
Open-bracket
Identifier-a
Assignment
Identifier-a
Operator-+
Identifier-b
Close-bracket
Close-bracket

**Explanation**
This code is a simple parser for a language. It reads input from a file and tokenizes it, identifying
various components of the language such as keywords, integers, floats, identifiers, operators, and
brackets.
It defines patterns to match different tokens in the input text, such as keywords (`if`, `else`, `while`,
`for`, `int`, `float`), numbers (integers and floats), identifiers (variable names), operators (`=`, `==`,
`<`, `>`, `<=`, `>=`, `+`, `-`, `*`, `/`), and brackets (`{`, `}`, `(`, `)`). For each token matched, it prints the
token type along with its value. For example, it prints `Keyword-if`, `Integer-123`, `Identifier-x`,
`Operator-+`, etc. It ignores whitespace characters and semicolons.
As an example of how one particular token is handled (the float), we can see that the formatting for
the float is as expected. It uses an integer, followed by a dot and another integer.


*Please note that you don't need Part II for Project 1 as it doesn't require you to write any programs. However, you are expected to include Part II for future projects to illustrate how to compile and run your selected language programs and the outputs you get from them.*

## Part II - C#
### task 1 
- Organized the google page
- Created a subpage where I added code for a game as an extension


*Please have a description of each extension you undertook*

## Extensions
### extension 1
**Description** Make the encoder more complex

**Compile:** gcc -o encode_extension lex.yy.c -ll

**Run:** ./encode_extension encode_extension_test.txt 13

**screenshot** ![alt text](<Screenshot 2025-03-08 at 7.47.33 PM.png>)

**Output:**
NOPQRSTU
nopqrstu
Uryyb, Jbeyq!

**Explanation**
This extension takes input from a specified file and shifts each character in the range a-z or
A-Z by a fixed amount specified by the user, wrapping around from z back to a. This
extension allows users to specify the number of spaces the character should shift by.
The Flex rules define patterns to match lowercase letters `[a-z]` and uppercase letters
`[A-Z]`. Each matched letter is shifted by a certain amount in the alphabet.
The shifted characters are printed. For the example "ABCDEFGH" shifted to "ZABCDEFG"
after the user inputted 25 as the shift value:
- 'A' is shifted forward by 25 positions, resulting in 'Z'.
- 'B' is shifted forward by 25 positions, resulting in 'A'.
- 'C' is shifted forward by 25 positions, resulting in 'B'.
- 'D' is shifted forward by 25 positions, resulting in 'C'.
- 'E' is shifted forward by 25 positions, resulting in 'D'.
- 'F' is shifted forward by 25 positions, resulting in 'E'.
- 'G' is shifted forward by 25 positions, resulting in 'F'.
- 'H' is shifted forward by 25 positions, resulting in 'G'.
I tested correctness by specifying 13 as the shift value to make sure it outputted the same
value as the encode file I had written earlier.

### extension 2
**Description** Encryption

**Compile:** gcc -o encryption_extension lex.yy.c -ll

**Run:** ./encryption_extension encryption_test.txt

**Screenshot** ![alt text](<Screenshot 2025-03-08 at 7.53.26 PM.png>)

**Output:** ZYXWVUTS

**EXplanation**
This code implements an encoder using a substitution cipher. It takes input from a specified
file and encrypts each character using a predetermined substitution key. The substitution
key `substitutionKey` is defined as an array of characters. In this example, it is set to
"ZYXWVUTSRQPONMLKJIHGFEDCBA", which represents the reverse alphabet.
The flex rules match lowercase letters `[a-z]` and uppercase letters `[A-Z]`. Each matched
letter is substituted with the corresponding letter from the substitution key. For lowercase
letters, the ASCII value of the character is used to index into the substitution key, and the
corresponding character is printed. For uppercase letters, the same process is followed, but
adjustments are made to handle uppercase ASCII values.
- Any other characters (symbols, numbers, spaces, etc.) are printed unchanged.
For the example "ABCDEFGH":
- 'A' is replaced by 'Z'
- 'B' is replaced by 'Y'.
- 'C' is replaced by 'X'.
- 'D' is replaced by 'W'.
- 'E' is replaced by 'V'.
- 'F' is replaced by 'U'.
- 'G' is replaced by 'T'.
- 'H' is replaced by 'S'.
So, "ABCDEFGH" is encrypted to "ZYXWVUTS" using the provided substitution key.

### extension 3
**Description** Count even and odd numbers

**Compile:** gcc lex.yy.c -o odd_even -ll

**Run:** ./odd_even < odd_even_test.txt

**Screenshot** ![alt text](<Screenshot 2025-03-08 at 7.13.43 PM.png>)

**Output:** 
Number of even numbers: 13
Number of odd numbers: 7

**Explanation**
This extension begins by defining patterns to match sequences of digits, representing
numbers in the input text file. For each matched sequence, the program converts the text to
an integer and checks whether it's even or odd using a modulo operation (%). Based on the
result, it increments the corresponding count variable. Finally, after processing the entire
input, the program prints out the counts of even and odd numbers. This process allows for
efficient identification and tallying of even and odd numbers within the input text.


### extension 4
**Description** Check site for extension
