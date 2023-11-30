#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define MAX_TRANSACTIONS 100
#define NOTA_50 50
#define NOTA_20 20
#define NOTA_10 10

// Definições de cores ANSI
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

// Cores para o console do Windows
#define COR_PADRAO 7 // Branco
#define COR_DESTAQUE 14 // Amarelo
#define COR_SELECIONADO 12 // Vermelho

// Função para aguardar a entrada de uma tecla
char aguardarTecla() {
    return _getch();
}

// Função para definir a cor do texto no console do Windows
void definirCor(int cor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cor);
}

// Estrutura para armazenar as transações
typedef struct {
    char tipo;  // 'D' para depósito, 'S' para saque
    double valor;
} Transacao;

// Estrutura para armazenar os dados da conta
typedef struct {
    char agencia[20];
    char conta[20];
    char senha[20];
    double saldo;
    Transacao transacoes[MAX_TRANSACTIONS];
    int numTransacoes;
} ContaBancaria;

// Função para limpar a tela
void limparTela() {
    system("cls || clear");
}

// Função para imprimir o logo
void imprimirLogo() {
    definirCor(COR_PADRAO);
    printf("\n=== Bem-vindo ao Sistema Bancario ===\n\n");
}

// Função para emitir saldo em um arquivo .txt
void emitirSaldoParaArquivo(ContaBancaria *conta) {
    FILE *arquivo;
    arquivo = fopen("saldo.txt", "w"); // Abre o arquivo para escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Saldo atual: %.2f\n", conta->saldo);

    fclose(arquivo); // Fecha o arquivo
    printf("Saldo emitido para o arquivo saldo.txt.\n");
}

// Função para emitir extrato em um arquivo .txt
void emitirExtratoParaArquivo(ContaBancaria *conta) {
    FILE *arquivo;
    arquivo = fopen("extrato.txt", "w"); // Abre o arquivo para escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Extrato:\n");

    for (int i = 0; i < conta->numTransacoes; i++) {
        if (conta->transacoes[i].tipo == 'D') {
            fprintf(arquivo, "Depósito de %.2f\n", conta->transacoes[i].valor);
        } else if (conta->transacoes[i].tipo == 'S') {
            fprintf(arquivo, "Saque de %.2f\n", -conta->transacoes[i].valor);
        }
    }

    fclose(arquivo); // Fecha o arquivo
    printf("Extrato emitido para o arquivo extrato.txt.\n");
}

// Função para imprimir o menu principal
void imprimirMenu(int opcaoSelecionada) {
    for (int i = 1; i <= 6; i++) {
        if (i == opcaoSelecionada) {
            definirCor(COR_SELECIONADO);
            printf(">> ");
        } else {
            definirCor(COR_PADRAO);
            printf("   ");
        }

        definirCor(COR_PADRAO);
        printf("%d. ", i);

        if (i == opcaoSelecionada) {
            definirCor(COR_DESTAQUE);
        }

        switch (i) {
            case 1:
                printf("Realizar Saque");
                break;
            case 2:
                printf("Realizar Depósito");
                break;
            case 3:
                printf("Emitir Saldo");
                break;
            case 4:
                printf("Emitir Extrato");
                break;
            case 5:
                printf("Alterar Dados da Conta");
                break;
            case 6:
                printf("Sair");
                break;
        }

        definirCor(COR_PADRAO);
        if (i == opcaoSelecionada) {
            printf(" <<<\n");
        } else {
            printf("\n");
        }
    }
}

// Função para realizar saque
void realizarSaque(ContaBancaria *conta) {
    limparTela();
    imprimirLogo();

    double valor;
    printf("Digite o valor do saque: ");
    scanf("%lf", &valor);

    if (valor > 0 && valor <= conta->saldo) {
        int valorInteiro = (int)valor;

        int notas50 = valorInteiro / NOTA_50;
        int notas20 = (valorInteiro % NOTA_50) / NOTA_20;
        int notas10 = ((valorInteiro % NOTA_50) % NOTA_20) / NOTA_10;

        printf("Saque de %.2f realizado com sucesso!\n", valor);
        printf("Notas de R$50: %d\n", notas50);
        printf("Notas de R$20: %d\n", notas20);
        printf("Notas de R$10: %d\n", notas10);

        conta->saldo -= valor;

        conta->transacoes[conta->numTransacoes].tipo = 'S';
        conta->transacoes[conta->numTransacoes].valor = -valor;
        conta->numTransacoes++;
    } else {
        printf("Valor inválido ou saldo insuficiente.\n");
    }
}

// Função para realizar depósito
void realizarDeposito(ContaBancaria *conta) {
    limparTela();
    imprimirLogo();

    double valor;
    printf("Digite o valor do depósito: ");
    scanf("%lf", &valor);

    if (valor > 0) {
        conta->saldo += valor;

        conta->transacoes[conta->numTransacoes].tipo = 'D';
        conta->transacoes[conta->numTransacoes].valor = valor;
        conta->numTransacoes++;

        printf("Depósito de %.2f realizado com sucesso!\n", valor);
    } else {
        printf("Valor inválido.\n");
    }
}

