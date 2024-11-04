#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int y, x;
    float *sx = malloc(sizeof(float));
    float *sy = malloc(sizeof(float));

    printf("inserisci x e y: \n");
    scanf("%d%d", &x, &y);

    funzioni_x_y(x, y, sx, sy);
    printf("Risultati x= %.3f e y= %.3f.\n", *sx, *sy);

    free(sx);
    free(sy);

    return 0;

}
