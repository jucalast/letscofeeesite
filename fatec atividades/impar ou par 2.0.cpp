#include<stdio.h>

int main(){
	int num;
	printf("digite um numero:\n");
	scanf("%d", &num);
	
	num%2==0?printf("%d - par", num):printf("impar");
	return 0;
}
