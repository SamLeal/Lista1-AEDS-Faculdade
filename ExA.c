#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

  int numero, sucessor;
  setlocale(LC_ALL, "portuguese-brazilian");
  printf("Digite o numero:");
  scanf("%i", &numero);
  sucessor = numero + 1;
  printf("O sucessor do numero é: %i", sucessor);

  return 0;
}