#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
 //Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos.

    float termo1, termo2, quantTermos, nesimo, soma;

    printf("Digite o primeiro termo: ");
    scanf("%f",&termo1);
    printf("Digite o segundo termo: ");
    scanf("%f", &termo2);
    printf("Digite a quantidade de termos: ");
    scanf("%f", &quantTermos);

    nesimo = termo1 + (quantTermos -1) * (termo2 - termo1);

    soma = quantTermos*(termo1+nesimo)/2;

    printf("A soma dos termos da PA é: %.2f", soma);

}
