#include <stdio.h>
#define TOTAL 5

int sumar(int y[TOTAL]) {
    int s=0;
    int i;
    
    for(i=0; i<TOTAL; i++){
        s = s + y[i];
    }

    return s;
}

int main() {
    int calf[TOTAL];
    float prom, s;
    int indice;

    for(indice = 0; indice<TOTAL; indice++){
        printf("Calificacion indice %d: ", indice);
        scanf("%d", calf[indice]);
    }

    s = sumar(calf);
    prom = s/TOTAL;
    printf("El promedio es %d", prom);
    return 0;
}