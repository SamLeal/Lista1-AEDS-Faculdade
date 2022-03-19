#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // ler três valores reais do teclado e dizer se o primeiro não está entre os outros dois
    
  int x, y, z;

  printf("Digite o primeiro valor: ");
  scanf("%i", &x);
  printf("Digite o segundo valor: ");
  scanf("%i", &y);
  printf("Digite o terceiro valor: ");
  scanf("%i", &z);

  printf("%i esta entre %i e %i: %i", x, y, z, x<y || x>z);
  
  return 0;
}
