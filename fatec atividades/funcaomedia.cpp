#include<stdio.h>

float CalcularMedia(float num1, float num2, float num3) {
	float media = (num1+num2+num3)/3;
	return media;
}

int main(){
	float ResultadoMedia = CalcularMedia(8.5,9,10);
	
	printf("A mehdia eh:%.2f\n", ResultadoMedia);
	
	return 0;
}
