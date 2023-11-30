#include <stdio.h>

int main() {
    char continuar;

    do {
        printf("O programa esta em execusao. Deseja continuar (s/n)? \n\n\n");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("\n\n\nPrograma encerrado.\n");

    return 0;
}


