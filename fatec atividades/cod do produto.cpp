#include<stdio.h>

int main() {
 int cod;
 
 printf("digite o cod do produto\n");
 scanf("%d", &cod);
 
 int codd;
 
 /*switch (cod) {
 	case 1:
 		printf("aimento nao perecivel");
 		break;
 	case 2 ... 4:
 		printf("alimento perecivel");
 		break;
 	case 5 ... 6:
 		printf("vestuario");
 		break;
 	case 7:
 		printf("higiene pessoal");
 		break;
 	case 8 ... 15:
	 	printf("limpeza e ultencilios domésticos");
	 	break;
	default:
		printf("produto invalido");
		break;
	}*/
	
	cod==1?printf("aimento nao perecivel"):cod>=2&&cod<=4?printf("alimento perecivel"):cod==5||6?printf("vestuario"):cod>=8&&cod<=15?printf("limpeza e ultencilios domésticos"):cod==7?printf("higiene pessoal"):printf("produto invalido");
}

