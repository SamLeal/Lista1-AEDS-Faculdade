#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //  ) ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo
  int x, y;

  printf("digite x: ");
  scanf("%i", &x);
  printf("digite y: ");
  scanf("%i", &y);
  
  printf("x>y: %i", x > y);
  printf("\nx=y: %i", x == y);
  printf("\nx<y: %i", x < y);
  return 0;
}
