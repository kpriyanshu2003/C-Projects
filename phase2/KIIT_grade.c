/* WAP using if else to create KIIT grade system
   90 - 100 : 'O' grade
   80 - 89 : 'E' grade
   70 - 79 : 'A' grade
   60 - 69 : 'B' grade
   50 - 59 : 'C' grade
   40 - 49 : 'D' grade
   below 40 : 'F' grade
*/

#include <stdio.h>
int main()
{
	int mks;
	printf("Enter marks : ");
	scanf("%d", &mks);
	if (mks >= 90 && mks <= 100)
		printf("Grade : O");
	if (mks >= 80 && mks <= 89)
		printf("Grade : E");
	if (mks >= 70 && mks <= 79)
		printf("Grade : A");
	if (mks >= 60 && mks <= 69)
		printf("Grade : B");
	if (mks >= 50 && mks <= 59)
		printf("Grade : C");
	if (mks >= 40 && mks <= 49)
		printf("Grade : D");
	if (mks < 40)
		printf("Grade : F");
	return 0;
}
