#include<stdio.h>

 main(){
 	
 	int senha;
 	do {
 	printf("\ndigite o paseword\n");
 	scanf("%d", &senha);
 	
 	if (senha == 1234){
 		printf("\nACESSO PERMITIDO\n");
	 } else {
	 	printf("\nACESSO NEGADO\n");
	 }
   } while (senha != 1234);
}
