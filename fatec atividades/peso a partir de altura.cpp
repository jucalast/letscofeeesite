#include<stdio.h>

int main (){
	float alt, imc_ideal, peso; 
	char sexo;//variavel para letra

	
	printf("digite sua altura\n");
	scanf("%f", &alt);
	
	printf("selecione seu sexo\n(F)\n(M)");
	scanf(" %c", &sexo);//%c para variavel char 
	
	if (sexo == 'm' || sexo == 'M') {       //if para tratamento de dados antres de aplicar a formula
		imc_ideal = 22.5;
	} else if (sexo == 'F' || sexo == 'f') {
		imc_ideal = 21.5 ;	
	} else {
		printf("op��o invalida\n");
		return 1; //encerra o cod se a op��o for inv�lida 
	}
	
	peso = imc_ideal*(alt*alt); 
	
	printf("voce pesa %.2f", peso);
	
	return 0;
	
}
