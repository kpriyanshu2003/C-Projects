// WAP to find all distinct triplets in a given array of integers whose sum is equal to zero
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The index of elements which form triplet are : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
                if (a[i] + a[j] + a[k] == 0)
                    printf("%d %d %d\n", i, j, k);
        }
    }
    return 0;
}