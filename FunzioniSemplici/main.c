#include <stdio.h>
#include <stdlib.h>

int maxI(int a,int b);
float maxF(float a, float b);
char maxC(char a, char b);
int minI(int a, int b);
float minF(float a, float b);
char minC(char a, char b);
int e_pari(int n);
int e_dispari(int n);

int main()
{
    int a, b, g, key;
    float c, d;
    char e, f;

    printf("Inserisci due interi: \n");
    scanf("%d%d", &a, &b);
    printf("Il massimo e' %d e il minimo e' %d. \n", maxI(a,b), minI(a,b));

    printf("\nInserisci due reali: \n");
    scanf("%f%f", &c, &d);
    printf("Il massimo e' %.2f e il minimo e' %.2f. \n", maxF(c,d), minF(c,d));

    printf("\nInserisci due caratteri: \n");
    scanf("%c", &e);
    getchar();
    scanf("%c", &f);
    getchar();
    printf("Il massimo e' %c e il minimo e' %c. \n", maxC(e,f), minC(e,f));

    printf("\nInserisci n: \n");
    scanf("%d", &g);
    key= e_pari(g);
    key= e_dispari(g);
    if(key == 1)
        printf("Pari.\n");
    else if(key == 0)
        printf("Dispari.\n");

    return 0;
}

int maxI(int a, int b){

    if(a > b)
        return a;
    else if(a < b)
        return b;
}

float maxF(float a, float b){

    if(a > b)
        return a;
    else if(a < b)
        return b;
}

char maxC(char a, char b){

    if(a > b)
        return a;
    else if(a < b)
        return b;
}

int minI(int a, int b){

    if(a < b)
        return a;
    else if(a > b)
        return b;
}

float minF(float a, float b){

    if(a < b)
        return a;
    else if(a > b)
        return b;
}

char minC(char a, char b){

    if(a < b)
        return a;
    else if(a > b)
        return b;
}

int e_pari(int n){
    if(n%2 == 0)
        return 1;
    else
        return 0;
}

int e_dispari(int n){
    if(n%2 != 0)
        return 0;
    else
        return 1;
}
