/*
Escreva uma Programa que receba um número inteiro e verifique se o número fornecido é primo ou não. Imprima mensagem de número primo ou número não primo.
OBSERVAÇÃO: um número é primo se este é divisível apenas pelo número um e por ele mesmo.
*/

#include <stdio.h>

int main() {
 

 int num, cont, div = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
    if(num == 1 || num == 0){
        printf("%d Não é um número primo!\n", num);
        }else{
            for (cont = 2; cont <= num / 2; cont++) {
                if (num % cont == 0) {
                div++;
                }
            }
            if (div == 0)
                printf("%d É um número primo!\n", num);
            else
                printf("%d Não é um número primo!\n", num);
        }
 return 0;
}