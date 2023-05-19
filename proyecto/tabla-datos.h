// Fernando Haro Calvo
#include <stdio.h>
#define MAX 20

float tabla[MAX][3];
float f(float x) {
    float y= x*x+3;
    return y;
}

float fx(int i) {
    return tabla[i][0];
}

float fy(int i) {
    return tabla[i][1];
}

void crearTabla(float x_ini, float x_fin,int npuntos) {
    float h,x=x_ini;
    int nsegmentos= npuntos-1;
    if(npuntos >= 2) {
        tabla[0][0] = x_ini;
        tabla[0][1] = f(x_ini);
        tabla[npuntos-1][0] = x_fin;
        tabla[npuntos-1][1] = f(x_fin);
        h = (x_fin - x_ini) / nsegmentos;
        for(int i = 1; i < npuntos - 1; i++) {
            x = x + h;
            tabla[i][0]= x;
            tabla[i][1]= f(x);
        }
    }
}

void capturarTabla(int npuntos) {
    for(int i = 0; i < npuntos; i++) {
        printf("x%d = ", i);
        scanf("%f", &tabla[i][0]);
        printf("y%d = ",i);
        scanf("%f", &tabla[i][1]);
    }
}

void showTabla(int npuntos) {
    printf("x\t\t f(x) \n");

    for(int i = 0; i < npuntos; i++) {
        printf("%f \t %f \n",fx(i),fy(i) );    
    }
}
