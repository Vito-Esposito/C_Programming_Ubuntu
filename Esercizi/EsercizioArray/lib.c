int somma_array(int a[], int n){
    int i, somma=0;

    for(i=0; i<n; i++){
        somma= a[i] + somma;
    }

    return somma;
}

void somma_array_p(int *a, int n, int *psomma){
    int i, somma=0;

    for(i=0; i<n; i++){
        somma= *(a+i) + somma;
    }

    *psomma= somma;
}
