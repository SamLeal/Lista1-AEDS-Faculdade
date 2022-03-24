#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

  // Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias.

  float pesoRacao, quantRacao, restoRacao;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o peso do saco de ração(em/kg): ");
  scanf("%f", &pesoRacao);
  printf("Digite a quantidade de ração fornecida para cada gato por dia(em/gramas):");
  scanf("%f", &quantRacao);

  restoRacao = (pesoRacao) - ((quantRacao/1000)*5);

  printf("A quantidade restante de ração no quinto dia será: %.2f kg.", restoRacao);

  printf("\n");
  return 0;
  //Quando o saco de ração pesa 20kg, e os gatos comem 100gramas por dia deve retornar

}
