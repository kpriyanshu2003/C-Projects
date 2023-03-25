// WAP to print numbers in words
#include <stdio.h>
int main()
{
	int d, num, s = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	while (num != 0)
	{
		d = num % 10;
		s = s * 10 + d;
		num /= 10;
	}
	while (s != 0)
	{
		d = s % 10;
		switch (d)
		{
		case 1:
			printf("One ");
			break;
		case 2:
			printf("Two ");
			break;
		case 3:
			printf("Three ");
			break;
		case 4:
			printf("Four ");
			break;
		case 5:
			printf("Five ");
			break;
		case 6:
			printf("Six ");
			break;
		case 7:
			printf("Seven ");
			break;
		case 8:
			printf("Eight ");
			break;
		case 9:
			printf("Nine ");
			break;
		default:
			printf("Invalid ");
			break;
		}
		s /= 10;
	}
	return 0;
}
