#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
6. Faça um programa que simule ’virtualmente’
a memória de um computador: o usuário começa
especificando o tamanho da memória
(define quantos bytes tem a memória),
e depois ele irá ter 2 opções: inserir um dado
em um determinado endereço, ou consultar o dado contido
em um determinado endereço. A memória deve iniciar com todos
os dados zerados.
*/

int main()
{
    setlocale(LC_ALL,"");

    int tam_memoria, endereco, opcao,  i;
    int controle = 0;

    //criando a memoria
    printf("Defina o tamanho da memória: \n");
    scanf("%d", &tam_memoria);

    int *vetor_memoria;
    vetor_memoria = (int*)calloc(tam_memoria, sizeof(int));

    for(i=0;i<tam_memoria;i++){
        printf("\n %d \n", vetor_memoria[i]);
    }

    if(vetor_memoria == NULL){
        printf("\n Erro de alocacao de memoria \n");
        exit(1);
    }

    while(controle == 0){
        printf("\n Lista de opções: \n");
        printf("\n 1 - Inserir um dado em um determinado endereço. \n");
        printf("\n 2 - Consultar o dado contido em um determinado endereço. \n");
        printf("\n 3 - Sair \n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);
        if (opcao == 1){
            printf("\n Entre com o endereco onde quer inserir o dado : ");
            scanf("%d", &endereco);
            for(i=0;i<tam_memoria;i++){
                if(i == endereco){
                    printf("\n Entre com o valor inteiro para o índice %d: ", i);
                    scanf("%d", &vetor_memoria[i]);
                }
            }
            //lista o conteudo existentes na memoria:
            for(i=0;i<1;i++){
                printf("\n MEMORIA: ");
                for(i=0;i<tam_memoria;i++){
                    printf("\n Conteúdo atual do índice %d: %d \n", i, vetor_memoria[i]);
                }
            }
        }else if (opcao == 2){
            printf("Digite o endereco do dado a ser consultado na sua memoria: \n");
            scanf("%d", &endereco);
            for(i=0;i<tam_memoria;i++){
                if(i == endereco){
                    printf(" \n Dado contido no endereco %d : %d \n", i, vetor_memoria[i]);
                }
            }
        }else if(opcao == 3){
            printf("\n Você saiu \n");
            controle = 1;
        }else{
            printf("\n Opção inválida. \n");
            printf("\n Você saiu \n");
            controle = 1;
        }
    }
}
