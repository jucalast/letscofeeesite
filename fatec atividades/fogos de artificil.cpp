#include <stdio.h>
#include <unistd.h>

int main() {
    int nf;
    int contagem;
    int foguetesLancados = 0; // Contador de foguetes lan�ados

    printf("Digite o n�mero de foguetes que voc� deseja lan�ar\n");
    scanf("%d", &nf);

    while (nf > 0) {
        contagem = 10; // Reiniciar a contagem regressiva para cada foguete
        while (contagem >= 0) {
            printf("%d\n", contagem);
            sleep(1);
            contagem--;
        }

        printf("Foguete lan�ado com sucesso\n");
        foguetesLancados++; // Incrementar o contador de foguetes lan�ados
        nf--; // Decrementar o n�mero de foguetes restantes

        if (nf == 0) {
            printf("Todos os foguetes foram lan�ados!\n");
            break; // Encerrar o programa quando todos os foguetes forem lan�ados
        }

        sleep(3); // Esperar 3 segundos ap�s o lan�amento de cada foguete
    }

    return 0;
}

