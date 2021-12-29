#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

// Essa função 'time' calcula o no. de segundos atual desde 1 Jan 1970
// Sempre que o programa rodar, esse numero sera diferente, obvio.
  int segundos = time(0);
  srand(segundos);

  int n1 = rand();
  int n2 = rand();

  printf("%d %d", n1, n2);
  return 0;
}
