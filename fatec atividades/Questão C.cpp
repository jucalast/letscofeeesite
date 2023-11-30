#include<stdio.h> 
//tentei até a ultima usar um numero N ksksk, mas não foi
main (){
	
	int p1,p2,p3,p4,p5, media;
	
	printf("a idade de 5 pessoas:\n");
	scanf("%d%d%d%d%d", &p1, &p2, &p2, &p4, &p5);
	
	media = (p1+p2+p3+p4+p5)/5;
	
	if (media < 25){
		printf("turminha jovem %d\n", media);
	} else if (media > 26 && media < 60){
		printf("turminha adulta %d\n", media);
	} else {
		printf("turminha idosa %d\n", media);
	}
	
}
