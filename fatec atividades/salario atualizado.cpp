#include<stdio.h>

int main(){
	
	float salario;
	
	printf("digite o seu salario atual\n");
	scanf("%f", &salario);
	
	salario = salario * 1.25;
	
	printf("seu novo salario é: %.2f", salario);
	
	return 0;
}
