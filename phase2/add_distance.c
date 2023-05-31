// WAP to add two distances (in inch-feet) using structures.
#include <stdio.h>
struct distance
{
    int inch;
    int feet;
};
struct distance add(struct distance uno, struct distance dos)
{
    struct distance tres;
    tres.inch = uno.inch + dos.inch;
    tres.feet = uno.feet + dos.feet;
    if (tres.inch > 12)
    {
        tres.feet += tres.inch / 12;
        tres.inch = tres.inch % 12;
    }
    return tres;
}
int main()
{
    struct distance uno, dos, sum;
    printf("Enter feet and inch 1: ");
    scanf("%d %d", &uno.feet, &uno.inch);
    printf("Enter feet and inch 2: ");
    scanf("%d %d", &dos.feet, &dos.inch);
    sum = add(uno, dos);
    printf("Their sum is %d feet and %d inch", sum.feet, sum.inch);
    return 0;
}