// WAP to use comma operator
#include <stdio.h>
int main()
{
    int n, result;
    printf("Enter a number : ");
    scanf("%d", &n);
    result = (n++,n) ;
    printf("Result : %d\n", result);
    return 0;
}
