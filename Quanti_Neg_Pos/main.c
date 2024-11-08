#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, neg=0, pos=0, i;
    float num;

    printf("Quanti numeri vuoi controllare?\n");
    scanf("%d", &n);

    printf("Inserisci i %d numeri: \n", n);
    for(i=1; i<=n; i++){
        scanf("%f", &num);

        if(num < 0)
            neg += 1;
        else if(num > 0)
            pos += 1;
    }

    printf("\nCi sono %d numeri positivi e %d numeri negativi.\n", pos, neg);
}
