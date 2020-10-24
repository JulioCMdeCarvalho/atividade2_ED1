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

//letra a
typedef struct produto{
    int codigo_id_produto, qtd_disp_estoque;
    char nome[50];
    float preco_de_venda;
}Produto;

int main()
{
    int n, i, maiorQTDestoque = 0;
    float maiorPreco=0.0;

    //letra b
    printf("Digite a quantidade de produtos a serem cadastrados: \n");
    scanf("%d", &n);

    Produto *p = malloc(n*sizeof(Produto));

    for(i=0;i<n;i++){
        printf("\n Entre com o Codigo do Produto: ");
        scanf("%d", &p[i].codigo_id_produto);
        printf("\n Entre com a quantidade em Estoque do Produto: ");
        scanf("%d", &p[i].qtd_disp_estoque);
        printf("\n Entre com o nome do produto: ");
        scanf("%s", p[i].nome);
        printf("\n Preço: ");
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
        printf("\n ================");
        printf("\n Produto %d:", i);
        printf("\n Codigo: %d", p[i].codigo_id_produto);
        printf("\n Quantidade em estoque: %d", p[i].qtd_disp_estoque);
        printf("\n Nome: %s", p[i].nome);
        printf("\n Preço: %.2f", p[i].preco_de_venda);
        printf("\n ================");
    }

}
