// Program to find SGPA for a semester

#include <stdio.h>

char grade(int marks)
{
    if (marks <= 100 && marks >= 90)
        return 'O';
    else if (marks <= 89 && marks >= 80)
        return 'E';
    else if (marks <= 79 && marks >= 70)
        return 'A';
    else if (marks <= 69 && marks >= 60)
        return 'B';
    else if (marks <= 59 && marks >= 50)
        return 'C';
    else if (marks <= 49 && marks >= 40)
        return 'D';
    else
        return 'F';
}

int points(int marks)
{
    if (marks <= 100 && marks >= 90)
        return 10;
    else if (marks <= 89 && marks >= 80)
        return 9;
    else if (marks <= 79 && marks >= 70)
        return 8;
    else if (marks <= 69 && marks >= 60)
        return 7;
    else if (marks <= 59 && marks >= 50)
        return 6;
    else if (marks <= 49 && marks >= 40)
        return 5;
    else if (marks <= 39 && marks >= 30)
        return 4;
    else if (marks <= 29 && marks >= 20)
        return 3;
    else if (marks <= 19 && marks >= 10)
        return 2;
    else if (marks <= 9 && marks >= 0)
        return 0;
    else
        return -1;
}

int main()
{
    int n, sum1 = 0, sum2 = 0;
    printf("Enter the total number of subjects including labs : ");
    scanf("%d", &n);
    int mks[n][2];
    for (int i = 0; i < n; i++)
    {
        printf("Enter total marks for subjects %d : ", (i + 1));
        scanf("%d", &mks[i][0]);
        printf("Enter the credits for the subject entered : ");
        scanf("%d", &mks[i][1]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Subject %d:-\n", i + 1);
        printf("Total : %d\n", mks[i][0]);
        printf("Grade : %c\n", grade(mks[i][0]));
        printf("Points : %d\n\n", (mks[i][1] * points(mks[i][0])));
        sum1 = mks[i][1] * points(mks[i][0]) + sum1;
        sum2 = mks[i][1] + sum2;
    }
    printf("Your SGPA : %f", (float)sum1 / sum2);
    return 0;
}