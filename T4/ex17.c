//OK
/*
Considere uma string composta por várias subsequencias, por exemplo, cccaaaabbbbxdddddddddaaannn. A menor subsequencia é a da letra x, com apenas um elemento; a maior subsequencia é a da letra d, com 9 elementos. 
Faça um algoritmo para ler uma string e mostrar qual é a letra que ocorre na maior subsequencia e o tamanho desta. 

Ex.: Entrada: aaabbbbaa; Saída: maior b, tamanho 4. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 250
int main ()
{
    char str1[tam],str2[tam],t,p;
    int q=0,i,ql=0,h=0,j,Mq=0;
    printf("Digite uma string:");
    fgets(str1,tam,stdin);
    q=strlen(str1);
    strcpy(str2,str1);
    h=strlen(str2);
    for(i=0; i<q; i++)
    {
        if(i==0)
        {
            if(((str1[i]>='a') && (str1[i]<='z'))||((str1[i]>='A') && (str1[i]<='Z')))
            {
                for(j=0; j<h; j++)
                {
                    if(str1[i]==str2[j])
                    {
                        ql++;
                        t=str1[i];
                    }
                    else
                    {
                        t=str1[i];
                    }
                }
                Mq=ql;
            }
        }
        else
        {
            if(((str1[i]>='a') && (str1[i]<='z'))||((str1[i]>='A') && (str1[i]<='Z')))
            {
                if(str1[i]!=t)
                {
                    ql=0;
                    for(j=0; j<h; j++)
                    {
                        if(str1[i]==str2[j])
                        {
                            ql++;
                            t=str1[i];
                        }
                        else
                        {
                            t=str1[i];
                        }
                    }
                    if(Mq<ql)
                    {
                        Mq=ql;
                        p=str1[i];
                    }
                }
            }
        }
    }
    printf("Maior Sequencia e %c e com tamanho de %d",p,Mq);

    return 0;

}