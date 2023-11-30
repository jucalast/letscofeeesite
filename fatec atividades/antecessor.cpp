#include<stdio.h>
#include<stdlib.h>


int main () {
	int num;
	
	printf("numero?");
	scanf("%d", &num);
	
	int i = 0;
	while (i==0) {
		num--;
		if(num%num==0 && num%1 == 0) {
			printf("%d", num);
			i = 3;
		} 
	}
	
}
