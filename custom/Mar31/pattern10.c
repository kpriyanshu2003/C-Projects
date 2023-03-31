#include <stdio.h>
int main(){
	for(int i = 0; i < 5; i++){
		for(int j = i; j < 5 ; j++)
			printf("%d ", j%2);
		printf("\n");
	}
	return 0;
}
