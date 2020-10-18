#include <stdio.h>
#include <stdlib.h>

/*
1. Implemente uma fun��o que receba dois vetores de inteiros v1 e v2,
mais um inteiro N com o tamanho dos vetores.
Sua fun��o deve alocar e retornar um vetor de inteiros de tamanho N
onde o elemento na posi��o i de v3 � a soma dos elementos na posi��o i
de v1 e v2.

Sua fun��o deve ter a seguinte declara��o:
int * soma_vetores(int *v1, int *v2, int N);
Para testar seu programa, crie uma fun��o main() que chame sua fun��o
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
