#include<stdio.h>

int main(){

FILE *arquivo;

arquivo = fopen("exemplo.txt","w");

if (arquivo==NULL){
	printf("Erro ao abrir os arquivos\n");
	return 1;
}

fprintf(arquivo, "hello World!\n");
fprintf(arquivo, "este � um exemplo de arquivo em c\n");

fclose(arquivo);
}
