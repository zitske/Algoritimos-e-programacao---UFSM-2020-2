/*
Crie um algoritmo que receba um número inteiro diferente de zero, e calcule o fatorial deste número. (Fatorial de um número é igual ao produto dos números 1 ao número desejado, inclusive. EXEMPLO: 3! (fatorial de 3 é igual a: 1x2x3 = 6).
*/
#include <stdio.h>

int main() {


    int fat, n;

    printf("Digite um numero:\t");
    scanf("%d", &n) ;

  for(fat = 1; n > 1; n = n - 1)
  {
      fat = fat * n;
  }

  printf("\nO fatorial desse número é: %d", fat);

  return 0;
}