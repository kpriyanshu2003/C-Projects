/*
	A
	A B
	A B C
	A B C D
	A B C D E
*/
#include <stdio.h>
int main()
{
	for (int i = 'A'; i <= 'E'; i++)
	{
		for (int j = 'A'; j <= i; j++)
			printf("%c ", j);
		printf("\n");
	}
	return 0;
}
