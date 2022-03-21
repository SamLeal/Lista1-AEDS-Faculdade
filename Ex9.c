#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //  ) ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo
  int numero, numero2, intervalo;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);
  printf("Digite o numero: ");
  scanf("%i", &numero2);

  intervalo = ((0 == numero%2) && (numero>0)) && (-1 == numero2%2);

  printf("%i", intervalo);

  return 0;
}
