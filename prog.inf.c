#include<stdio.h>

int main() 
{
    int idade;
    float altura;
    double saldoBancario = 12345.67;
    char inicial;
    char nome[20] = "Bruno";
    printf("Sua idade\n");
    scanf("%d", &idade);
    printf("Idade: %d anos\n", idade);
    printf("Sua altura\n");
    scanf("%f", &altura);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial do seu nome\n");
    scanf(" %c", &inicial);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
 
    return 0;
}