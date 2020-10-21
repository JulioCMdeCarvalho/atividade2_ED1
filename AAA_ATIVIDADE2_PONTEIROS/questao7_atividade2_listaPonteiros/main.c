/*
7. Considere um cadastro de alunos matriculados em uma disciplina,
com as seguintes informações para cada aluno:
• Nome do aluno: com até 80 caracteres
• Número de matrícula: representado por um valor inteiro
• Notas obtidas em três provas, P1, P2, P3: representadas por valores reais

(a) Defina uma estrutura em C, denominada aluno, que tenha os campos apropriados para
guardar as informações de um aluno, conforme descrito acima.

(b) Escreva uma função que receba como parâmetro um ponteiro para
uma estrutura do tipo definido no item anterior e imprima na tela
do computador uma linha com o nome do aluno e outra linha com a
média obtida nas três provas.
Essa função deve seguir o seguinte protótipo:
void imprime (struct aluno* a);

(c) Escreva um programa para testar a função.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//a
typedef struct aluno{
    char nome[80];
    int matricula;
    float nota_p1, nota_p2, nota_p3;
}Aluno;
//b
void imprime (struct aluno* a){
    printf("\n Nome do aluno(a): %s \n", a->nome);
    float media;
    media = ((a->nota_p1) + (a->nota_p2) + (a->nota_p3))/3;
    printf("\n Media obtida nas 3 provas: %.2f \n", media);
}
//c
int main()
{
    Aluno aluno1;
    Aluno *a = &aluno1;
    a->matricula = 5656;
    strcpy(a->nome, "JOAO DAS DORES");
    a->nota_p1 = 9;
    a->nota_p2 = 3;
    a->nota_p3 = 5;
    imprime(a);
}
