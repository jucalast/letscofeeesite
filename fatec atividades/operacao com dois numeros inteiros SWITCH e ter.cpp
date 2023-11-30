#include<stdio.h>
int main(){
	int  num1, num2, oper; //quando for precisar de duas entradas de dados, usar dois printf

	
	printf ("digite o primeiro numero inteiro inteiro\n");
	scanf("%d",&num1);
	
	printf ("digite o segundo numero inteiro inteiro\n");
	scanf("%d",&num2);
	
	printf("escolha qual operacao voce deseja aplicar:\n(1) +\n(2) -\n(3) *\n(4) /\n"); 
	scanf("%d", &oper);
	
	float result;//criar uma variavel para o conteudo que vai ewtar dentro do SWITCH 
	
	/*switch (oper) {
		case 1:
			result = num1+num2;
			break;
		case 2:
			result = num1-num2;
			break;
		case 3:
			result = num1*num2;
			break;
		case 4:
			result = num1/num2;
			break;
		default:
			printf("opcao invalida");
			return 1;*/
			
			oper==1?result=num1+num2:oper==1?result=num1-num2:oper==1?result=num1/num2:oper==1?result=num1/num2:printf("opcao invalida");//sempre colocar os se em todos os senão 
	
	printf("o resultado da operacao eh %.2f", result);
	return 0;
	
}
