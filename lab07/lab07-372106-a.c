// Fernando Haro Calvo

#include <stdio.h>

int tabla[9][2];

void setValorX() {
    int x = -4;
    for (int i = 0; i < 9; i++) {

        tabla[i][0] = x;
        x = x + 1;
    }
}

int f(int x) {
    int y =  (x*x) - (4*x) + 1;
    return y;
}

void setValorY() {
    int x = 0, y = 0;
    for (int i = 0 ; i < 9 ; i++) {
        x = tabla[i][0];
        y = f(x);
        tabla[i][1] = y;
    }
}

void mostrarMatriz() {
    printf("f(x)= x^2 - 4x + 1\n\n");
    for (int i = 0; i < 9; i++) {
        printf("%3d | %3d\n", tabla[i][0], tabla[i][1]);
    }
}



int main() {
    setValorX();
    setValorY();
    mostrarMatriz();
    printf("\n\nFHC");
    return 0;
}