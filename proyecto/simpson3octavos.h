// Fernando Haro Calvo
#include <stdio.h>

float simpson3octavos (float a, float b, int k) {
    float area;
    
    printf("\nMetodo de simpson 3/8\n");
    area = (b - a) * (fy(k) + (3 * fy(k+1)) + (3 * fy(k+2)) + fy(k+3)) / (8);
    printf("El area es %f \n", area);
    return area;
}