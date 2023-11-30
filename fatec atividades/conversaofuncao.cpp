#include<stdio.h>

float ConverterF(float num1){
	float Celcius = (num1*9/5)+32;
	return Celcius;
}

int main(){
	
	float Convertido = ConverterF(80);
	
	printf("a conversao ficou: %.2f", Convertido);
	return 0;
	}
