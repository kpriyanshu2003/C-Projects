// Evaluate: p = ++a + a++ + --a
#include <stdio.h>
int main(){
    int p, a;
    a = 1;
    p = ++a + a++ + --a;
    printf("%d", p);
    return 0;
}