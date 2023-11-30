#include<stdio.h>
main(){
	printf("responda o interrogatório com '1' para SIM ou '0' para NAO\n\n");
	
	int p1, p2, p3, p4, p5;
	
	printf("Telefonou para a vitima?\n");
	scanf(" %d", &p1);
	
	printf("Esteve no local do crime?\n");
	scanf(" %d", &p2);
	
	printf("Mora perto da vitima?\n");
	scanf(" %d", &p3);
	
	printf("Devia para a vitima?\n");
	scanf(" %d", &p4);
	
	printf("ja trabalhou com a vitima?\n");
	scanf(" %d", &p5);
	
	if (p1+p2+p3+p4+p5==5){
		printf("\n voce eh o assasino!!!");
	} else if (p1+p2+p3+p4+p5==3 || p1+p2+p3+p4+p5==4 ) {
			printf("\n voce eh cumplice!!!");
	} else if (p1+p2+p3+p4+p5==2) {
		printf("\n voce eh suspeito!!!");
	} else {
		printf("\n voce eh inocente!!!");
	}
	
	
}
