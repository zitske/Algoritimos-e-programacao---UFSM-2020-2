
/*
Escreva um algoritmo que calcule o m.d.c. (máximo divisor comum) entre A e B (número inteiros e positivos). Esses dois valores são passados pelo usuário através do teclado.
*/


#include <stdio.h>

int main() {

    int v1,v2,mdc =0,flag,var,i;
    //quando flag for 0 = v1 maior, flag = 1 v2 maior
    

    printf("Digite o comprimento 1:\t");
    scanf("%i",&v1);
    printf("Digite o comprimento 2:\t");
    scanf("%i",&v2);

    if(v1<v2){
        flag = 1;
    }else{
        flag = 0;
    }
    
    if(flag == 0){
        //printf("v1 e maior\n");
        for(i = v1;v2%i != 1;i--){
            var=i;
            //printf("mdc = %i \n",var);
        }
    }else if(flag == 1){
        //printf("v2 e maior\n");
        for(i = v2;v1%i != 1;i--){
            var=i;
            //printf("mdc = %i \n",var);
        }
    }

     printf("O mdc entre %i e %i : %i \n",v1,v2,var);

  return 0;
}

