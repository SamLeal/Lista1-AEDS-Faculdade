#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Ler um valor inteiro do teclado e dizer se é par.
  int numero, par;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  par = (0 == numero%2);

  printf("%i", par);

  return 0;
}
