// Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y)
// e imprima o resultado da multiplicação entre essas duas variáveis.

#include<stdio.h>

int main() {

  int x, y, multiplica;


  printf("\n Vamos Multiplicar 2 números?");

  printf("\n Digite o primeiro numero: ");
  scanf("%d", &x);

  printf("\n Digite o segundo numero: ");
  scanf("%d", &y);

  multiplica = (x*y);

  printf("\n O Resultado da Multiplicação de %d por %d é: %d", x,y, multiplica);

  return 0;
}
