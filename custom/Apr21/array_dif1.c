// 	WAP to store values in an array which has a difference of 1 with them
#include <stdio.h>
int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
        n[i] = i + 100;
    for (int i = 0; i < 10; i++)
        printf("Element [%d[ is %d ", i, n[i]);
    return 0;
}