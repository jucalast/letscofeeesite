#include<stdio.h>

int main() {
	
	float A, B, C;
	
	printf("escreva tres lados para um triangulo\n");
	scanf("%f %f %f", &A, &B, &C);
	
	if(A<B+C&& B<A+C&& C<B+A){
		//verificar tipo
		if (A==B && A==C) {
			printf("triangulo equilatero\n");
		} else if (A==B||A==C||B==C)  {
			{
				printf("triangulo isoceles\n");
			} else {
				printf("triangulo escaleno\n");	
			}
		}
		
	} else {
		printf("não é um triangulo\n");
	}
	
	
	
	return 0;
}
