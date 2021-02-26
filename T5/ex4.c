/*
1- Defina uma struct chamada ponto2d que tenha como atributos os pontos x, y. 
2- Crie duas variáveis do tipo ponto2d chamadas ponto_inicial e ponto_final. 
3- Leia os valores, calcule a distância euclidiana e mostre o resultado. 
DICA: Usar o teorema de Pitágoras para o cálculo da distância.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto2d
{
    int X;
    int Y;
} Ponto;

int main()
{
    struct ponto2d ponto_inicial;
    struct ponto2d ponto_final;
    int distancia;

    printf("Digite o ponto inicial X:");
    scanf("%d", &ponto_inicial.X);
    printf("Digite o ponto inicial Y:");
    scanf("%d", &ponto_inicial.Y);
    printf("Digite o ponto final X:");
    scanf("%d", &ponto_final.X);
    printf("Digite o ponto final Y:");
    scanf("%d", &ponto_final.Y);

    distancia = sqrt(pow(ponto_inicial.X - ponto_final.X, 2) + pow(ponto_inicial.Y - ponto_final.Y, 2));

    printf("A distância euclidiana entre os pontos(%i,%i)(%i,%i) e %i", ponto_inicial.X, ponto_inicial.Y, ponto_final.X, ponto_final.Y, distancia);
    return 0;
}
