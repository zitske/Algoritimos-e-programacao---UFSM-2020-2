/*
Crie uma estrutura para armazenar dados de funcionários: o nome e o ano de ingresso em uma empresa. 
Desenvolver um algoritmo que calcule e exiba o nome e o tempo de serviço de cada funcionário cadastrado (em anos) 
e o nome do funcionário mais antigo da empresa considerando que a empresa tem 15 funcionários.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct funcionario
{
    char nome[80];
    int anoing;
} funcionario;

int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int anoatual = tm.tm_year + 1900;
    int nfunc = 15;
    funcionario funclst[nfunc];
    int mt = 0, temp = 0, ma = 0;

    for (int i = 0; i < nfunc; i++)
    {
        printf("Nome do funcionario %i: \t", i + 1);
        scanf("%s", funclst[i].nome);
        printf("Ano de ingresso do funcionario %i: \t", i + 1);
        scanf("%d", &funclst[i].anoing);
    }
    for (int f = 0; f < nfunc; f++)
    {
        temp = anoatual - funclst[f].anoing;
        printf("%s entrou esta na empresa a %d anos! \n", funclst[f].nome, temp);
        if (temp > ma)
        {
            ma = temp;
            mt = f;
        }
    }
    printf("O funcionario mais antigo da empresa e %s ! \n", funclst[mt].nome);
    return 0;
}
