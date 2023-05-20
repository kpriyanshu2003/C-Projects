// WAP to show the use of double pointer
#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50, 60};
    // int *p = &a[0];
    int *b[] = {a + 3, a + 5, a, a + 4, a + 1, a + 3};
    int **c = b;
    printf("%ld %ld %d\n", c - b, *c - a, **c);
    return 0;
}
