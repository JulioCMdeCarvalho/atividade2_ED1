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

    printf("\n Saidas: \n");
    //1 para TRUE
    //o para FALSE

    //letra a
    printf("\n a: %d \n", *p);

    //letra b
    printf("\n b: %d \n", *q*i);

    //letra c
    printf("\n c1: %d \n", (p == &i));

    //letra d
    printf("\n d1: %d \n", q < &j );

    //letra e
    printf("\n e1: %d\n", (*p > i) && !(j < *q) );

    //letra f
    printf("\n f1: %d \n", !(*p == i) || (j < *q));

    //letra g
    printf("\n g0: %d \n", *p - *q);

    //letra h
    printf("\n h1: %d\n", i / *q);

    //letra i
    printf("\n i: %d\n", *p * *q);

    //letra j
    printf("\n j: %d\n", (float)*q / *p);

    //letra k
    printf("\n k: %d\n", 5.0 * *q / *p - 2);

    //letra l
    printf("\n l: %.2f \n", *q / *p * 5.0 - 2);

    //letra m
    //printf("\n m: %d\n", *q / (*p – 1.0));
    printf("\n m: invalido \n");

    //letra n
    printf("\n n1: %d\n", 3 * - *p / *q + 7);

    //letra o
    printf("\n o2: %d\n", ++*q / *p);

    //letra p
    printf("\n p1: %d\n", *p / (float)++*q);

    //letra q
    printf("\n q: %d \n", **&p + **&q);

    //letra r
    printf("\n r: %d \n", ++*q / *p * ++j);

    //letra s
    printf("\n s: %d \n", *q / *p * (float)++i);

    //letra t
    printf("\n t: %d \n", 2 * *q / --*p * ++i);

}
