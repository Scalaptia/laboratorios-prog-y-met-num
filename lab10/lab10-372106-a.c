// Fernando Haro Calvo

#include <stdio.h>
#include <math.h>

float f(float x) {
    return ((x*x)) - (3*x) - 4;
}

float secante(float xi, float ximenos1, int iter, float errS) {
    float ximas1, fxi, fximenos1, erp;
    int i = 1;

    printf("\n i        xi           xi-1         f(xi)        f(xi-1)        xi+1       Erp");
    do{
        ximas1 = xi - ((f(xi) * (ximenos1 - xi)) / (f(ximenos1) - f(xi)));

        erp = fabs((ximas1 - xi)/(ximas1)) * 100;

        fxi = f(xi);
        fximenos1 = f(ximenos1);

        printf("\n%2d   %10.6f   %10.6f  %10.6f  %10.6f   %10.6f   %10.6f", i, xi, ximenos1, fxi, fximenos1, ximas1, erp);

        ximenos1 = xi;
        xi = ximas1;
        i++;
    } while((i <= iter) && (erp > errS));

    return ximas1;
}

int main() {
    int iter;
    float xi, ximenos1, errS, r;

    printf("Ingresa xi: ");
    scanf("%f", &xi);

    printf("Ingresa xi-1: ");
    scanf("%f", &ximenos1);

    printf("Ingresa el numero de iteraciones maximas: ");
    scanf("%d", &iter);

    printf("Ingresa el error minimo: ");
    scanf("%f", &errS);

    r = secante(xi, ximenos1, iter, errS);
    printf("\n\nLa raiz aproximada es: %.6f", r);

    printf("\n\nFHC");
    return 0;
}