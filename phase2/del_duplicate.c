// WAP to delete all duplicate values in a 1D array
#include <stdio.h>
int main()
{
    int n = 10, arr[] = {3, 7, 2, 3, 7, 8, 1, 2, 9, 11};
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (arr[j] == arr[i])
            {
                for (int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;
            }
            else
                j++;
        }
    }
    printf("Array without duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}