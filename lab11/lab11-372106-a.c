// Fernando Haro Calvo

#include <stdio.h>
#include <math.h>
#define N 6 // numero de datos
#define GRADO N-1 // grado del polinomio

float a[N];

float tabla[N][2]= {
    {-2, -18},
    {-1, -5},
    {0, -2},
    {2, -2},
    {3, 7},
    {6, 142},
};

float dividida(int i, int f) {
    int longitud = (i-f)+1;
    float r;

    if (longitud == 2) {
        r = (tabla[i][1] - tabla[i-1][1]) / (tabla[i][0] - tabla[i-1][0]);
    } else {
        r = (dividida(i, f+1) - dividida(i-1, f))/ (tabla[i][0] - tabla[f][0]);
    }

    return r;
}

void obtener_coeficientes() {
    a[0] = tabla[0][1];

    for (int i=1; i <= GRADO; i++) {
        a[i] = dividida(i, 0);
    }
}

void mostrar_polinomioNewton() {
    printf("f(x)= %.0f \n", a[0]);

    for (int i=1; i<=GRADO; i++) {
        printf("\n + %.0f ", a[i]);

        for(int k=0; k<i; k++) {
            printf("(x - (%.0f))", tabla[k][0]);
        }
    }
}

int main() {
    obtener_coeficientes();
    mostrar_polinomioNewton();

    printf("\n\n FHC");
    return 0;
}
