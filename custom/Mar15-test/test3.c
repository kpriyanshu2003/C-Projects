// WAP to enter entire roll no and separate year, course code and roll
#include <stdio.h>
int main()
{
    int rollno, code, year, roll;
    printf("Enter your roll no : ");
    scanf("%d", &rollno);
    roll = rollno % 10000;
    rollno = rollno / 10000;
    code = rollno % 100;
    year = rollno / 100;
    printf("%d %d %d", year, code, roll);
    return 0;
}