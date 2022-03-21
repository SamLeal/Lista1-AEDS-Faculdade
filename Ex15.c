#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.
    char x;

    printf("Digite o caracter:");
    scanf("%c", &x);

    printf("E maiusculo? %i", 64<x && x<91);

    return 0;
}
