#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.
    char x, y, z;

    printf("Digite o primeiro caracter: ");
    scanf("%c", &x);
    printf("Digite o segundo caracter: ");
    fflush (stdin);
    scanf("%c", &y);
    printf("Digite o terceiro caracter: ");
    fflush (stdin);
    scanf("%c", &z);

    printf("Está em ordem crescente: %i", x < y && y < z);

    return 0;
}
