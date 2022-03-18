#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Ler um valor inteiro do teclado e dizer se é impar e maior que 100.
  int numero, impar, maiorImpar;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  impar = (1 == numero%2) && (numero > 100);

  printf("%i", impar);

  return 0;
}
