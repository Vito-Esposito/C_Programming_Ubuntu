#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int x;

    printf("Per x pari che vanno da 0 a 20: \n");

    for(x=0; x<=20; x+=2){
    printf("Con x= %d, risultato: %.3f\n", x, formula(x));
    }
}
