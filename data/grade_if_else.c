// WAP to display the grade system of KIIT University based on total marks secured by a student in a semester. Use else...if ladder statement.

#include <stdio.h>
int main()
{
    int ch, mks;
    printf("Enter the marks secured : ");
    scanf("%d", &mks);
    if (mks > 100 || mks < 0)
        printf("Enter marks in the range of 0 ~ 100.");
    else if (mks <= 100 && mks >= 90)
        printf("Grade : O");
    else if (mks < 90 && mks >= 80)
        printf("Grade : E");
    else if (mks < 80 && mks >= 70)
        printf("Grade : A");
    else if (mks < 70 && mks >= 60)
        printf("Grade : B");
    else if (mks < 60 && mks >= 50)
        printf("Grade : C");
    else if (mks < 50 && mks >= 40)
        printf("Grade : D");
    else if (mks < 40)
        printf("Grade : F");
    else
        printf("Invalid Marks");
    return 0;
}