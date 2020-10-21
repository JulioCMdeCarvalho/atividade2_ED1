/*
6. Considere o programa a seguir em que os valores
lidos para as variáveis x e y são 3 e 4, respectivamente.
Execute o programa no Code Blocks, faça o rastreio
(utilizando debugger e breakpoints) e identifique a saída.
Apresente impressões de tela do rastreio e da saída.
*/

#include <stdio.h>
#include <stdlib.h>


void func(int *px, int *py)
{
    px = py;
    *py = (*py) * (*px);
    *px = *px + 2;
}
void main(void)
{
    int x, y;
    scanf("%d",&x); //3
    scanf("%d",&y); //4
    func(&x,&y);
    printf("x = %d, y = %d", x, y);
}
