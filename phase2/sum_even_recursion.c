// WAP to find sum of even elements of an array
#include <stdio.h>
int sumEven(int arr[], int size)
{
    if (size == 0)
        return 0;
    int lastElement = arr[size - 1];
    if (lastElement % 2 == 0)
        return lastElement + sumEven(arr, size - 1);
    else
        return sumEven(arr, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Sum of even numbers in the array: %d", sumEven(arr, 6));
    return 0;
}
