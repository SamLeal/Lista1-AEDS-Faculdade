#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //  ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]
  int numero, intervalo;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  intervalo = (15 <= numero && numero <= 45) || (66 <= numero && numero <= 99);

  printf("%i", intervalo);

  return 0;
}
