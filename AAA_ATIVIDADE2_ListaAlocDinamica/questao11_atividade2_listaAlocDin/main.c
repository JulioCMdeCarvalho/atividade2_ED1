/*
11. O código abaixo implementa parte de uma agenda de telefones bem simples.
Cada registro da agenda (contato) é composto apenas de nome e telefone.
O usuário poderá inserir, remover ou listar os contatos que serão mantidos
em um vetor de ponteiros de contatos, alocado dinamicamente. Pede-se:

a. Implementar a função inic_agenda() que inicializa a agenda,
alocando um espaço inicial em memória para BLOCK ponteiros
de contatos.

b. Implementar a função insere() que insere um contato
fornecido pelo usuário. Lembrar que tal função deve verificar se
o espaço de memória alocado para os ponteiros de contatos
será esgotado com a inserção do novo contato, devendo reajusta-lo,
se necessário, em incrementos de tamanho BLOCK.

c. Fazer o rastreio da função deleta(), mostrando o que
ocorre se o usuário optar por deletar o terceiro registro
de uma agenda com os cinco registros abaixo:

Maria   2222-2222
José    3333-3333
Danilo  4444-4444
Carla   5555-5555
João    6666-6666

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 3 //numero máximo de BLOCKs que podem ser alocados
#define BLOCK 5

/*
realloc ok

*/

typedef struct _contato{
    char nome[30];
    char tel[8];
}contato;

contato **agenda;
int num_contatos = 0;
int num_blocos = 0;
void inic_agenda(void);
void insere(void);
void deleta(void);
void lista(void);
int item_menu(void);

int main(void)
{
    int item;
    inic_agenda();
    for(;;)
    {
        item = item_menu();
        switch(item)
        {
        case 1:
            insere();
            break;
        case 2:
            deleta();
            break;
        case 3:
            lista();
            break;
        case 4:
            exit(0);
        }
    }
}

//letra a
//Inicializa a agenda
void inic_agenda(void)
{
    agenda = (contato **)malloc(BLOCK*sizeof(contato*));
}

//letra b
//Insere um novo contato
void insere(void)
{
    if((num_contatos != 0) &&((num_contatos%BLOCK) == 0))
    {
        if (num_blocos >= MAX)
        {
            printf("\n Agenda cheia \n");
            return;
        }
        agenda = (contato **)realloc(agenda,(num_blocos + 1) * BLOCK * (sizeof(contato*)));
        num_blocos++;
    }
    agenda[num_contatos]= (contato*) malloc(sizeof(contato));
    printf("\n Entre com o nome: ");
    gets(agenda[num_contatos]->nome);
    printf("Entre com o tel: ");
    gets(agenda[num_contatos]->tel);
    num_contatos++;
}


/* Retorna item de menu selecionado*/
int item_menu(void)
{
    char s[80];
    int c;
    printf("\n");
    printf("1. Inserir um contato\n");
    printf("2. Excluir um contato\n");
    printf("3. Listar contatos\n");
    printf("4. Sair\n");

    do
    {
        printf("\nEntre com sua escolha: ");
        gets(s);
        c = atoi(s);
    }
    while(c<0 || c>4);

    return c;
}

/*
letra c
Quando contato for excluido o ultimo contado da lista passa a ocupar seu lugar.
*/

/* Apaga um contato */
void deleta(void)
{
    int indice;
    char s[10];

    if (num_contatos ==0)
    {
        printf("\nAgenda vazia\n");
        return;
    }
    printf("\nEntre com o no. do contato: ");
    gets(s);
    indice = atoi(s);
    free(agenda[indice-1]);
    agenda[indice-1] = agenda[num_contatos -1];
    num_contatos--;

    if (num_contatos<(num_blocos * BLOCK))
    {
        agenda =(contato **)realloc(agenda,(num_blocos - 1)*sizeof(contato *));
    }
}

/* Mostra a lista de contatos na tela. */
void lista(void)
{
    int t;
    if (num_contatos ==0)
    {
        printf("\nAgenda vazia\n");
        return;
    }
    for(t=0; t<num_contatos; ++t)
    {
        printf("(%d) %s %s\n", t+1, agenda[t]->nome, agenda[t]->tel);
    }
    printf("\n\n");
}
