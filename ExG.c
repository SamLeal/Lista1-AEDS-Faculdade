#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

  // Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias.

  float pesoRacao, quantRacao, restoRacao;

  printf("Digite o peso do saco de ração: ");
  scanf("%f", &pesoRacao);
  printf("Digite a quantidade de ração fornecida para cada gato por dia:");
  scanf("%f", &quantRacao);

  restoRacao = pesoRacao - (quantRacao*5);

  printf("A quantidade restante de ração no quinto dia será: %f", restoRacao);

}

