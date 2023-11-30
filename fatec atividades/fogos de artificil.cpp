#include <stdio.h>
#include <unistd.h>

int main() {
    int nf;
    int contagem;
    int foguetesLancados = 0; // Contador de foguetes lançados

    printf("Digite o número de foguetes que você deseja lançar\n");
    scanf("%d", &nf);

    while (nf > 0) {
        contagem = 10; // Reiniciar a contagem regressiva para cada foguete
        while (contagem >= 0) {
            printf("%d\n", contagem);
            sleep(1);
            contagem--;
        }

        printf("Foguete lançado com sucesso\n");
        foguetesLancados++; // Incrementar o contador de foguetes lançados
        nf--; // Decrementar o número de foguetes restantes

        if (nf == 0) {
            printf("Todos os foguetes foram lançados!\n");
            break; // Encerrar o programa quando todos os foguetes forem lançados
        }

        sleep(3); // Esperar 3 segundos após o lançamento de cada foguete
    }

    return 0;
}

