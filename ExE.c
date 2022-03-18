#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  //Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o novo salário.

  float salarioAtual, percAumento, salarioNovo;
  setlocale(LC_ALL, "portuguese-");

  printf("Digite o salario atual:");
  scanf("%f", &salarioAtual);
  printf("Digite o percentual de aumento:");
  scanf("%f",&percAumento);

  salarioNovo = ((percAumento/100)*salarioAtual)+salarioAtual;

  printf("O seu novo salario é: R$%.2f", salarioNovo);
  
}
