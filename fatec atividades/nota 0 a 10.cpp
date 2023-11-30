#include<stdio.h>

	main(){
	
	
	
	int num;
	do {
		printf("digite uma nota de 0 a 10\n");
		scanf(" %d", &num);
		
		if (num < 0 || num > 10) {
			printf("vacilao, coloca o num certo meu\n\n");
		} else {
			printf("uffaaaa, obrigado pela nota");
		}	} while ( num < 0 || num > 10);
		
	
}

