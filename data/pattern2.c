/* WAP to create the following pattern
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
 */
#include <stdio.h>
int main()
{
    int a, i, j, k, l, m, n = 5;
    for (a = 0; a < n; a++)
    {
        for (i = n; i > (a + 1); i--)
            printf(" ");
        for (j = 0; j <= a; j++)
            printf("* ");
        printf("\n");
    }
    for (a = 0; a < n; a++)
    {
        for (i = 0; i < a; i++)
            printf(" ");
        for (j = n; j > a; j--)
            printf("* ");
        printf("\n");
    }
}