#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //  ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois
  char x, y, z;
  printf(" Digite o primeiro valor: ");
  scanf("%c", &x);
  printf(" Digite o segundo valor:");
  scanf("%c", &y);
  printf(" Digite o terceiro valor: ");
  scanf("%c", &z);
  

  printf("%c esta entre %c e %c: %i", x, y, z, x>y && x<z);
  
  return 0;
}
