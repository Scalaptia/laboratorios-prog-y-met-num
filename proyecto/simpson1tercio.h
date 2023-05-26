// Fernando Haro Calvo
#include <stdio.h>

float sumatoriaIpar (int n) {
    float suma = 0;
    for (int j = 2; j <= n-2; j += 2) {
        suma = suma + fy(j);
    }

    printf("Sumatoria par: %f\n", suma);
    return suma;
}

float sumatoriaIimpar (int n) {
    float suma = 0;
    for (int i = 1; i <= n-1; i += 2) {
        suma = suma + fy(i);
    }

    printf("Sumatoria impar: %f\n", suma);
    return suma;
}

void simpson1tercio (float a, float b, int npuntos) {
    float area;
    int n = npuntos - 1;
    printf("\nMetodo de simpson 1/3\n");
    printf("\nf(x0) = %f y f(xn) = %f \n", fy(0), fy(n));
    area = (b - a) * (fy(0) + (4 * sumatoriaIimpar(n)) + (2 * sumatoriaIpar(n)) + fy(n)) / (3 * n);
    printf("El area es %f \n", area);
}