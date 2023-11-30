#include<stdio.h>
#include<stdlib.h>


int main () {
	int a = 10;
	int b = 20;
	int aux;
	
	aux = b;
	b = a;
	a = aux;
	
	printf("%d,%d", a, b);
	scanf("%d,%d", &a, &b);
	system("pause");	
}
