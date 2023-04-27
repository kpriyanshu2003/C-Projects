// WAP to find the largest element stored in an array
#include <stdio.h>
int main()
{
	int a[10], max = -1;
	printf("Enter 10 values : ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		max = (a[i] > max) ? a[i] : max;
	}
	printf("The max value is : %d", max);
	return 0;
}
