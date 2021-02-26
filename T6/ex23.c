/*
Escrever um algoritmo que leia um valor em reais 
e chame uma função que calcule o menor número possível de notas 
de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00 em que o valor lido pode ser decomposto. 
Ignore os centavos. 
O algoritmo deve mostrar, na função main, o valor lido e a relação de notas necessárias. 
*/

#include <stdio.h>
#include <stdlib.h>
int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

int notas(int valor)
{
    if (valor % 100 == 0)
    {
        notas100 = valor / 100;
    }
    if (valor % 50 == 0)
    {
        notas50 = valor / 50;
    }
    if (valor % 20 == 0)
    {
        notas20 = valor / 20;
    }
    if (valor % 10 == 0)
    {
        notas10 = valor / 10;
    }
    if (valor % 5 == 0)
    {
        notas5 = valor / 5;
    }
    if (valor % 2 == 0)
    {
        notas2 = valor / 2;
    }
    if (valor % 1 == 0)
    {
        notas1 = valor;
    }
    return 0;
}

int main()
{
    int input;
    printf("Digite um valor em reais:\tR$");
    scanf("%d", &input);
    notas(input);
    if (notas100 != 0)
    {
        printf("- %d notas de R$100\n", notas100);
    }
    if (notas50 != 0)
    {
        printf("- %d notas de R$50\n", notas50);
    }
    if (notas20 != 0)
    {
        printf("- %d notas de R$20\n", notas20);
    }
    if (notas10 != 0)
    {
        printf("- %d notas de R$10\n", notas10);
    }
    if (notas5 != 0)
    {
        printf("- %d notas de R$5\n", notas5);
    }
    if (notas2 != 0)
    {
        printf("- %d notas de R$2\n", notas2);
    }
    if (notas1 != 0)
    {
        printf("- %d notas de R$1\n", notas1);
    }
    return 0;
}
