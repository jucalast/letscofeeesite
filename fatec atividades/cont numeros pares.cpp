#include <stdio.h>
#include <unistd.h>

int main() {
    char continu;

    do {
        int cont = 0; // Reinicie a variável cont dentro do loop
        for (int i = 1; cont < 3; i++) {
            int par = i * 2;
            printf("\n%d\n\n", par);
            cont++;
            sleep(1);
        }

        printf("Deseja continuar? (s/n)\n");
        scanf(" %c", &continu);//tem que referenciar

    } while (continu == 's' || continu == 'S');
	
	printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\nprecione qualquer tecla para sair...");
    return 0;
}

