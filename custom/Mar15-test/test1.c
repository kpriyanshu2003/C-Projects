// WAP to enter year, course code, and roll no and print the entire roll no.
#include <stdio.h>
int main()
{
    int roll, rollno, ccode, year;
    printf("Enter the year, course code and roll no : ");
    scanf("%d %d %d", &year, &ccode, &roll);
    rollno = roll + (ccode * 10000) + (year * 1000000);
    printf("%d", rollno);
    return 0;
}