#include<stdio.h>

int main() {
	printf("calcule a area de um circulo\n");
	float raio, area;
	
	printf("qual o raio do circulo?\n");
	scanf("%f",&raio);//pede um dado e armazena
	
	area = 3.14 * (raio*raio); //como o valor de pi é um valor fixo, coloque o numero direto
	
	printf("essa e area do seu circulo: %.2f \n", area);
	return 0;
	
}
