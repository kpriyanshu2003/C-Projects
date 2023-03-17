// WAP to add time

#include <stdio.h>
int main()
{
	int h, m, s, h1, m1, s1, h2, m2, s2, day;
	printf("enter first hours,minutes,seconds : ");
	scanf("%d %d %d", &h1, &m1, &s1);
	printf("enter second hours,minutes,seconds : ");
	scanf("%d %d %d", &h2, &m2, &s2);
	s = h = m = day = 0;
	s = s1 + s2;
	if (s > 60)
	{
		m = s / 60;
		s = s % 60;
	}
	m = m + m1 + m2;
	if (m > 60)
	{
		h = m / 60;
		m = m % 60;
	}
	h = h + h1 + h2;
	if (h > 24)
	{
		day = h / 24;
		h = h % 24;
	}
	printf("First time = %d:%d:%d\n", h1, m1, s1);
	printf("Second time = %d:%d:%d\n", h2, m2, s2);
	printf("Added time = ");
	if (day != 0)
		printf("%d day ", day);
	printf("%d:%d:%d\n", h, m, s);
}
