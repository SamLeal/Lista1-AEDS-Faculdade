#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Ler um valor inteiro do teclado e dizer se é impar.
  int numero, impar;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  impar = (1 == numero%2);

  printf("%i", impar);

  return 0;
}
