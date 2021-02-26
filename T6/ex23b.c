/*
Escrever um algoritmo que leia um valor em reais 
e chame uma função que calcule o menor número possível de notas 
de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00 em que o valor lido pode ser decomposto. 
Ignore os centavos. 
O algoritmo deve mostrar, na função main, o valor lido e a relação de notas necessárias. 
*/

#include <stdlib.h>
#include <stdio.h>

struct funcao
{
    int cem, cinquenta, vinte, dez, cinco, dois;
};

struct funcao testando(int x, struct funcao y);
int main(void)
{
    printf("Insira um valor em reais: ");
    int valor;
    scanf("%d", &valor);

    struct funcao teste;

    struct funcao result = testando(valor, teste);
    printf("Para o valor %d:\nNotas de 100: %d\nNotas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 2: %d\n", valor, result.cem, result.cinquenta,
           result.vinte, result.dez, result.cinco, result.dois);
}
struct funcao testando(int x, struct funcao y)
{
    int aux = x;

    y.cem = aux / 100;
    aux = aux - (y.cem * 100);

    y.cinquenta = aux / 50;
    aux = aux - (y.cinquenta * 50);

    y.vinte = aux / 20;
    aux = aux - (y.vinte * 20);

    y.dez = aux / 10;
    aux = aux - (y.dez * 10);

    y.cinco = aux / 5;
    aux = aux - (y.cinco * 5);

    y.dois = aux / 2;
    aux = aux - (y.dois * 2);

    return y;
}