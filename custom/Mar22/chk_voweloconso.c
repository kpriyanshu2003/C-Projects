// WAP to check if the entered alphabet is vowel or consonante
#include <stdio.h>
int main(){
	char ch;
	printf("Enter an alphabet : ");
	scanf("%c",&ch);
	if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	printf("Entered alphabet is a vowel");
	else
	printf("Entered alphabet is a consonant");
	return 0;
}
