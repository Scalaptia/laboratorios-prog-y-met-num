// Fernando Haro Calvo

#include <stdio.h>

int buscarVector(int v[], int n) {
    int found = 0;
    for (int c = 1; c <= 15; c++) {
        if (v[c] == n) {
            found = 1;
            break;
        }
    }

    return found;
}

int main() {
    int v[15];
    int n;

    for(int c = 1; c <= 15; c++){
        printf("%d) Introduce un numero: ", c);
        scanf("%d", &v[c]);
    }

    printf("Que numero desea buscar?: ");
    scanf("%d", &n);

    int r = buscarVector(v, n);

    if (r) {
        printf("\nSi se encontro el numero %d en el vector :)", n);
    } else {
        printf("\nNo se encuentra el numero %d en el vector :(", n);
    }

    printf("\n\nFHC");
    return 0;
}