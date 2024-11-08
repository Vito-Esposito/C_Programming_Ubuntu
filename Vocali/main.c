#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;
    int n, i, vocali=0;

    printf("Inserisci il numero di caratteri che vuoi inserire: \n");
    scanf("%d", &n);

    printf("Inserisci caratteri: \n");
    for(i=1; i<=n; i++){
        scanf(" %c", &car);
        getchar();

        switch(car){
        case 'a':
            vocali += 1;
            break;
        case 'e':
            vocali += 1;
            break;
        case 'i':
            vocali += 1;
            break;
        case 'o':
            vocali += 1;
            break;
        case 'u':
            vocali += 1;
            break;
        default:
            break;
        }
    }

    printf("\nCi sono %d vocali.", vocali);

    return 0;
}
