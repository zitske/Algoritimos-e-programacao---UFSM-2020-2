//OK
/*
Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int q[20], pos = 0, val = 0;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        q[i] = rand() % 1000;
        printf("%i \t", q[i]);
        if (q[i] > pos)
        {
            pos = q[i];
            val = i;
        }
    }

    printf("\n A posição do maior valor é\t %i\n", val + 1);
    printf("\n O maior valor é\t %i\n", q[val]);

    return 0;
}
