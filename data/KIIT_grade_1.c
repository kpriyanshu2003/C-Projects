// WAP using switch case to create KIIT grade system
#include <stdio.h>
int main()
{
	int m;
	printf("Enter your marks : ");
	scanf("%d", &m);
	switch (m / 10)
	{
	case 10:
	case 9:
		printf("Outstanding");
		break;
	case 8:
		printf("Excellent");
		break;
	case 7:
		printf("Very Good");
		break;
	case 6:
		printf("Good");
		break;
	case 5:
		printf("Average");
		break;
	case 4:
		printf("Poor");
		break;
	case 3:
	case 2:
	case 1:
	case 0:
		printf("Failure");
		break;
	default:
		printf("Invalid Marks");
		break;
	}
	return 0;
}
