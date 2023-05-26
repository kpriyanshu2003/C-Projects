// WAP to get the indices of two numbers in a given array of integers. This will enable you to get the sum of two numbers equal to a specific target.

#include <stdio.h>
int main()
{
    int n, t;
    printf("Enter the number of elemets : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter target value : ");
    scanf("%d", &t);
    printf("Indices of numbers whose sum equals to target value %d : \n", t);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n && j != i; j++)
        {
            if (a[i] + a[j] == t)
                printf("%d %d\n", i, j);
        }
    }
    return 0;
}