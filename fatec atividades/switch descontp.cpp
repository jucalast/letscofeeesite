/*Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. 
Faça um programa que calcule o valor total a ser pago por uma pessoa. 
O programa deverá ler o valor total da compra efetuada e um código que identifique 
se o comprador é um cliente comum (1), funcionário (2) ou vip (3).*/

#include<stdio.h>

	main(){
		int tp;
		float valor;
		char sair;
		
		printf("bem vindo a loja\n\n");
		
		do {
			
		while (tp != 1 && tp != 2 && tp != 3) {
			
		printf("selecione a alternativa que corresponde a voce:\n(1) cliente comum\n(2) funcionario\n(3) vip\n");
		scanf(" %d", &tp);
		
		if (tp != 1 && tp != 2 && tp != 3){
			printf("opcao invalida\n\n");
		}
		
		}
		
		printf("digite o valor da sua compra\n");
		scanf("%f", &valor);
		
		/*switch (tp) {
			case 1:
			valor = valor*1;
			break;
			case 2:
			valor = valor*0.90;
			break;
			case 3:
			valor = valor*0.95;
			break;
			default:
				printf("opcao invalida\n");
		}*/
		
		tp==1?valor=valor*1:tp==2?valor=valor*0.90:tp==3?valor=valor*0.95:printf("opcao invalida\n");
		
		printf("o valor final da sua compra eh: %.2f\n", valor);
		
		printf("press '~' para sair\n\n");
		scanf(" %c", &sair);
		
		} while (sair != '~');
		
		printf("saindo...(press enter)\n");
		
	}
