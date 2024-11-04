#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(){
    int a[]={2,15,1,-1,22,0,-2};
    int somma=0, i;

    for(i=0; i<7; i++){
        somma= a[i] + somma;
    }

    printf("La somma degli elementi dell'array e'= %d.\n", somma);

    // Usando una funzione
    somma= somma_array(a, 7);
    printf("\nLa somma con la funzione degli elementi dell'array e'= %d.\n", somma);

    // Usando una procedure, con array in input come puntatore e somma puntata

    somma=0;
    int *p_a= a;
    int *p_s= &somma;
    somma_array_p(p_a, 7, p_s);
    printf("\nLa somma con la procedure degli elementi dell'array e'= %d.\n", *p_s);


    return 0;
}
