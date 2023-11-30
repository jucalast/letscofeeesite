#include<stdio.h>

int main() { 
	int N;
	
	printf("digite um numero:\n");
	scanf("%d", &N);
	
	if (N %2 == 0) {
		printf("o numero e par %d",N);
	} else {
		printf("o numero e impar %d",N);
	}
	
	return 0;
}
