// WAP to print a number in letters.
#include <stdio.h>
int main()
{
    int n, d, s = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        s = s * 10 + d;
        n /= 10;
    }
    n = s;
    while (n != 0)
    {
        d = n % 10;
        switch (d)
        {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;

        case 9:
            printf("Nine");
            break;
        default:
            printf("Error");
            break;
        }
        n /= 10;
        printf(" ");
    }
    return 0;
}