// Fernando Haro Calvo
#include <stdio.h>
#include <math.h>
#include "./tabla-datos.h"
#include "./reg-exponencial.h"

int showMenu() {
    int opcion = 0;
    do {
        printf("\n");
        printf("1) Regresion exponencial \n");
        printf("2) Metodo del Trapecio \n");
        printf("3) Simpson \n");
        printf("\nSeleccione opcion (1, 2, 3): ");
        scanf("%d", &opcion);
    } while(opcion < 1 || opcion > 3);

    return opcion;
}

int tipoTabla() {
    int tipo = 0;
    while(tipo != 1 && tipo !=2) {
        printf("\nDefina como se va a crear la tabla de datos\n");
        printf("1) Mediante una funcion f(x) \n");
        printf("2) Desde el teclado xi, yi \n");
        printf("\nSeleccione 1 o 2: ");
        scanf("%d", &tipo);
    }

    return tipo;
}

int main() {
    float x0, xn;
    int npuntos, opcion;
    opcion = showMenu();
    printf("\nValor inicial X0 = ");
    scanf("%f", &x0);
    printf("\nValor final Xn = ");
    scanf("%f", &xn);
    printf("\nNumero de puntos = ");
    scanf("%d", &npuntos);

    if (tipoTabla() == 1) {
        crearTabla(x0, xn, npuntos);
        showTabla(npuntos);
    } else {
        capturarTabla(npuntos);
        showTabla(npuntos);
    }

    regresion_exponencial(npuntos);
    printf("\nFHC");
    return 0;
}
