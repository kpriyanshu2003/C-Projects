# notes

1. const -> Cannot be reinitialised
2. volatile -> Can be changed anytime by another program
3. volatile const -> Cannot be changed by program but can be changed by external process
4. enum -> Set a user defined data type
5. Functions -
   isaplha(char)
   isdigit(char)
   isalnum(char)
   islower(char)
   isupper(char)
   isprint(char)
   ispunct(char)
   isspace(char)
6. Take String Input :- scanf("%[^\n]", var_name);
7. %x -> Display Hex witout 0x
8. %d -> Convert entered HEX into DEC
9. %o -> Convert entered DEC to OCT
10. Functions -
    gets(string) -> Get entire string
    getchar(string) -> Get 1st character
11. Comma can be used operator.

```
int a = 10, b = 20;
int result = (a,b);
```

Here, the result variable stores the value in b, meaning the value which is to the right most is assigned.

The Use of Comma Operator :- When we use comma operator, all the expressions within the bracket (bracket not necessary) will be executed. But, the rightmost expression's value will be stored in the variable.
