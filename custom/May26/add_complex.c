// WAP to add two complex numbers by passing structure to a function.
#include <stdio.h>
struct complex
{
    int real, imag;
};

struct complex sum(struct complex uno, struct complex dos)
{
    struct complex tres;
    tres.real = uno.real + dos.real;
    tres.imag = uno.imag + dos.imag;
    return tres;
}
int main()
{
    struct complex uno, dos, tres;
    printf("Enter real and imaginary part 1: ");
    scanf("%d %d", &uno.real, &uno.imag);
    printf("Enter real and imaginary part 2: ");
    scanf("%d %d", &dos.real, &dos.imag);
    tres = sum(uno, dos);
    printf("Their sum is %d + %di", tres.real, tres.imag);
    return 0;
}
