// WAP to swap values of two numbers using pointers
#include <stdio.h>
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("After swapping : %d %d", a, b);
    return 0;
}