#include<stdio.h>

main() {
	int NUMERO[5];
	int contadorN = 0;
	
	printf("digite 5 numeros\n");
	for(int i=0;i<5;i++){
	scanf("%d",&NUMERO[i]);
		/*if(NUMERO[i]<0){
			contadorN++;
		}*/
	}
	
	for(int i=0;i<6;i++){
		if(NUMERO[i]<0){
			contadorN++;
			}
		}
			
	printf("Quantidade de negativos: %d\n", contadorN);

}


