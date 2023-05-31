// WAP  size of char
#include <stdio.h>
int main()
{
	int a = 10;
	short int b = 100;
	long int c = 10000;
	float d = 1.123456;
	double e = 11.12345678;
	long double f = 1.1234567887654321;
	char g = 'a';

	printf("Size of int datatype : %lu\n", sizeof(int));
	printf("Size of short int datatype : %lu\n", sizeof(short int));
	printf("Size of long int datatype : %lu\n", sizeof(long int));
	printf("Size of float datatype : %lu\n", sizeof(float));
	printf("Size of double datatype: %lu\n", sizeof(double));
	printf("Size of long double datatype : %lu\n", sizeof(long double));
	printf("Size of char datatype : %lu\n", sizeof(char));
	printf("\n");
	printf("Size of int variable: %lu\n", sizeof(a));
	printf("Size of short int variable : %lu\n", sizeof(b));
	printf("Size of long int variable : %lu\n", sizeof(c));
	printf("Size of float variable : %lu\n", sizeof(d));
	printf("Size of double variable : %lu\n", sizeof(e));
	printf("Size of long double variable : %ld\n", sizeof(f));
	printf("Size of char variable : %lu\n", sizeof(g));
	printf("\n");
	printf("Size of int value : %lu\n", sizeof(10));
	printf("Size of float value : %lu\n", sizeof(10.0));
	printf("Size of character value : %lu\n", sizeof('a'));
	printf("Size of string value : %lu\n", sizeof("Hello World"));

	return 0;
}