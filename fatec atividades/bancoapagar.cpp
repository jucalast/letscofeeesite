#include <stdio.h>
#include <windows.h>

void limparTela() {
    system("cls || clear");
}

void menu() {
    printf("\n 1 Saque\n");
    printf(" 2 Deposito\n");
    printf(" 3 Saldo\n");
    printf(" 4 Extrato\n\n");
}

int main() {
    FILE *arquivo = fopen("banco_de_dados2.txt", "a+");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    int agencia = 0;
    int conta = 0;
    int senha = 0;
    int usuarioAgencia;
    int usuarioConta;
    int usuarioSenha;
    int opcao, sair;
    float ValorSaque, Saldo = 1000, Extrato, Deposito;

    fprintf(arquivo, "=== NOVA CONTA ===\n");

    do {
        printf("Criar conta >>\n\n");
        
        printf("Numero da Agencia:");
        scanf("%d", &agencia);
        printf("Numero da Conta:");
        scanf("%d", &conta);
        printf("Senha:");
        scanf("%d", &senha);

        fprintf(arquivo, "Agencia: %d Conta: %d Senha: %d Saldo: %.2f\n", agencia, conta, senha, Saldo);

        if (agencia >= 0 && conta >= 0 && senha >= 0) {
            printf("\nConta criada com sucesso!\n");
        }
        system("pause");
        limparTela();
        
	        // Fechar e reabrir o arquivo para leitura
	    fclose(arquivo);
	    arquivo = fopen("banco_de_dados.txt", "a+");

        printf("Agencia\n");
        scanf("%d", &usuarioAgencia);
        limparTela();

        if (usuarioAgencia != agencia) {
            printf("Agencia incorreta. Tente novamente.\n\n");
        }
    } while (usuarioAgencia != agencia);

    do {
        printf("Conta\n");
        scanf("%d", &usuarioConta);
        limparTela();

        if (usuarioConta != conta) {
            printf("Conta incorreta. Tente novamente.\n\n");
        }
    } while (usuarioConta != conta);

    do {
        printf("Senha\n");
        scanf("%d", &usuarioSenha);
        limparTela();
        printf("\n");

        if (usuarioSenha != senha) {
            printf("Senha incorreta. Tente novamente.\n\n");
        }
    } while (usuarioSenha != senha);

    if (usuarioSenha == senha) {
        do {
            printf("JL BANK\n\n");
            printf("Saldo: R$%.2f\n", Saldo);
            menu();
            printf("Selecione a opcao e aperte enter\n");
            scanf("%d", &opcao);
            limparTela();

            switch (opcao) {
                case 1:
                    printf("JL BANK\n\n");
                    printf("Quanto voce deseja sacar?");
                    scanf("%f", &ValorSaque);
                    Saldo -= ValorSaque;
                    printf("\n1 para voltar\n");
                    scanf("%d", &sair);
                    limparTela();
                    break;
                case 2:
                    printf("JL BANK\n\n");
                    printf("Quanto voce deseja depositar?");
                    scanf("%f", &Deposito);
                    Saldo += Deposito;
                    printf("\n1 para voltar\n");
                    scanf("%d", &sair);
                    limparTela();
                    break;
                case 4:
                    printf("JL BANK\n\n");
                    printf("Extrato:");
                    scanf("%f", &Extrato);
                    printf("\n1 para voltar\n");
                    scanf("%d", &sair);
                    limparTela();
                    break;
                case 3:
                    printf("JL BANK\n\n");
                    printf("Saldo atual: R$%.2f\n", Saldo);
                    printf("1 para voltar\n");
                    scanf("%d", &sair);
                    limparTela();
                    break;
                default:
                    printf("Opção inválida, tente novamente!\n");
                    break;
            }
        } while (sair == 1);
        fclose(arquivo);
    }

    return 0;
}

