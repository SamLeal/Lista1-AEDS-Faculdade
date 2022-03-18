#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.
  int numero, imparPar;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  imparPar = (1 == numero%2) && (numero > 100) || (0 == numero%2) && (numero < 100);

  printf("%i", imparPar);

  return 0;
}
