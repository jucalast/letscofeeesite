#include<stdio.h>

main(){
	int num[10];

	printf("digite 10 numeros\n");
	for(int i=0;i<10;i++){
	scanf("%d", &num[i]);
	}
	
	printf("em ordem contraria:\n");
	for(int i=9;i>=0;i--){
	printf("%d", num[i]);
	printf("\n");
}
}
