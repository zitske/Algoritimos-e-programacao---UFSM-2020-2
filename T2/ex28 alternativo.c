/*
Crie um algoritmo que receba um número inteiro diferente de zero, e calcule o fatorial deste número. (Fatorial de um número é igual ao produto dos números 1 ao número desejado, inclusive. EXEMPLO: 3! (fatorial de 3 é igual a: 1x2x3 = 6).
*/
#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero:\t");
    scanf("%i",&num);
    if(num==0){
        printf("O valor valor inserido deve ser diferente de 0!\n ");
        printf("Insira um novo valor:\t ");
        scanf("%i",&num);
    }
    
    int vet[num],fat,save=1;
    
    for(int cont = 0;cont<=num;cont++){
        vet[cont] = num-cont; 
    }
    for(int counter=0;counter<=num;counter++){
        if(vet[counter]>0){
        save = vet[counter]*save;
        }
    }
    
    printf("O resultado e: %i",save);
    
  return 0;
}