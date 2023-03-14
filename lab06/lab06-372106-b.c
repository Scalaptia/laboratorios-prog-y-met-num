// Fernando Haro Calvo

#include <stdio.h>

int main() {
    int mayor, c=0, n;

    printf("1) Introduce un numero: ");
    scanf("%d", &n);
    mayor = n;

    for (c = 2; c<=10; c++){
        printf("%d) Introduce un numero: ", c);
        scanf("%d", &n);

        if (n > mayor) {
            mayor = n;
        }
    }

    printf("\nEl mayor es: %d", mayor);
    printf("\n\nFHC");
    return 0;
}