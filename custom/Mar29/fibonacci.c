// WAP to print fibonacci series up to n number of terms
#include <stdio.h>
int main()
{

    int i, n;
    int t1 = 0, t2 = 1, t3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n%d %d ", t1, t2);
    for (i = 3; i <= n; ++i)
    {
        t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }
    return 0;
}
