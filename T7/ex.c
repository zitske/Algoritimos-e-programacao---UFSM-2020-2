/*
Crie uma função para calcular o MDC (Máximo Divisor Comum) de dois números passados por parâmetro
*/

#include <stdio.h>
int MDC(int, int);
int main()
{
    int a, b;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    printf("O MDC entre %d e %d %c %d\n", a, b, 130, MDC(a, b));
}

int MDC(int i, int j)
{
    if (i % j != 0)
        return MDC(j, i % j);
    else
        return j;
}
