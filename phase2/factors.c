// WAP to print factors of positive integer
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);
    printf("The factos of %d are : \n", num);
    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            printf("%d ", i);
    return 0;
}
