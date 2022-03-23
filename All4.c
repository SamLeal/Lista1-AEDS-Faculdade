#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ExA()
{
    //Leia um número e imprima seu sucessor.
  int numero, sucessor;
  setlocale(LC_ALL, "portuguese");
  printf("Digite o numero:");
  scanf("%i", &numero);
  sucessor = numero + 1;
  printf("O sucessor do numero é: %i", sucessor);

  return 0;
}

int ExB()
{
    //Calcule a média aritmética de quatro números inteiros dados

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

int ExC()
{
    //Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média ponderada das notas.

    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    
    printf("Digite a primeira nota:");
    scanf("%f",&nota1);
    printf("Digite o primeiro peso:");
    scanf("%f", &peso1);
    printf("Digite a segunda nota:");
    scanf("%f",&nota2);
    printf("Digite o segundo peso:");
    scanf("%f", &peso2);
    printf("Digite a terceira nota:");
    scanf("%f",&nota3);
    printf("Digite o terceiro peso:");
    scanf("%f", &peso3);

    media =((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);

    printf("A media ponderada e: %.2f", media);
    return 0;
}

int ExD()
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

int ExE()
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

int ExF()
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

int ExG()
{

  // Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias.

  float pesoRacao, quantRacao, restoRacao;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o peso do saco de ração: ");
  scanf("%f", &pesoRacao);
  printf("Digite a quantidade de ração fornecida para cada gato por dia:");
  scanf("%f", &quantRacao);

  restoRacao = pesoRacao - (quantRacao*5);

  printf("A quantidade restante de ração no quinto dia será: %f", restoRacao);

}

int ExH()
{
    //Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.

    int a, b, teste;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o valor de A: ");
    scanf("%i",&a);
    printf("Digite o valor de B: ");
    scanf("%i",&b);

    teste = a;
    a = b;
    b = teste;

    printf("O valor de A é: %i. E o de B é: %i.", a,b);
  
}

int ExI()
{
    //Leia um número e imprima o resto da divisão por 7. Utilize o comando resto (a,b) na linguagem C (a % b).

    int a, resto;
    setlocale(LC_ALL, "portuguese");

    printf("Digite o número:");
    scanf("%i", &a);

    resto = (a%7);

    printf("O resto de %i por 7 é: %i.", a, resto);
}

int ExJ()
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
