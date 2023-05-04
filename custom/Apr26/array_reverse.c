#include <stdio.h>
int main()
{
	int a[10];
	printf("Enter 20 values : ");
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < 5; i++)
	{
		a[i] = a[i] + a[10 - i - 1];
		a[10 - i - 1] = a[i] - a[10 - i - 1];
		a[i] = a[i] - a[10 - i - 1];
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}
