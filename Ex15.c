#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.
    char x;

    printf("Digite o caracter: ");
    scanf("%c", &x);

    if( 64<x && x<90){
        printf("Maiusculo");
    } else{
        printf("Minusculo");
    }

    return 0;
}
