#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibirMensagemInicial();
int gerarNumeroAleatorio(int limite);
void jogar(int numeroSecreto);

int main() {
    exibirMensagemInicial();

    int limiteSuperior = 100;
    int numeroSecreto = gerarNumeroAleatorio(limiteSuperior);

    jogar(numeroSecreto);

    return 0;
}

void exibirMensagemInicial() {
    printf("********************\n");
    printf("* Jogo de Adivinha *\n");
    printf("********************\n");
    printf("Tente adivinhar o número entre 1 e 100!\n");
}

int gerarNumeroAleatorio(int limite) {
    srand(time(0));
    return (rand() % limite) + 1;
}

void jogar(int numeroSecreto) {
    int* chutes = NULL;
    int capacidade = 2;
    int tentativas = 0;
    int chute;

    chutes = (int*)malloc(capacidade * sizeof(int));
    if (chutes == NULL) {
        printf("Erro ao alocar memória. Encerrando o programa.\n");
        exit(1);
    }

    while (1) {
        printf("\nTentativa %d: Qual é o seu chute? ", tentativas + 1);
        scanf("%d", &chute);

        if (tentativas >= capacidade) {
            capacidade *= 2;
            chutes = (int*)realloc(chutes, capacidade * sizeof(int));
            if (chutes == NULL) {
                printf("Erro ao realocar memória. Encerrando o programa.\n");
                exit(1);
            }
        }
        chutes[tentativas] = chute;
        tentativas++;

        if (chute == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto (%d)!\n", numeroSecreto);
            break;
        } else if (chute > numeroSecreto) {
            printf("Seu chute foi maior que o número secreto.\n");
        } else {
            printf("Seu chute foi menor que o número secreto.\n");
        }
    }

    printf("\nVocê fez %d tentativa(s). Seus chutes foram:\n", tentativas);
    for (int i = 0; i < tentativas; i++) {
        printf("%d ", chutes[i]);
    }
    printf("\n");

    free(chutes);

    printf("Fim de jogo. Obrigado por jogar!\n");
}