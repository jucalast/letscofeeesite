#include<stdio.h>

int main(){
	
	float N;
	printf("digite um numero\n");
	scanf("%f",&N);
	
	if (N<10) {
	printf("o numero: %2.f",N);
	} else {
		printf("esse numero e maior que 10");
	}
	
	return 0;
}
