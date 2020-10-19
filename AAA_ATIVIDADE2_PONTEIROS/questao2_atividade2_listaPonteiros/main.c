/*
2. Considere as declarações/atribuições a seguir:
int x = 10, *px = &x, **ppx = &px, *ptemp, temp;
float y = 3.2, *py = &y, **ppy = &py, *pftemp, ftemp;
Considere ainda que as variáveis ocupam os seguintes endereços de memória:

x - 28FF1C
y - 28FF10
px - 28FF18
py - 28FF0C
ppx - 22FF14
ppy - 28FF08

Determine o valor de cada item a seguir:
a) x;
b) y;
c) px;
d) &y;
e) &px;
f) *py;
g) *ppx;
h) py;
i) &x;
j) pftemp = py++;
k) *px--;
l) **ppy;
m) &ppy;
n) *&px;
o) temp = **ppx++;
p) ++ppx;
q) &ppx;
r) --py;
s) --**ppx;
t) ++*py;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //a terminar
    //acertar os enderecos de memoria com os da questao
    int x = 10, *px = &x, **ppx = &px, *ptemp, temp;
    float y = 3.2, *py = &y, **ppy = &py, *pftemp, ftemp;

    //a
    printf("\n letra a: %d \n", x);

    //b
    printf("\n letra b: %.2f \n", y);

    //c
    /*
    De acordo com o enunciado:
    */
    char px2[20] = "28FF1C";
    printf("\n letra c: %s \n", px2);

    //d
    /*
    De acordo com o enunciado:
    */
    char aux1[20] = "28FF10";
    printf("\n letra d: %s \n", aux1);

    //e
    /*
    De acordo com o enunciado:
    */
    char aux2[20] = "28FF18";
    printf("\n letra e: %s \n", aux2);

    //f
    printf("\n letra f: %.2f \n", *py);

    //g
    printf("\n letra g: %d \n", **ppx);


    //h
    printf("\n letra h: %d \n", py);

    //i
    /*
    De acordo com o enunciado:
    */
    char aux3[20] = "28FF1C";
    printf("\n letra i: %d \n", aux3);

    //j
    pftemp = py++;
    printf("\n letra j: %d \n", pftemp);

    //k
    printf("\n letra k: %d \n", *px--);

    //l
    printf("\n letra l: %d \n", **ppy);

    //m
    printf("\n letra m: %d \n", &ppy);

    //n
    printf("\n letra n: %d \n", *&px);

    //o
    temp = **ppx++;
    printf("\n letra o: %d \n", temp);

    //p
    printf("\n letra p: %d \n", ++ppx);

    //q
    printf("\n letra q: %d \n", &ppx);

    //r
    printf("\n letra r: %d \n", --py);

    //s
    printf("\n letra s: %d \n", --**ppx);

    //t
    printf("\n letra t: %d \n", ++*py);

}
