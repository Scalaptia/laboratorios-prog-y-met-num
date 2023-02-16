//FERNANDO HARO CALVO
#include <stdio.h>

int main(){
    float precio, totalContado, totalCredito, mensualidad, IVA=0.15, INTERESES=0.20;

    printf("Cual es el costo de la computadora? ");
    scanf("%f", &precio);

    totalContado = precio + (precio*IVA);
    totalCredito = totalContado + (totalContado*INTERESES);
    mensualidad = totalCredito/12;

    printf("\nCosto de la computadora sin IVA: %.2f\nIVA: %.2f\nTotal de contado: %.2f\nTotal a credito: %.2f\nIntereses: %.2f\nMensualidad: %.2f\n", precio, IVA, totalContado, totalCredito, INTERESES, mensualidad);
    printf("\n\nFHC");
    return 0;
}