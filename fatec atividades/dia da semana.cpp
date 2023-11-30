#include<stdio.h>

int main (){
	int numeroDia;
	
	printf("digite um numero de 1 a 7\n");
	scanf("%d", &numeroDia);
	
	switch (numeroDia) {
		
		case 1:
			printf("domingo\n");
			break;
		
		case 2:
			printf("segunda\n");
			break;
			
		case 3:
			printf("terca\n");
			break;
			
		case 4:
			printf("quarta\n");
			break;
			
		case 5:
			printf("quinta\n");
			break;
		
		case 6:
			printf("sexta\n");
			break;
			
		case 7:
			printf("sabado\n");
			break;
		default:
			printf("numero invalido, por vavor digite outro numero");
	}
	
	return 0;
}
