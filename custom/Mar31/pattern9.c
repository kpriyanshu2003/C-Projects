#include <stdio.h>
int main(){
	int k;
	for(int i = 1; i <= 5; i++){
		for(int j = 5; j >= i; j--)
			printf("  ");
		for(k = 1; k <= i; k++)
			printf("%d ",k);
		for(int l = k-2; l >= 1; l--)
			printf("%d ", l);
		printf("\n");
	}
	return 0;
}
