#include<stdio.h>
int main(){
	int metd,prod;
	float val1, val2, val3, val4;
	
	printf("qual produto voce comprou?\n[1] tv\n [2] ps5\n");
	scanf("%d", &prod);
	
	switch (prod){
		case 1:
			prod = 500;
			break;
		case 2:
			prod = 5.000;
			break;
		default:
			printf("valor invalido");
			break;
		return 1;
	}
	
	printf("qual método de pagamento voce vai escolher?\n[1] a vista\n[2] cred a vista\n[3] 2x sem juros \n[4] 3x com juros\n ");
	scanf("%d",&metd);
	
	val1 = prod*0.90;
	val2 = prod*0.95;
	val3 = prod/2;
	val4 = (prod*1.10)/3;
	
	switch (metd){
		case 1:
			printf("o valor da sua compra eh %.2f", val1);
			break;
		case 2:
			printf("o valor da sua compra eh %f", val2);
			break;
		case 3:
			printf("o valor da sua compra eh %f", val3);
			break;
		case 4:
			printf("o valor da sua compra eh %f", val4);
			break;
		default:
			printf("valor invalido");
			break;
		return 1;
		}
	
	
	
	}






