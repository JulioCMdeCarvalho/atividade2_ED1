/*
9. Considere um cadastro de produtos de um estoque,
com as seguintes informações para cada produto:

• Código de identificação do produto: representado por um valor inteiro
• Nome do produto: com ate 50 caracteres
• Quantidade disponível no estoque: representado por um número inteiro
• Preço de venda: representado por um valor real

a. Defina uma estrutura, denominada produto, que tenha
os campos apropriados para guardar as informações de um produto

b. Crie um conjunto de n produtos (n é um valor fornecido pelo usuário)
e peça ao usuário para entrar com as informações de cada produto

c. Encontre o produto com o maior preço de venda e imprima na tela

d. Encontre o produto com a maior quantidade disponível no estoque
e imprima na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct produto{
    int codigo_id_produto, qtd_disp_estoque;
    char nome[50];
    float preco_de_venda;
};

typedef struct produto PRODUTO;

int main()
{
    setlocale(LC_ALL,"");

    int n, i;
    int maiorPreco=0, maiorQTDestoque=0;

    PRODUTO **ponteiroProduto;

    printf("Digite a quantidade de produtos a serem cadastrados: \n");
    scanf("%d", &n);
    ponteiroProduto = malloc(n*sizeof(PRODUTO*));
    for(i=0;i<n;i++){
        ponteiroProduto[i] = malloc(sizeof(PRODUTO));
    }

    //CONSERTAR A DECLARACAO DAS ESTRUTURAS
    //esta invadindo memoria
    //struct produto conj_produtos[n];

    for(i=0;i<n;i++){
        printf("\n--------------------------------\n");
        printf("\n Por favor digite as informacoes do produto: \n");
        printf("\n Digite o codigo do produto: \n");
        scanf("%d", ponteiroProduto[i]->codigo_id_produto);
        printf("\n Digite o nome do produto: \n");
        fflush(stdin);
        fgets(ponteiroProduto[i]->nome, 50, stdin);
        printf("\n Digite a quantidade disponivel em estoque: \n");
        scanf("%d", ponteiroProduto[i]->qtd_disp_estoque);  //erro aqui
        printf("\n Digite o Preco em Reais: \n");
        scanf("%f", ponteiroProduto[i]->preco_de_venda);
        printf("\n--------------------------------\n");
    }

    //define qual produto com o maior preco
    for (i=0;i<n;i++) {
        if(ponteiroProduto[i]->preco_de_venda > maiorPreco) {
            maiorPreco = ponteiroProduto[i]->preco_de_venda;
        }
    }

    //produto com maior preco
    for (i=0;i<n;i++) {
        if(ponteiroProduto[i]->preco_de_venda == maiorPreco) {
            printf("\n Produto com maior preco: \n");
            printf("Codigo: %d \n", ponteiroProduto[i]->codigo_id_produto);
            printf("Nome: %s \n", ponteiroProduto[i]->nome);
            printf("Preco: %f \n", ponteiroProduto[i]->preco_de_venda);
            printf("Quantidade disponivel em estoque: %d \n", ponteiroProduto[i]->qtd_disp_estoque);
        }
    }

    //define qual produto com maior qtd de estoque
    for (i=0;i<n;i++) {
        if(ponteiroProduto[i]->qtd_disp_estoque > maiorQTDestoque) {
            maiorQTDestoque = ponteiroProduto[i]->qtd_disp_estoque;
        }
    }

    //produto com maior qtd de estoque
    for (i=0;i<n;i++) {
        if(ponteiroProduto[i]->qtd_disp_estoque == maiorQTDestoque) {
            printf("\n Produto com maior quantidade disponivel de estoque: \n");
            printf("Codigo: %d \n", ponteiroProduto[i]->codigo_id_produto);
            printf("Nome: %s \n", ponteiroProduto[i]->nome);
            printf("Preco: %f \n", ponteiroProduto[i]->preco_de_venda);
            printf("Quantidade disponivel em estoque: %d \n", ponteiroProduto[i]->qtd_disp_estoque);
        }
    }
}
