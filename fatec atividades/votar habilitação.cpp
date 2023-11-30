#include<stdio.h>

int main (){
	int idade, nas;
	
	printf("ano de nascimento?\n");
	scanf("%d",&nas);
	
	idade=  2023-nas;
	
	printf("voce tem %d anos \n", idade);
	
	if (idade>=18){
		printf("voce ja pode tirar habilitação!\n");
	} if (idade=16,17) {
		printf("voce ja pode votar!");
	} else {
		printf("voce é muito novo!\n");
	}
	
	return 0;
}
