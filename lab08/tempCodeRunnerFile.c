// Fernando Haro Calvo

#include <stdio.h>
#include <math.h>

float f(float x) {
    float y;
    y = (x*x) - (4*x) + 1;
    return y;
}

float biseccion(float xi, float xu, int iter, float errS) {
    float xr, xr_nuevo, xr_anterior, fxi, fxu, fxr, erp;
    int i = 1;
    
    xr_anterior = xu;

    printf("\n i        xi           xu           xr          f(xi)        f(xu)        f(xr)       erp");
    do{
        xr = (xi + xu)/2;
        xr_nuevo = xr;
        erp = fabs((xr_nuevo - xr_anterior)/(xr_nuevo)) * 100;

        fxi = f(xi);
        fxu = f(xu);
        fxr = f(xr);

        printf("\n%2d   %10.6f   %10.6f   %10.6f   %10.6f   %10.6f   %10.6f   %10.6f", i, xi, xu, xr, fxi, fxu, fxr, erp);

        xr_anterior = xr;

        if ((fxi*fxr) < 0) {
            xu = xr;
        } else {
            xi = xr;
        }

        i++;
    } while(((fxi*fxr) != 0) && (i <= iter) && (erp > errS));

    return xr;
}

int main() {
    int iter;
    float xi, xu, errS, r;

    printf("Ingresa xi: ");
    scanf("%f", &xi);

    printf("Ingresa xu: ");
    scanf("%f", &xu);

    printf("Ingresa el numero de iteraciones maximas: ");
    scanf("%d", &iter);

    printf("Ingresa el error minimo: ");
    scanf("%f", &errS);

    r = biseccion(xi, xu, iter, errS);
    printf("\n\nLa raiz aproximada es: %.6f", r);

    printf("\n\nFHC");
    return 0;
}