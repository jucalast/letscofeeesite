#include <stdio.h>
#include <stdlib.h>

int main() {
	//de��ra��o de vari�veis
	float nota1, nota2, nota3, media;
	
	//entrada das notas
	printf("digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("digite a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("digite a terceira nota: ");
	scanf("%f",&nota3);
	
	//calculo da m�dia 
	
media= (nota1 + nota2 + nota3)/3;

	printf("a media aritimetica das notas e: %.2f\n", media);
	return 0;
}
