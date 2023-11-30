#include<stdio.h>

int main(){
	float vprod,reaj;
	int opcao;
	
	printf("qual o valor do produto?\n");
	scanf("%f", &vprod);
	
	
	printf("selecione o reajuste\n(1) 15%\n(2) 20%\n(3) 30%\n");
	scanf("%d", &opcao);
	
	/*switch (opcao) { //o switch serve comoo =SE: "se opção = 1;reaj = 15.0; 
		case 1:
			reaj = 15.0;
			break;
		case 2:
			reaj = 20.0;
			break;
		case 3:
			reaj = 30.0;
			break;
		default:
			printf("seleção invalida");
			return 1;
	}
	
	float vfinal;
	
	vfinal = vprod + (vprod *(reaj/100.0)); //sempre identifique qual operação vai realizar primeiro antes de comecar a escrever o cod
	
	printf("o valor de reajuste eh %.2f", vfinal);*/
	
	float vfinal;
	
	opcao==1?reaj=15.0:opcao==2?reaj=20.0:opcao==3?reaj=30.0:printf("opcao invalido");
	opcao==1?vfinal=vprod+(vprod*(reaj/100.0)):opcao==2?vfinal=vprod+(vprod*(reaj/100.0)):opcao==3?vfinal=vprod+(vprod*(reaj/100.0)):printf("opcao invalido");
	printf("o valor de reajuste eh %.2f", vfinal);
	return 0;
}
