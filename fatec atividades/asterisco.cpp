#include <stdio.h>

int main() {
    	char reiniciar, sair;
        int a;
        
        do { //o do vai primeiro fora do for e do while, e depois voce faz o while do "do" la embixp para decidir se vai recomecar ou não
        printf("Digite o numero de * que voce deseja\n");
        scanf("%d", &a);

        int i = 1;
        while (i <= a) {
            printf("*");
            i++;
        }

        printf("\n");

        for (int i = 1; i <= a; i++) {
            printf("*");
        }

        printf("\n");

      
            for (i = 1; i <= a; i++) {
                printf("*");
            }

            printf("\nDeseja sair? (s/n)\n\n");
            scanf(" %c", &sair);

        } while (sair == 'n' || sair == 'N');
        
            printf("\nsaindo...\n");
    return 0; // Indique o sucesso da execução do programa
}

