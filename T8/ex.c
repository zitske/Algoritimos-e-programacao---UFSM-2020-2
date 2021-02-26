/*
Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho n 
e retorne quantos números pares estão armazenados no vetor. 
A função deve obedecer o protótipo: int pares (int n, int *vet).
*/

#include <stdio.h>

int Pares(int n, int *vet)
{
    int pares = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            pares++;
        }
    }

    return pares;
}

int main()

{
    int n = 5; //tamanhodo vetor
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o %d numero do vetor: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("\nNumero de pares no vetor: %d\n\n", Pares(n, vetor));

    return 0;
}



//Coded by ZitskeTechnology