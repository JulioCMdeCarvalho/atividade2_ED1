/*

1. Considere o trecho de programa a seguir:

int i = 3, j = 5;
int *p, *q;
p = &i;
q = &j;

Determine o valor de cada expressão a seguir:
a) *p;
b) *q * i;
c) p == &i;
d) q < &j;
e) (*p > i) && !(j < *q);
f) !(*p == i) || (j < *q);
g) *p - *q;
h) i / *q;
i) *p * *q;
j) (float)*q / *p;
k) 5.0 * *q / *p - 2;
l) *q / *p * 5.0 - 2;
m) *q / (*p – 1.0);
n) 3 * - *p / *q + 7;
o) ++*q / *p;
p) *p / (float)++*q;
q) **&p + **&q;
r) ++*q / *p * ++j;
s) *q / *p * (float)++i;
t) 2 * *q / --*p * ++i;

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    int letra_a;
    letra_a = *p;

    printf("\n Saidas: \n");
    //1 para TRUE
    //o para FALSE
    //letra a
    printf("\n a: %d \n", letra_a);
    //letra b
    printf("\n b: %d \n", *q*i);
    //letra c
    int resul;
    resul = (p == &i); //var resul nao precisa
    printf("\n c: %d \n", resul);

    //letra d
    printf("\n d: %d \n", q < &j );
    //letra e
    printf("\n e: %d\n", (*p > i) && !(j < *q));
    //letra f
    printf("\n f: %d\n", !(*p == i) || (j < *q));
    //letra g
    printf("\n g: %d\n", *p - *q);
    //letra h
    printf("\n h: %d\n", i / *q);
    //letra i
    printf("\n i: %d\n", *p * *q);
    //letra j
    printf("\n j: %d\n", (float)*q / *p);
    //letra k
    printf("\n k: %d\n", 5.0 * *q / *p - 2);
    //letra l
    printf("\n l: %d\n", *q / *p * 5.0 - 2);

    //int resul3;
    //resul3 = *q / (*p – 1.0);
    //printf("\n m: %d\n", *q / (*p – 1.0));
    //printf("\n m: %d \n", resul3);

    //letra m
    printf("\n m: invalido \n");
    //letra n
    printf("\n n: %d\n", 3 * - *p / *q + 7);
    //letra o
    printf("\n o: %d\n", ++*q / *p);
    //letra p
    printf("\n p: %d\n", *p / (float)++*q);
    //letra q
    printf("\n q: %d\n", **&p + **&q);
    //letra r
    printf("\n r: %d\n", ++*q / *p * ++j);
    //letra s
    printf("\n s: %d\n", *q / *p * (float)++i);
    //letra t
    printf("\n t: %d\n", 2 * *q / --*p * ++i);

}
