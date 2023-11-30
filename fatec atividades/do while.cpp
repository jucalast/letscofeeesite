#include<stdio.h>

int main(){
	int min = 10;
	int seg = 0;
	
	for (min =10; min >= 0; min--) {
		for (seg = 59; seg >= 0; seg--) {
		printf("%02d:%02d\n", min, seg);
	}
}
	return 0;
}
