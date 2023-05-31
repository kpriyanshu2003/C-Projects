// WAP to display the grade system of KIIT University based on total marks secured by a student in a semester. Use switch-case statement. Calculate the grade of the student according to the percentage of the mark.
#include <stdio.h>
int main()
{
    int ch, mks;
    printf("Enter the marks secured : ");
    scanf("%d", &mks);
    if (mks > 100 || mks < 0)
    {
        printf("Enter marks in the range of 0 ~ 100.");
        goto h;
    }
    ch = mks / 10;
    switch (ch)
    {
    case 10:
    case 9:
        printf("Grade : O");
        break;
    case 8:
        printf("Grade : E");
        break;
    case 7:
        printf("Grade : A");
        break;
    case 6:
        printf("Grade : B");
        break;
    case 5:
        printf("Grade : C");
        break;
    case 4:
        printf("Grade : D");
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Grade : F");
        break;
    default:
        printf("Invalid Marks");
    h:
        break;
    }
    return 0;
}