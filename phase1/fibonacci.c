// WAP to print Fibonacci Series
#include <stdio.h>
int main()
{

    int n, t1 = 0, t2 = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d ", t1, t2);
    for (int i = 3; i <= n; i++)
    {
        next = t1 + t2;
        printf(", %d", next);
        t1 = t2;
        t2 = next;
        next = t1 + t2;
    }
    return 0;
}
