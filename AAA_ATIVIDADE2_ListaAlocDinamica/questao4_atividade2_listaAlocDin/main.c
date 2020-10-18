#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
4. Fa�a um programa para armazenar em mem�ria
um vetor de dados contendo 1500 valores do tipo int,
usando a fun��o de aloca��o din�mica de mem�ria calloc:

a. Fa�a um loop e verifique se o vetor cont�m realmente
os 1500 valores inicializados com zero
(conte os 1500 zeros do vetor).

b. Atribua para cada elemento do vetor o valor
do seu �ndice junto a este vetor.

c. Exibir na tela os endere�os dos 10 primeiros
e dos 10 �ltimos elementos do vetor.

*/
int main()
{

    setlocale(LC_ALL,"");

    //a)
    int *vetor;
    int cont, i;

    vetor = (int*)calloc(1500, sizeof(int));

    printf("\n Conte�do do vetor: \n");
    for(i=0; i<=1499;i++){
       printf("%d", vetor[i]);
    }
    printf("\n");
    for(i=0; i<=1499;i++){
        if (vetor[i] == 0){
            cont += 1;
        }
    }

    if(cont == 1500){
        printf("\n Vetor cont�m 1500 posi��es em zero \n");
    }else{
        printf("\n Vetor n�o cont�m 1500 posi��es em zero \n");
    }
    //b)
    for(i=0;i<=1500;i++){
        vetor[i] = i;
    }
    for(i=0; i<=1499;i++){
       printf("\n Posi��o: %d - Conte�do: %d", i, vetor[i]);
    }

    //c)
    printf("\n Os 10 primeiros endere�os do vetor: \n");
    for(i=0;i<=10;i++){
        printf("\n Endere�o %d : %p \n", i, (void*)&vetor[i]);
    }
    printf("\n Os 10 ultimos endere�os do vetor: \n");
    for(i=1490;i<=1500;i++){
        printf("\n Endere�o %d : %p \n", i, (void*)&vetor[i]);
    }

}
