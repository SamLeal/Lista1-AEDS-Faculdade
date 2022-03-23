#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Ex1(){
    // Ler um valor inteiro do teclado e dizer se é par.
  int numero, par;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  par = (0 == numero%2);

  printf("%i", par);

  return 0;
}

int Ex2(){
    // Ler um valor inteiro do teclado e dizer se é impar.
  int numero, impar;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  impar = (1 == numero%2);

  printf("%i", impar);

  return 0;
}

int Ex3()
{
    // Ler um valor inteiro do teclado e dizer se é impar e maior que 100.
  int numero, impar, maiorImpar;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  impar = (1 == numero%2) && (numero > 100);

  printf("%i", impar);

  return 0;
}

int Ex4()
{
    // Ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.
  int numero, imparPar;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  imparPar = (1 == numero%2) && (numero > 100) || (0 == numero%2) && (numero < 100);

  printf("%i", imparPar);

  return 0;
}

int Ex5()
{
    //  ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75)
  int numero, intervalo;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  intervalo = 25 < numero && numero < 75;

  printf("%i", intervalo);

  return 0;
}


int Ex6()
{
    //  ler um valor inteiro do teclado e dizer se pertence ao intervalo  fechado entre [25:75]
  int numero, intervalo;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  intervalo = 25 <= numero && numero <= 75;

  printf("%i", intervalo);

  return 0;
}

int Ex7()
{
    //  ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]
  int numero, intervalo;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);

  intervalo = (15 <= numero && numero <= 45) || (66 <= numero && numero <= 99);

  printf("%i", intervalo);

  return 0;
}

int Ex8()
{
    //  ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar
  int numero, numero2, intervalo;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);
  printf("Digite o numero: ");
  scanf("%i", &numero2);

  intervalo = (0 == numero%2) && (1 == numero2%2);

  printf("%i", intervalo);

  return 0;
}

int Ex9()
{
    //  ) ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo
  int numero, numero2, intervalo;
  setlocale(LC_ALL, "portuguese");

  printf("Digite o numero: ");
  scanf("%i", &numero);
  printf("Digite o numero: ");
  scanf("%i", &numero2);

  intervalo = ((0 == numero%2) && (numero>0)) && (-1 == numero2%2);

  printf("%i", intervalo);

  return 0;
}

int Ex10()
{
    //  ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo
    
  int x, y;

  printf("Digite x: ");
  scanf("%i", &x);
  printf("Digite y: ");
  scanf("%i", &y);

  printf("x>y: %i", x > y);
  printf("\nx=y: %i", x == y);
  printf("\nx<y: %i", x < y);
  
  return 0;
}

int Ex11()
{
    //ler três valores reais do teclado e dizer se o primeiro está entre os outros dois
    
  int x, y, z;

  printf("Digite o primeiro valor: ");
  scanf("%i", &x);
  printf("Digite o segundo valor: ");
  scanf("%i", &y);
  printf("Digite o terceiro valor: ");
  scanf("%i", &z);

  printf("%i esta entre %i e %i: %i", x, y, z, x>y && x<z);
  
  return 0;
}

int Ex12()
{
    // ler três valores reais do teclado e dizer se o primeiro não está entre os outros dois
    
  int x, y, z;

  printf("Digite o primeiro valor: ");
  scanf("%i", &x);
  printf("Digite o segundo valor: ");
  scanf("%i", &y);
  printf("Digite o terceiro valor: ");
  scanf("%i", &z);

  printf("%i esta entre %i e %i: %i", x, y, z, x<y || x>z);
  
  return 0;
}

int Ex13()
{
    //ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois.
    char x, y, z;

    printf("digite x: ");
    scanf("%c", &x);
    printf("digite y: ");
    fflush (stdin);
    scanf("%c", &y);
    printf("digite z: ");
    fflush (stdin);
    scanf("%c", &z);

    printf("%c esta entre %c e %c: %i", x, y, z, y<x && x<z);

    return 0;
}

int Ex14()
{
    //ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.
    char x, y, z;

    printf("Digite o primeiro caracter: ");
    scanf("%c", &x);
    printf("Digite o segundo caracter: ");
    fflush (stdin);
    scanf("%c", &y);
    printf("Digite o terceiro caracter: ");
    fflush (stdin);
    scanf("%c", &z);

    printf("Está em ordem crescente: %i", x < y && y < z);

    return 0;
}

int Ex15()
{
    // ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.
    char x;

    printf("Digite o caracter:");
    scanf("%c", &x);

    printf("E maiusculo? %i", 64<x && x<91);

    return 0;
}
