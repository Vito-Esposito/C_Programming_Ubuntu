#include <stdio.h>
#include <stdlib.h>

int somma(int[], int);
void visualizza(int[], int);
int somma_parziale(int[], int, int);

int main()
{
    int n, i;
    printf("Inserisci size dell'array: \n");
    scanf("%d", &n);

    int array[n];

    for(i=0; i<n; i++){
        printf("Elemento array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nLa somma dell'array \con elementi:\n");

    visualizza(array, n);

    printf("\nE' la somma dei suoi elementi e' %d.\n", somma(array,n));

    int iniz, fin;
    printf("\nInserisci i due indici per fare la somma parziale: \n");
    scanf("%d%d", &iniz, &fin);

    printf("\nE' la somma  parziale dei suoi elementi e' %d.\n", somma_parziale(array,iniz,fin));

    return 0;
}

int somma(int array[], int n){
    int i, somma=0;

    for(i=0; i<n; i++){
        somma += array[i];
    }
    return somma;
}

void visualizza(int array[], int n){
    int i;

    for(i=0; i<n; i++){
        printf("Elemento array[%d]: %d\n", i, array[i]);
    }
}

int somma_parziale(int a[], int iniz, int fin){
    int somma=0;

    for(iniz; iniz<=fin; iniz++){
        somma += a[iniz];
    }
    return somma;
}
