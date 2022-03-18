#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  //Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo.

  float base, altura, area;
  setlocale(LC_ALL, "portuguese");

  printf("Digite a base do triangulo:");
  scanf("%f", &base);
  printf("Digite a altura do triangulo:");
  scanf("%f", &altura);

  area =  (base*altura)/2;

  printf("A área do triangulo é: %.2f", area);

}
