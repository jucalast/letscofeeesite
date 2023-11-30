#include <stdio.h>

int main() {
    float altura, imc_ideal, peso;
    char sexo;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Selecione seu sexo (F para feminino, M para masculino): ");
    scanf(" %c", &sexo);  // Use espaço antes de %c para descartar espaços em branco extras

    if (sexo == 'M' || sexo == 'm') {
        imc_ideal = 22.5;
    } else if (sexo == 'F' || sexo == 'f') {
        imc_ideal = 21.5;
    } else {
        printf("Sexo invalido. Use M ou F.\n");
        return 1;  // Termina o programa com código de erro
    }

    peso = imc_ideal * (altura * altura);

    printf("Seu peso ideal é: %.2f kg\n", peso);
    return 0;
}

