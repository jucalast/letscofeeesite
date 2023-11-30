#include<stdio.h>
#include<time.h>

int main() {
	struct tm *data_hora_atual;
	time_t segundos;
		time(&segundos);
		data_hora_atual = localtime(&segundos);
		int day = data_hora_atual->tm_mday;
		
		printf("prestação em atraso\n");
		float vencimento, prestacao, valor, taxa , tempo, segundo; 
		
		taxa =4.99;
		
		tempo = vencimento -day;
		
		printf("qual o valor da fatura?\n");
		scanf("%f", &valor);
		
		printf("qual a data de vencimento?\n");
		scanf("%f", &vencimento);
		
		prestacao = valor + (valor * (taxa/100.0)) * tempo;
		
		printf("valor da prestação em atraso: %.2f\n", prestacao);
		return 0;
}
