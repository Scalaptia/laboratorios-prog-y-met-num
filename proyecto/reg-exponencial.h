// Fernando Haro Calvo
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

float promedioX(int npuntos) {
    float promX = 0;
    promX = sumatoriaX(npuntos) / npuntos;
    return promX;
}

float promedioYprima(int npuntos) {
    float promYprima = 0;
    promYprima = sumatoriaYprima(npuntos) / npuntos;
    return promYprima;
}

float sumatoriaXcuadrado(int npuntos) {
    float sumx2 = 0;
    for(int i = 0; i < npuntos; i++) {
        sumx2 = sumx2 + (fx(i) * fx(i));
    }
    return sumx2;
}
 
float sumatoriaXYprima(int npuntos) {
    float sumXYprima = 0;
    for(int i = 0; i < npuntos; i++) {
        sumXYprima = sumXYprima + (fx(i) * fyprima(i));
    }
    return sumXYprima;
}

float obtenerB(int npuntos) {
    float b, sumXYprima, sumX, sumYprima, sumX2;
    sumXYprima = sumatoriaXYprima(npuntos);
    sumX = sumatoriaX(npuntos);
    sumYprima = sumatoriaYprima(npuntos);
    sumX2 = sumatoriaXcuadrado(npuntos);
    b = ((npuntos * sumXYprima) - (sumX * sumYprima)) / ((npuntos * sumX2) - (sumX * sumX));
    return b;
}

float obtenerAprima(int npuntos) {
    float b, aprima, promX, promYprima;
    b = obtenerB(npuntos);
    promX = promedioX(npuntos);
    promYprima = promedioYprima(npuntos);
    aprima = promYprima - (b * promX);
    
    return aprima;
}

float obtenerA(int npuntos) {
    float a, aprima;
    double euler = exp(1.0);
    aprima = obtenerAprima(npuntos);
    a = pow(euler, aprima);
    
    return a;
}

void mostrarEcuacion(int npuntos) {
    printf("\nSumX= %f \n", sumatoriaX(npuntos));
    printf("SumY'= %f \n", sumatoriaYprima(npuntos));
    printf("SumXY'= %f \n", sumatoriaXYprima(npuntos));
    printf("SumX^2= %f \n", sumatoriaXcuadrado(npuntos));
    printf("PromX= %f \n", promedioX(npuntos));
    printf("PromY'= %f \n", promedioYprima(npuntos));
    printf("B= %f \n", obtenerB(npuntos));
    printf("A'= %f \n", obtenerAprima(npuntos));
    printf("\nEcuacion: f(x)= %fe^%fx \n", obtenerA(npuntos), obtenerB(npuntos));
}

void regresion_exponencial(int npuntos) {
    printf("\nRegresion exponencial\n");
    calcularYprima(npuntos);
    showTablaXYprima(npuntos);
    mostrarEcuacion(npuntos);
}
