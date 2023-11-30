#include <stdio.h>

int main() {
	//definir valor para todas as variaveis para ter mais exatidão
    int numPessoas = 2;
    double peso, pesoTotal = 0.0;
    double altura, alturaTotal = 0.0;
    double menorIMC = 9999.0, maiorIMC = 0.0;

    for //tudo que precisar ser calculado atraves de cada dado do loop
    
	(int i = 1; i <= numPessoas; i++) {//cria o loop para iterar por todos os numeros da var "NUMPESSOAS"
        printf("Informe o peso e a altura da pessoa %d (em kg e metros) SEPARE POR VIRGULA: ", i);
        scanf("%lf,%lf", &peso, &altura);//não pode haver espaços dentro do ""
        //se forem dois dados, separe porvirgula: "%lf,%lf"

        double IMC = peso / (altura * altura); //calcula o imc

        if (IMC > maiorIMC) { //Depura por todos os valores de IMC obtidos no loop e define o maior e menor IMC
            maiorIMC = IMC;
        }
        if (IMC < menorIMC) {
            menorIMC = IMC;
        }

        pesoTotal += peso; //calcula o peso total e a altura total
        alturaTotal += altura;
    }
	//o peso e altura MÉDIAS são calculados apos a depuração do peso e altura TOTAIS
    double pesoMedio = pesoTotal / numPessoas;
    double alturaMedia = alturaTotal / numPessoas;

    // Exibir os resultados
    printf("\nPeso medio: %.2lf kg\n", pesoMedio);
    printf("Altura media: %.2lf metros\n", alturaMedia);
    printf("Maior IMC: %.2lf\n", maiorIMC);
    printf("Menor IMC: %.2lf\n", menorIMC);

    return 0;
}

