#include <stdio.h>
#include <string.h>

int main() {
    char nomeUsuario[50];
    char senha[50];

    do {
        printf("Digite o nome de usu�rio: ");
        scanf("%s", nomeUsuario);

        printf("Digite a senha: ");
        scanf("%s", senha);

        if (strcmp(nomeUsuario, senha) == 0) {
            printf("Erro: A senha n�o pode ser igual ao nome de usu�rio.\n");
        } else {
            printf("Nome de usu�rio e senha aceitos.\n");
        }
    } while (strcmp(nomeUsuario, senha) == 0);

    return 0;
}


