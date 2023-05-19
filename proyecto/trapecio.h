// Fernando Haro Calvo
#include <stdio.h>

float sumatoriaT (int n) {
    float suma = 0;
    for(int i = 1; i <= n-1; i++) {
        suma = suma + fy(i);
    }
    
    printf("Sumatoria: %f\n", suma);
    return suma;
}

void trapecio (float a, float b, int npuntos) {
    float area;
    int n = npuntos - 1;
    printf("f(x0) = %f y f(xn) = %f \n", fy(0), fy(n));
    area = (b - a) * (fy(0) + (2 * sumatoriaT(n)) + fy(n)) / (2 * n);
    printf("\nMetodo de Trapecio\n");
    printf("El area es %f \n", area);
}