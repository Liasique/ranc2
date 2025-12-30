ask: first_word

Description:
Write a program that prints the first word of the string passed as an argument.
	•	A word is a sequence of characters without spaces or tabs
	•	Ignore spaces and tabs at the beginning of the string
	•	If the number of arguments is not exactly 1, print only a newline (\n)

```
$ ./first_word "  Bonjour le monde"
Bonjour

$ ./first_word "Salut"
Salut

$ ./first_word "   "
(empty line)

$ ./first_word
(empty line)

```

Algorithm:
	1.	Check that argc == 2
	2.	Skip spaces ' ' and tabs '\t'
	3.	Print characters until a space, a tab, or \0 is encountered
	4.	Print a newline (\n) at the end