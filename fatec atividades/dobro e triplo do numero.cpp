#include<stdio.h>

int main () {
	float N, ND, NT;
	
	printf("digite um numero:\n");
	scanf("%f",&N);
	
	ND=N+N;
	NT=ND+N;
	
	if (N>10){
	printf("%2.f",ND);
	} else {
		printf("%2.f",NT);
	}
	
	return 0;
}
