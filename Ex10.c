#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //  ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo.
    
  float x, y;

  printf("Digite x: ");
  scanf("%f", &x);
  printf("Digite y: ");
  scanf("%f", &y);

  printf("x>y: %i", x > y);
  printf("\nx=y: %i", x == y);
  printf("\nx<y: %i", x < y);

  printf("\n");
  return 0;
  // Ao digitar 2 e 1 deve retornar 1, 0 e 0.
}
