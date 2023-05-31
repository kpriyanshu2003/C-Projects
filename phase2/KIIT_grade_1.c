// WAP using switch case to create KIIT grade system
#include <stdio.h>
int main()
{
	char grade = 'B';
	switch (grade)
	{
	case 'O':
		printf("Outstanding");
		break;
	case 'E':
		printf("Excellent");
		break;
	case 'A':
		printf("Very Good");
		break;
	case 'B':
		printf("Good");
		break;
	case 'C':
		printf("Average");
		break;
	case 'D':
		printf("Poor");
		break;
	case 'F':
		printf("Failure");
		break;
	default:
		printf("Invalid Grade");
		break;
	}
	return 0;
}
