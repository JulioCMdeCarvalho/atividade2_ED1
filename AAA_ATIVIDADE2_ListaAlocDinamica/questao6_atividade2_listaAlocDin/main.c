#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <string.h>

/*
6. Fa�a um programa que simule �virtualmente�
a mem�ria de um computador: o usu�rio come�a
especificando o tamanho da mem�ria
(define quantos bytes tem a mem�ria),
e depois ele ir� ter 2 op��es: inserir um dado
em um determinado endere�o, ou consultar o dado contido
em um determinado endere�o. A mem�ria deve iniciar com todos
os dados zerados.
*/

int main()
{
    setlocale(LC_ALL,"");

    int tam_memoria, endereco, opcao,  i;
    int controle = 0;
    char dado[50];
    char *p;

    printf("Defina o tamanho da mem�ria: \n");
    scanf("%d", &tam_memoria);

    //criando a memoria...ish
    char *vetor_memoria;
    vetor_memoria = (char*)calloc(tam_memoria, sizeof(char));

    while(controle == 0){
        printf("\n Lista de op��es: \n");
        printf("1 - inserir um dado em um determinado endere�o. \n");
        printf("2 - consultar o dado contido em um determinado endere�o. \n");
        printf("3 - sair \n");
        printf("Escolha uma op��o: \n");
        scanf("%d", &opcao);
        if (opcao == 1){
            printf("Digite o dado que quer inserir no vetor: \n");
            scanf("%s",dado);
            printf("Digite o endere�o no qual quer inserir o valor: \n");
            printf("Enderecos de sua memoria s�o de 0 at� o valor que digitou previamente menos 1 \n");
            scanf("%d", endereco);
            //ate aqui funciona
            for(i=0;i<tam_memoria;i++){
                //aver q nao eh assim
                if(i == endereco){
                    vetor_memoria[i] = dado;
                }
            }
        }else if (opcao == 2){
            printf("Digite o endereco do dado a ser consultado na sua memoria: \n");
            scanf("%d", endereco);
            for(i=0;i<tam_memoria;i++){
                if(i == endereco){
                    printf(" \n Dado contigo no endereco %d : %s \n", i, vetor_memoria[i]);
                }
            }
        }else if(opcao == 3){
            printf("\n Voc� saiu \n");
            controle = 1;
        }else{
            printf("\n Op��o inv�lida. \n");
            printf("\n Voc� saiu \n");
            controle = 1;
        }

    }

}
