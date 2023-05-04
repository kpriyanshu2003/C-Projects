// WAP to convert given seconds to equivalent hour, minute and seconds

#include <stdio.h>
int main()
{
	int h, m, s;
	printf("Enter time in seconds : ");
	scanf("%d", &s);
	m = s / 60;
	s = s % 60;
	h = m / 60;
	m = m % 60;
	printf("Time is %d hours %d minutes %d seconds ", h, m, s);
	return 0;
}
