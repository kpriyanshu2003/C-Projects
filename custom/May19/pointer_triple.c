// WAP to show the use of three level pointer
#include <stdio.h>
int main()
{
    char *a[] = {"uno", "dos", "tres", "cuatro", "cinco", "seis", "siente", "ocho", "nueve"};
    char **b[] = {a + 3, a + 2, a + 1, a + 5, a, a + 4};
    char ***c = b;
    *c++;
    printf("%s\n", *++*++c);
    printf("%s\n", ++**(c + 2));
    printf("%c\n", *++**c + 2);
    return 0;
}
