//OK
/*
Um palíndromo é uma sequência de caracteres cuja leitura é idêntica se feita da direita para esquerda ou vice-versa. 
Por exemplo: “osso” e “ovo” são palíndromos. Em textos mais complexos os espaços e pontuação são ignorados. Ex: A frase “subi no onibus” é o exemplo de uma frase palíndroma onde os espaços foram ignorados. Faça um algoritmo que leia uma sequência de caracteres, mostre-a e diga se é um palíndromo ou não. 
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char str[80];
    printf("Insira uma string:");
    scanf("%s", str);
    int h = strlen(str) - 1, l = 0;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s nao e palíndromo", str);
            return;
        }
    }
    printf("%s e palíndromo", str);

    return 0;
}
