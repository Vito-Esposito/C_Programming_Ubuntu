#include <stdio.h>
#include <stdlib.h>

int elev_cubo(int n);
void elev_cubo_rif(int*);

int main()
{
    int n, cubo;

    printf("Inserisci n: \n");
    scanf("%d", &n);
    cubo= elev_cubo(n);
    printf("Il numero %d elevato al cubo e' %d.\n", n, cubo);

    elev_cubo_rif(&n);
    printf("Il numero elevato al cubo e' %d, per riferimento.\n", n);

}

int elev_cubo(int n){
    return n*n*n;
}

void elev_cubo_rif(int *n){
    *n= (*n)*(*n)*(*n);
}
