// Initialize an array. Divide it in pairs of 3. Add the 3 terms and store it in place of 2nd term.
#include <stdio.h>
int main()
{
    int n = 6, a[n];
    printf("Enter %d values :  ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i += 3)
    {
        int s = 0;
        for (int j = i; j <= (i + 2); j++)
            s = s + a[j];
        a[i + 1] = s;
        a[i] = 0;
        a[i + 2] = 0;
    }
    printf("The array after processing : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}