
/*
Leia um vetor de 15 posições, após isso, implemente um algoritmo para inverter as posições deste vetor da seguinte maneira: 1o troca com o 15o, 2o com o 14o, e assim sucessivamente até efetuar todas as trocas. Obs.: Não use vetores auxiliares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vet[15], tmax, tmin;

int main()
{

    srand(time(NULL));

    for (int i = 0; i < 15; i++)
    {
        vet[i] = rand() % 1000;
        printf("%i \t", vet[i]);
    }

    printf("\n -------------------------------\n");

    for (int f = 0; f < 15; f++)
    {
        tmax = vet[f];
        tmin = vet[14 - f];
        //x == 14-x
        vet[f] = tmax;
        //14-x == x;
        vet[14 - f] = tmin;
    }

    for (int g = 0; g < 15; g++)
    {
        printf("%i \t", vet[14 - g]);
    }
    return 0;
}
