/*
5. Execute o programa abaixo no Code Blocks, faça o rastreio
(utilizando debugger e breakpoints) e identifique a saída.
Apresente impressões de tela do rastreio e da saída.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b,*p1, *p2;
    a = 4;
    b = 3;
    p1 = &a;
    p2 = p1;
    *p2 = *p1 + 3;
    b = b * (*p1);
    (*p2)++;
    p1 = &b;
    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", a, b);
}
