#include <stdio.h>
#include <stdlib.h>

/*
1. Implemente uma função que receba dois vetores de inteiros v1 e v2,
mais um inteiro N com o tamanho dos vetores.
Sua função deve alocar e retornar um vetor de inteiros de tamanho N
onde o elemento na posição i de v3 é a soma dos elementos na posição i
de v1 e v2.

Sua função deve ter a seguinte declaração:
int * soma_vetores(int *v1, int *v2, int N);
Para testar seu programa, crie uma função main() que chame sua função
soma_vetores e imprima os valores somados.

*/

//pronta...ish

int * soma_vetores(int *v1, int *v2, int N){

    int *v3 = malloc(N * sizeof(int));
    for(int i=0;i<N;i++){
        v3[i] = v2[i] + v1[i];
    }
    return v3;
}

int main()
{
    int v1[5],v2[5],i2, N;
    int* v3;

    for(i2=0;i2<=4;i2++){
        v1[i2] = 3;
    }
    for(i2=0;i2<=4;i2++){
        v2[i2] = 7;
    }
    N = sizeof(v1)/sizeof(v1[0]);

    v3 = soma_vetores(v1,v2,N);

    for (int i = 0; i < N; i++)
        printf("Valor na posicao %d: %d\n", i, v3[i]);
    free(v3);

    printf(" \n Hello world!\n");
    return 0;
}
