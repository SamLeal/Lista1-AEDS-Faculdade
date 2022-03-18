#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.

    int a, b, teste;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o valor de A: ");
    scanf("%i",&a);
    printf("Digite o valor de B: ");
    scanf("%i",&b);

    teste = a;
    a = b;
    b = teste;

    printf("O valor de A é: %i. E o de B é: %i.", a,b);
  
}
