#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    printf("\n          P  /_\  P                              ");
    printf("\n         /_\_|_|_/_\                             ");
    printf("\n     n_n | ||. .|| | n_n         Bem vindo ao    ");
    printf("\n     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!");
    printf("\n    |" "  |  |_|  |"  " |                        ");
    printf("\n    |_____| ' _ ' |_____|                        ");
    printf("\n          \__|_|__/                              ");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("\n Qual o nivel de dificuldade?");
    printf("\n (1) Facil | (2) Medio | (3) Dificil");
    printf("\n Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel) {
      case 1:
        numerodetentativas = 6;
        break;
      case 2:
        numerodetentativas = 4;
        break;
      case 3:
        numerodetentativas = 2;
        break;
      default:
        printf("\n Opcao invalida Digite um numero de 1 a 3");
        break;
    }

      for(int i = 1; i <= numerodetentativas; i++) {

        printf("\nTentativa %d", tentativas);
        printf("\nQual é o seu chute? ");

        scanf("\n %d", &chute);
        printf("\nSeu chute foi %d", chute);

        if(chute < 0) {
            printf("\nVocê não pode chutar números negativos!");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou){
            break;
        }

        else if(maior) {
            printf("\nSeu chute foi maior que o número secreto");
        }

        else {
            printf("\nSeu chute foi menor que o número secreto");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;

    }

    printf("\nFim de jogo!");

    if(acertou) {
        printf("\nVocê ganhou!");
        printf("\nVocê acertou em %d tentativas!", tentativas);
        printf("\nTotal de pontos: %.1f", pontos);
    } else {
        printf("\nVocê perdeu! Tente de novo!");
    }
}
