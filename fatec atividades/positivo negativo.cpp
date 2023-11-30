#include<stdio.h>

int main(){
	
	float N;
	
	printf("escreva um numero\n");
	scanf("%f", &N);
	
	if (N>=0) {
		printf("positivo\n");
	} else {
		printf("negativo\n");
	}
	
	
	return 0;
}

