// In a competitive examination, there were 150 questions. One candidate got 80% correct and the other candidate 72% correct. WAP to calculate and display the correct answers each candidate got.
#include <stdio.h>
int main()
{
    int q = 150, c1 = 0.8 * q, c2 = 0.72 * q;
    printf("Candidate 1 : %d\nCandidate 2 : %d", c1, c2);
    return 0;
}