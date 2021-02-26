/*
Escreva um algoritmo que chama uma função que, 
recebendo um número inteiro não negativo como PARÂMETRO, 
retorne o mesmo invertido. Ex: recebido como parâmetro o valor 234, deve retornar o inteiro 432. 
*/

#include <stdio.h>
#include <stdlib.h>

int inverter(int input)
{
    int output, temp;

    while (input != 0 && input > 0)
    {
        temp = input % 10;
        output = output * 10 + temp;
        input /= 10;
    }
    printf("%d", output);
    return output;
}

int main()
{
    int number;

    printf("Insira um úmero inteiro não negativo:\t");
    scanf("%d", &number);
    inverter(number);

    return 0;
}
