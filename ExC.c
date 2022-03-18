int main()
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