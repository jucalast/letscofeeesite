#include<stdio.h>

main(){
	int A[5];
	
	printf("digite 5 numeros\n");
	for(int i=0;i<5;i++){
		scanf("%d", &A[i]);
		}
		
	printf("a posicao dos elementos iguais a 10 sao:\n");
		for(int i=0;i<5;i++){
		if(A[i]==10){
			printf("A[%d]=%d, ", i+1,A[i]);
		}
		}
}
