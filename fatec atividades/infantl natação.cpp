#include<stdio.h>

int main(){
	int idade;
	
	printf("quaL eh a idade do nadador?\n");
	scanf("%d", &idade);
	
	
	switch (idade){
	case 5 ... 7:
		printf("infantil A");
		break;
	case 8 ... 10:
		printf("infantil B");
		break;
	case 11 ... 13:
		printf("infantil C");
		break;
	case 14 ... 17:
		printf("infantl D");
		break;
	case 18 ... 120:
		printf("sem classificação");
		break;
	default:
		printf("adulto");
		break;
		return 1;
	}
	
	
	/*idade>=5&&idade<=7?printf("infantil A"):idade>=8&&idade<=10?printf("infantil B"):idade>=11&&idade<=13?printf("infantil C"):idade>=14&&idade<=17?printf("infantil D"):printf("adulto");*/
}
