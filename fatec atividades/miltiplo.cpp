#include <stdio.h>
#include <unistd.h>

int main() {
    int num1, soma;
    char sair, somar;

    do {
        printf("Qual numero INTEIRO voce deseja saber os multiplos?\n\n");
        scanf("%d", &num1);

        int cont = 0; 
        int soma = 0; 
        for (int i = 1; cont < 10; i++) {
            int mult = num1 * i;
            if (mult % num1 == 0) {
                printf("%d\n\n", mult);
                soma += mult;
				cont++;
                sleep(1);
            }
        }
        printf("Soma dos multiplos de: %d eh %d\n\n", num1, soma); // Exibir a soma dos múltiplos

        printf("Deseja sair? (s/n)\n\n");
        scanf(" %c", &sair);

    } while (sair == 'n' || sair == 'N');

    printf("\nSaindo...\n\n");
    
    return 0;
}

