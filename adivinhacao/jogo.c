#include<stdio.h>

int main() {

  // Imprime cabeçalho na tela
  printf("\n *********************************");
  printf("\n *Bem vindo ao Jogo de Adivinhação*");
  printf("\n *********************************");

  int numero_secreto = 42;
  int chute;

  printf("\n Qual o seu chute? ");
  scanf("%d", &chute);

  printf("\n Seu chute foi: %d", chute);

  return 0;
}
