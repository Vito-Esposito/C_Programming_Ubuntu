#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod_segr=76, i=1, cod, fase_2=0;
    char cod_segr_c='e', carattere;

    printf("Hai 10 tentativi, indovina il codice segreto (intero tra 0 e 100): \n");
    do{
        printf("Tentativo %d: \n", i);
        scanf("%d", &cod);
        if(cod == cod_segr){
            printf("\nCodice segreto indovinato.\n");
            fase_2= 1;
            }
        else
            printf("\nRiprova.\n");

        i += 1;
    }while( cod != cod_segr);

    i=1;

    if(fase_2 == 1){
    printf("\nComplimenti! Hai superato la prima fase.\n");

    printf("\nHai 10 tentativi, indovina il codice segreto (vocale): \n");

    do{
        printf("Tentativo %d: \n", i);
        scanf(" %c", &carattere);

        if(carattere!='a' && carattere!='e' && carattere!='i' && carattere!='o' && carattere!='u'){
            printf("\nNon inserire consonanti.\n");
        }
        else if(carattere == cod_segr_c){
                printf("\nCodice segreto indovinato.\n");
                }
        else{
            printf("\nRiprova.\n");
            i += 1;
        }
            }while( carattere != cod_segr_c);
    }

    return 0;
}