// Função para emitir saldo
void emitirSaldo(ContaBancaria *conta) {
    limparTela();
    imprimirLogo();

    printf("Saldo atual: %.2f\n", conta->saldo);
}

// Função para emitir extrato
void emitirExtrato(ContaBancaria *conta) {
    limparTela();
    imprimirLogo();

    printf("Extrato:\n");

    for (int i = 0; i < conta->numTransacoes; i++) {
        if (conta->transacoes[i].tipo == 'D') {
            printf("Depósito de %.2f\n", conta->transacoes[i].valor);
        } else if (conta->transacoes[i].tipo == 'S') {
            printf("Saque de %.2f\n", -conta->transacoes[i].valor);
        }
    }
}

// Função para alterar dados da conta
void alterarDadosConta(ContaBancaria *conta) {
    limparTela();
    imprimirLogo();

    printf("1. Alterar Agência\n");
    printf("2. Alterar Conta\n");
    printf("3. Alterar Senha\n");
    printf("4. Voltar\n");

    int opcao;
    scanf("%d", &opcao);

    limparTela();
    imprimirLogo();

    switch (opcao) {
        case 1:
            printf("Digite a nova agência: ");
            scanf("%s", conta->agencia);
            break;
        case 2:
            printf("Digite a nova conta: ");
            scanf("%s", conta->conta);
            break;
        case 3:
            printf("Digite a nova senha: ");
            scanf("%s", conta->senha);
            break;
        case 4:
            return;
        default:
            printf("Opção inválida.\n");
    }
}

// Função para imprimir a mensagem de boas-vindas com cor
void imprimirMensagemBoasVindas() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5); // Cor amarela

    printf("Bem-vindo ao Pelado Bank\n\n");

    SetConsoleTextAttribute(hConsole, 5); // Restaurar para a cor padrão (branco)
}

// Função para imprimir o logo colorido
void imprimirLogoColorido() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 8); // Cor vermelha

    printf("\n");
    printf("   oooo ooooo            .o8                             oooo\n");
    printf("   `888 `888'           \"888                             `888\n");
    printf("    888  888             888oooo.   .oooo.   ooo. .oo.    888  oooo\n");
    printf("    888  888             d88' `88b `P  )88b  `888P\"Y88b   888 .8P'\n");
    printf("    888  888             888   888  .oP\"888   888   888   888888.\n");
    printf("    888  888       o     888   888 d8(  888   888   888   888 `88b.\n");
    printf(".o. 88P o888ooooood8     `Y8bod8P' `Y888\"\"8o o888o o888o o888o o888o\n");
    printf("`Y888P\n");

    SetConsoleTextAttribute(hConsole, 7); // Restaurar a cor padrão
}


int main() {
    ContaBancaria minhaConta = {"123", "456", "789", 1000.0, {}, 0};

    char agenciaDigitada[20];
    char contaDigitada[20];
    char senhaDigitada[20];

    limparTela();
    imprimirLogoColorido();

    printf("Digite a agencia: ");
    scanf("%s", agenciaDigitada);

    printf("Digite a conta: ");
    scanf("%s", contaDigitada);

    printf("Digite a senha: ");
    scanf("%s", senhaDigitada);

    if (strcmp(agenciaDigitada, minhaConta.agencia) == 0 &&
        strcmp(contaDigitada, minhaConta.conta) == 0 &&
        strcmp(senhaDigitada, minhaConta.senha) == 0) {


        int opcao = 1;

        do {
            limparTela();
            imprimirMensagemBoasVindas();
            imprimirMenu(opcao);

            char tecla = aguardarTecla();

            switch (tecla) {
                case 72:  // Seta para cima
                    opcao = (opcao - 1 + 6) % 6 + 1;
                    break;
                case 80:  // Seta para baixo
                    opcao = (opcao % 6) + 1;
                    break;
                case 75:  // Seta para a esquerda (voltar)
                    if (opcao == 1) {
                        opcao = 6;
                    } else {
                        opcao--;
                    }
                    break;
                case 77:  // Seta para a direita
                    limparTela();
                    imprimirLogo();

                    switch (opcao) {
                        case 1:
                            realizarSaque(&minhaConta);
                            break;
                        case 2:
                            realizarDeposito(&minhaConta);
                            break;
                         case 3:
	                        emitirSaldo(&minhaConta);
	                        emitirSaldoParaArquivo(&minhaConta);
	                        break;
	                    case 4:
	                        emitirExtrato(&minhaConta);
	                        emitirExtratoParaArquivo(&minhaConta);
	                        break;
	                    case 5:
                            alterarDadosConta(&minhaConta);
                            break;
                        case 6:
                            printf("Saindo...\n");
                            break;
                        default:
                            printf("Opção invalida.\n");
                    }

                    printf("\nPressione enter para continuar...");
                    while (getchar() != '\n');
                    getchar();  // Aguardar o enter

                    break;
            }

        } while (opcao != 6);

    } else {
        printf("Credenciais inválidas.\n");
    }

    return 0;
}

