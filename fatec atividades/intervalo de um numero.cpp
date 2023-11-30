//intervalos 
#include<stdio.h>

int main(){
	int num;
	printf("digite um numero:\n");
	scanf("%d", &num);
	
switch(num){
	case 3 ... 10:
		printf("o numero %d esta no inrvelo de 3 a 10\n", num);
		break;
	case 11 ... 19:
		printf("o numero %d esta no intervalo de 11 a 10\n", num);
		break;
	case 20 ... 29:
		printf("o numero %d esta no intervalo de 20 a 29\n", num);
		break;
	default:
		printf("o numero %d não esta em nenhum intervalo\n", num);
		break;
}
}
