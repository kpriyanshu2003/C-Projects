# Basic Linux Commands and Their Functions

1. Cat : It is used to create a file as well as read a file<br>
   Syntax - `cat > <filename>.<extension>`

2. Saving a file : Ctrl + D

3. Opening a terminal : Ctrl + Alt + T <br>
   Example - Display how to create a file
   `cat > hello.txt`

4. Touch : It is used to create an empty file <br>
   Syntax : `touch <filename>.<extension>`

5. Creating list of files to display them <br>
   The command used to display list of files - `ls`

6. a. Viewign full calendar : <br>
   Syntax : `cal year` <br>
   Example : `cal 2023`

b. Viewing current month with year specifically <br>
Syntax : `cal month year` <br>
Examples : `cal 11 2023`

c. Viewing current month <br>
Syntax: `cal`

8.  Removing a file : <br>
    Syntax : `rm <filename>.<extension>` <br>
    Example : `rm hello.txt`

9.  Copying a file : <br>
    Syntax : `cp <filename> <filename>`

10. Moving or rename a file : <br>
    Syntax : `mv <location>/<filename>  <location>/<filename>` <br>
    Example : `mv hello.txt test.txt` <- Rename <br>
    Example : `mv ~/home/folder1/hello.txt ~/home/folder2/hello.txt`

11. Linking two files : <br>
    Syntax : `ln` <br>
    Example : `ln <old-file> <new-file>`

12. Adding lines or records : <br>
    Syntax: `cat >> <filename> (add lines)`

13. ls -> List directories and files <br>
    a. ls -p -> <br>
    b. ls -x -> <br>
    c. ls -a -> List all files and directories (including hidden) <br>
    d. ls - l -> Display files in long listed format

14. Display a date <br>
    Syntax: `date`

15. MAN -> Manual Help <br>
    Syantax: `man <command>` <br>
    Example: `man cat`

16. wc -> Used to find out the no. of lines, words and letters <br>
    Syntax : <br>
    a. `wc -l -> no of lines` <br>
    b. `wc -c -> no characters` <br>
    c. `wc -w -> no of words`

    Examples : <br>
    a. `wc -l <filename>` <br>
    b. `wc -c <filename>` <br>
    c. `wc -w <filename>`

17. Cleating the screen <br>
    Type 'clear' or Ctrl + C to clear the screen

18. How to get to the C programming screen <br>
    Syntax : `gedit <program_name>.c` <br>
    Examples : `gedit sample.c`

19. How to compile programs <br>
    Syntax : `gcc <program_name>.c` <br>
    Examples : `gcc sample.c`

20. How to view output <br>
    Syntax : `./a.out`

21. How to create directory <br>
    Syntax : `mkdir <name1> <name2> <name3> ... ` <br>
    Examples : `mkdir uno dos tres cuatro cinco`

22. How to change directory <br>
    Syntax : `cd <name_of_directory>` <br>
    Exmples : `cd test`

23. Use `pwd` command know the path of the directory

24. Come out of current directory : `cd ..`
