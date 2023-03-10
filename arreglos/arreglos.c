#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantidad;
    printf("Ingresa la cantidad de numeros: ");
    scanf("%d", &cantidad);

    int numeros[cantidad];

    for(int i=0; i<cantidad; i++){
        numeros[i] = rand();
    }

    for(int i=0; i<cantidad; i++){
        if(numeros[i] > numeros[i+1]){
            int temp = numeros[i+1];
            numeros[i+1] = numeros[i];
            numeros[i] = temp;
        }
    }

    for(int i=0; i<cantidad; i++){
        printf("%d \n", numeros[i]);
    }

    return 0;
}