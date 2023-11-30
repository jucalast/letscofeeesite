#include<stdio.h>

int main() {
	printf("calcule a area de um triangulo:\n");
  float base, altura, area;
  
  	printf("qual a base do triangulo?\n");
	scanf("%f",&base);
	printf("qual a altura do triangulo?\n");
	scanf("%f", &altura);
			
	area = base * altura /2;
			
	printf("a area do triangulo é: %.2f \n",area);
	return 0;
}

