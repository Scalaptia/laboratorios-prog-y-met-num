// Fernando Haro Calvo

#include <stdio.h>
int v[20];

void mostrarVector() {
    for (int c = 0; c < 20; c++) {
        printf("%d, ", v[c]);
    }   
}

float promedioVector() {
    float promedio = 0;
    int suma = 0;

    for (int c = 0; c < 20; c++) {
        suma = suma + v[c];
    }

    promedio = suma/20;
    return promedio;
}

int main() {

    for (int c = 0; c<20; c++) {
        printf("Introduce un numero entero: ");
        scanf("%d", &v[c]);
    }

    mostrarVector();
    float p = promedioVector();
    printf("\nEl promedio del vector es: %.2f", p);
    printf("\n\nFHC");
    return 0;
}