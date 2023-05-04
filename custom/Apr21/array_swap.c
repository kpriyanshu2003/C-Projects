// WAP to swap values between two arrays
#include <stdio.h>
int main()
{
    int a1[] = {10, 20, 30, 40, 50};
    int a2[] = {100, 200, 300, 400, 500};
    for (int i = 0; i < 5; i++)
    {
        a1[i] = a1[i] + a2[i];
        a2[i] = a1[i] - a2[i];
        a1[i] = a1[i] - a2[i];
    }
    printf("Swapped Arrays : \n");
    for (int i = 0; i < 5; i++)
        printf("%d ", a1[i]);
    printf("\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", a2[i]);
    return 0;
}