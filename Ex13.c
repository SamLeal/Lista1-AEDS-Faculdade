#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois.
    char x, y, z;

    printf("digite x: ");
    scanf("%c", &x);
    printf("digite y: ");
    fflush (stdin);
    scanf("%c", &y);
    printf("digite z: ");
    fflush (stdin);
    scanf("%c", &z);

    printf("%c esta entre %c e %c: %i", x, y, z, y<x && x<z);

    return 0;
}
