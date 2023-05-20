// WAP to display nth term of fibonacci series

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("The %dth term is : ", n);
    int t1 = 0, t2 = 1, nxt;
    for (int i = 3; i <= n; i++)
    {
        nxt = t1 + t2;
        t1 = t2;
        t2 = nxt;
    }
    printf("%d ", t1);
    return 0;
}