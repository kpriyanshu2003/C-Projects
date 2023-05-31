// Print the number entered by the user in reverse order
#include <stdio.h>
int main()
{
    int a[10];
    printf("Enter 10 numbers : ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("The array in reverse order : \n");
    for (int i = 10-1; i >= 0; i--)
        printf("%d ", a[i]);
    return 0;
}
