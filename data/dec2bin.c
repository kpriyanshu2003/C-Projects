// Dec 2 Bin
#include <stdio.h>

int main() {
    int decimal, remainder, binary = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        base *= 10;
        decimal /= 2;
    }

    printf("Binary equivalent: %d", binary);

    return 0;
}

