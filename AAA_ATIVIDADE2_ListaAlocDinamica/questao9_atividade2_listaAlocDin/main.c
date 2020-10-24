/*
9. Considere um cadastro de produtos de um estoque,
com as seguintes informa��es para cada produto:
� C�digo de identifica��o do produto: representado por um valor inteiro
� Nome do produto: com ate 50 caracteres
� Quantidade dispon�vel no estoque: representado por um n�mero inteiro
� Pre�o de venda: representado por um valor real

a. Defina uma estrutura, denominada produto, que tenha
os campos apropriados para guardar as informa��es de um produto

b. Crie um conjunto de n produtos (n � um valor fornecido pelo usu�rio)
e pe�a ao usu�rio para entrar com as informa��es de cada produto

c. Encontre o produto com o maior pre�o de venda e imprima na tela

d. Encontre o produto com a maior quantidade dispon�vel no estoque
e imprima na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
a-ok
b-
c-
d-

*/

typedef struct produto{
    int codigo_id_produto, qtd_disp_estoque;
    char nome[50];
    float preco_de_venda;
}Produto;



int main()
{
    int n, i, maiorQTDestoque = 0;
    float maiorPreco=0.0;

    printf("Digite a quantidade de produtos a serem cadastrados: \n");
    scanf("%d", &n);

    //Produto prod[n]; //vetor prod de n posicoes do tipo Produto

    Produto *p = malloc(n*sizeof(Produto));

    //int qtd;
    //scanf("%d", &qtd);
    // CARRO *carros = malloc(qtd * sizeof(struct CARRO));
    //free(carros); //s� para usar a vari�vel, neste caso n�o precisa

    for(i=0;i<n;i++){
        printf("\n Entre com o Codigo do Produto: ");
        //scanf("%d", &p->codigo_id_produto);
        scanf("%d", &p[i].codigo_id_produto);
        printf("\n Entre com a quantidade em Estoque do Produto: ");
        //scanf("%d", &p->qtd_disp_estoque);
        scanf("%d", &p[i].qtd_disp_estoque);
        printf("\n Entre com o nome do produto: ");
        //scanf("%s", p->nome);
        scanf("%s", p[i].nome);
        printf("\n Pre�o: ");
        //scanf("%f", &p->preco_de_venda);
        scanf("%f", &p[i].preco_de_venda);
    }

    //letra c
    //define qual produto com o maior preco
    for (i=0;i<n;i++) {
        if(p[i].preco_de_venda > maiorPreco) {
            maiorPreco = p[i].preco_de_venda;
        }
    }
    //produto com maior preco
    for (i=0;i<n;i++) {
        if(p[i].preco_de_venda == maiorPreco) {
            printf("\n == Produto com maior preco == \n");
            printf("Codigo: %d \n", p[i].codigo_id_produto);
            printf("Nome: %s \n", p[i].nome);
            printf("Preco: %.2f \n", p[i].preco_de_venda);
            printf("Quantidade disponivel em estoque: %d \n", p[i].qtd_disp_estoque);
        }
    }

    //letra d
    //define qual produto com o maior quantidade disponivel em estoque
    for (i=0;i<n;i++) {
        if(p[i].qtd_disp_estoque > maiorPreco) {
            maiorQTDestoque = p[i].qtd_disp_estoque;
        }
    }
    //produto com maior preco
    for (i=0;i<n;i++) {
        if(p[i].qtd_disp_estoque == maiorQTDestoque) {
            printf("\n == Produto com maior quantidade disponivel em estoque == \n");
            printf("Codigo: %d \n", p[i].codigo_id_produto);
            printf("Nome: %s \n", p[i].nome);
            printf("Preco: %.2f \n", p[i].preco_de_venda);
            printf("Quantidade disponivel em estoque: %d \n", p[i].qtd_disp_estoque);
        }
    }

    printf("\n ====== DADOS DIGITADOS ====== \n");
    for(i=0;i<n;i++){

       // printf("\n Produto %d:", i);
       // printf("\n Codigo: %d", p->codigo_id_produto);
       // printf("\n Quantidade em estoque: %d", p->qtd_disp_estoque);
       // printf("\n Nome: %s", p->nome);
       // printf("\n Pre�o: %.2f", p->preco_de_venda);
        printf("\n ================");
        printf("\n Produto %d:", i);
        printf("\n Codigo: %d", p[i].codigo_id_produto);
        printf("\n Quantidade em estoque: %d", p[i].qtd_disp_estoque);
        printf("\n Nome: %s", p[i].nome);
        printf("\n Pre�o: %.2f", p[i].preco_de_venda);
        printf("\n ================");
    }

}

/*
funciona 02
//cadastra os produtos
//string nao aceita espaco nao sei porque


*/


/*
//funciona 01
//1 elemento para a estrutura


int main()
{
    int n, i;
    int maiorPreco=0, maiorQTDestoque=0;

    Produto *p;

    p = (Produto*)malloc(sizeof(Produto));

    printf("\n Cadastro de Produtos \n");
    printf("\n Entre com o Codigo do Produto: ");
    scanf("%d", &p->codigo_id_produto);

    printf("\n Entre com a quantidade em Estoque do Produto: ");
    scanf("%d", &p->qtd_disp_estoque);

    printf("\n Entre com o nome do produto: ");
    scanf("%s", p->nome);

    printf("\n Pre�o: ");
    scanf("%f", &p->preco_de_venda);

    printf("\n ====== DADOS DIGITADOS ====== \n");
    printf("\n Codigo: %d", p->codigo_id_produto);
    printf("\n Quantidade em estoque: %d", p->qtd_disp_estoque);
    printf("\n Nome: %s", p->nome);
    printf("\n Pre�o: %.2f", p->preco_de_venda);
}

*/

/*
//antigo


    PRODUTO *ponteiroProduto;

    printf("Digite a quantidade de produtos a serem cadastrados: \n");
    scanf("%d", &n);

    //ponteiroProduto = malloc(n*sizeof(PRODUTO*));

    ponteiroProduto = (PRODUTO*)malloc(n*sizeof(PRODUTO));

    //for(i=0;i<n;i++){
      //  ponteiroProduto[i] = malloc(sizeof(PRODUTO));
    //}

    //CONSERTAR A DECLARACAO DAS ESTRUTURAS
    //esta invadindo memoria
    //struct produto conj_produtos[n];

    for(i=0;i<n;i++){
        printf("\n--------------------------------\n");
        printf("\n Por favor digite as informacoes do produto: \n");
        printf("\n Digite o codigo do produto: \n");
        scanf("%d", ponteiroProduto[i]->codigo_id_produto);
        printf("\n Digite o nome do produto: \n");
        //fflush(stdin);
        //fgets(ponteiroProduto[i]->nome, 50, stdin);
        scanf("%s", ponteiroProduto[i]->nome)
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



*/

