#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Leia um número e imprima o resto da divisão por 7. Utilize o comando resto (a,b) na linguagem C (a % b).

    int a, resto;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o número:");
    scanf("%i", &a);

    resto = (a%7);

    printf("O resto de %i por 7 é: %i.", a, resto);
}
