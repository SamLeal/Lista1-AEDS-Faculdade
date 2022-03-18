#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  //Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F). 

  float cel, fah;
  setlocale(LC_ALL, "portuguese");

  printf("Digite a temperatura em Celsius:");
  scanf("%f",&cel);
  fah = (cel*(9/5.0))+32;

  printf("%.1f celsius é igual a %.1f fahrenheit:", cel, fah);
  //Quando se coloca  5celsius se espera 41fahrenheit.
}
