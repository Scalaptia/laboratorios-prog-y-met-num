//Fernando Haro Calvo
#include <stdio.h>
#include <math.h>
float fyprima(int i) {
    return tabla[i][2];
}

void calcularYprima(int npuntos) {
    for(int i = 0; i < npuntos; i++) {
        tabla[i][2] = log(fy(i));
    }
}

void showTablaXYprima(int npuntos) {
    printf("xi\t\t f(xi)\t\t yprima\n");
    for(int i = 0; i < npuntos; i++) {
        printf("%f \t %f \t %f \n", fx(i), fy(i), fyprima(i));
    }
}

float sumatoriaX(int npuntos) {
    float sumx = 0;
    for(int i = 0; i < npuntos; i++) {
        sumx = sumx + fx(i);
    }

    return sumx;
}

float sumatoriaYprima(int npuntos) {
    float sumy = 0;
    for(int i = 0; i < npuntos; i++) {
        sumy = sumy + fyprima(i);
    }

    return sumy;
}

void regresion_exponencial(int npuntos) {
    printf("\nRegresion exponencial\n");
    calcularYprima(npuntos);
    showTablaXYprima(npuntos);
    printf("\nSumatoriaX = %f\n", sumatoriaX(npuntos));
    printf("SumatoriaYprima = %f\n", sumatoriaYprima(npuntos));
}
