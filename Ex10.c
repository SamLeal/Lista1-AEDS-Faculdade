#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //  ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo
    
  int x, y;

  printf("Digite x: ");
  scanf("%i", &x);
  printf("Digite y: ");
  scanf("%i", &y);

  printf("x>y: %i", x > y);
  printf("\nx=y: %i", x == y);
  printf("\nx<y: %i", x < y);
  
  return 0;
}
