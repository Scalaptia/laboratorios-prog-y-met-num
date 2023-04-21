// Fernando Haro Calvo

#include <stdio.h>
#include <math.h>

float f(float x) {
    return (2 * (x*x)) - 3;
}

float fprima(float x) {
    return 4*x;
}

float newton_raphson(float xi, int iter, float errS) {
    float ximas1, fxi, fprimaxi, erp;
    int i = 1;
    

    printf("\n i        xi           f(xi)        f'(xi)        xi+1       Erp");
    do{
        ximas1 = xi - (f(xi) / fprima(xi));

        erp = fabs((ximas1 - xi)/(ximas1)) * 100;

        fxi = f(xi);
        fprimaxi = fprima(xi);

        printf("\n%2d   %10.6f   %10.6f   %10.6f   %10.6f   %10.6f", i, xi, fxi, fprimaxi, ximas1, erp);

        xi = ximas1;
        i++;
    } while((i <= iter) && (erp > errS));

    return ximas1;
}

int main() {
    int iter;
    float xi, errS, r;

    printf("Ingresa xi: ");
    scanf("%f", &xi);

    printf("Ingresa el numero de iteraciones maximas: ");
    scanf("%d", &iter);

    printf("Ingresa el error minimo: ");
    scanf("%f", &errS);

    r = newton_raphson(xi, iter, errS);
    printf("\n\nLa raiz aproximada es: %.6f", r);

    printf("\n\nFHC");
    return 0;
}