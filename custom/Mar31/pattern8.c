#include <stdio.h>
int main(){
	for(int i = 'A'; i <= 'E'; i++){
		for(int j = 'A'; j <= i; j++)
			printf("%c ", j);
		printf("\n");
	}
	return 0;
}
