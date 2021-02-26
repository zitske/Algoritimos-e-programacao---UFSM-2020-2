
/*
Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha onde se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz 10 X 10 de números e encontre seu elemento minimax, mostrando também sua posição.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 10
#define C 10

int vet[L][C], minmax, l, c, ml, me, mc;

int main()
{

    srand(time(NULL));

    for (int l = 0; l < L; l++)
    {
        for (int c = 0; c < C; c++)
        {
            vet[l][c] = rand() % 1000;
            //printf("%i \t", vet[l][c]);
        }
    }
    for (int l = 0; l < L; l++)
    {
        for (int c = 0; c < C; c++)
        {
            if (vet[l][c] > me)
            {
                me = vet[l][c];
                ml = l;
                mc = c;
                minmax = me;
            }
        }
    }
    //printf("\n ml %i | me %i | mc %i\n", ml, me, mc);

    for (int c = 0; c < C; c++)
    {

        if (vet[ml][c] < minmax)
        {
            minmax = vet[ml][c];
        }
    }
    printf("minmax = %i , localizado na linha %i , coluna %i", minmax, ml, mc);
    return 0;
}
