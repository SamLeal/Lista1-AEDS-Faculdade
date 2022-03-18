#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num1, num2, num3, num4;
    float media;

    setlocale(LC_ALL, "portuguese");
    printf("Digite 4 numeros em seguida:");
    scanf("%i",&num1);
    scanf("%i",&num2);
    scanf("%i",&num3);
    scanf("%i",&num4);

    media = (num1+num2+num3+num4)/4;

    printf("A média é: %.2f", media);
    return 0;
}