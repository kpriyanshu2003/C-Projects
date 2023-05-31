// WAP to print the size and address of int, float and char variable
#include <stdio.h>
int main(){
    int a;
    float b;
    char c;
    printf("Size of int %d bytes\n", sizeof(a));
    printf("Size of float %d bytes\n", sizeof(b));
    printf("Size of char %d bytes\n", sizeof(c));
    printf("Address of int %d\n", &a);
    printf("Address of float %d\n",&b);
    printf("Address of char %d\n", &c);
    return 0;
}