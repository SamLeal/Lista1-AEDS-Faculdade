#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //  ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75)
  int numero, intervalo;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  intervalo = 25 < numero && numero < 75;

  printf("%i", intervalo);

  return 0;
}
