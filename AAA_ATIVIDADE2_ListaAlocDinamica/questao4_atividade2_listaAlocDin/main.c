#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
4. Faça um programa para armazenar em memória
um vetor de dados contendo 1500 valores do tipo int,
usando a função de alocação dinâmica de memória calloc:

a. Faça um loop e verifique se o vetor contém realmente
os 1500 valores inicializados com zero
(conte os 1500 zeros do vetor).

b. Atribua para cada elemento do vetor o valor
do seu índice junto a este vetor.

c. Exibir na tela os endereços dos 10 primeiros
e dos 10 últimos elementos do vetor.

*/
int main()
{

    setlocale(LC_ALL,"");

    //a)
    int *vetor;
    int cont, i;

    vetor = (int*)calloc(1500, sizeof(int));

    printf("\n Conteúdo do vetor: \n");
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
        printf("\n Vetor contém 1500 posições em zero \n");
    }else{
        printf("\n Vetor não contém 1500 posições em zero \n");
    }
    //b)
    for(i=0;i<=1500;i++){
        vetor[i] = i;
    }
    for(i=0; i<=1499;i++){
       printf("\n Posição: %d - Conteúdo: %d", i, vetor[i]);
    }

    //c)
    printf("\n Os 10 primeiros endereços do vetor: \n");
    for(i=0;i<=10;i++){
        printf("\n Endereço %d : %p \n", i, (void*)&vetor[i]);
    }
    printf("\n Os 10 ultimos endereços do vetor: \n");
    for(i=1490;i<=1500;i++){
        printf("\n Endereço %d : %p \n", i, (void*)&vetor[i]);
    }

}
