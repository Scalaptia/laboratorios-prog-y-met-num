// Fernando Haro Calvo
#include <stdio.h>

void simpson3octavos (float a, float b, int npuntos) {
    float area;
    int n = npuntos - 1;
    
    printf("\nMetodo de simpson 3/8\n");
    area = (b - a) * (fy(0) + (3 * fy(1)) + (3 * fy(2)) + fy(3)) / (8);
    printf("El area es %f \n", area);
}