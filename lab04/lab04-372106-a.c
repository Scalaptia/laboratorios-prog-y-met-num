#include <stdio.h>

int main() {
    float monto = 1, descuento, total;

    while(monto != 0) {
        descuento = 0;
        printf("Ingrese el monto de venta (ingrese 0 para salir): ");
        scanf("%f", &monto);

        if (monto < 500) {
            descuento = 0;
        } else if (monto <= 1000) {
            descuento = monto * 0.05;
        } else if (monto <= 7000) {
            descuento = monto * 0.11;
        } else if (monto <= 15000) {
            descuento = monto * 0.18;
        } else {
            descuento = monto * 0.25;
        }

        total = monto - descuento;
        printf("Descuento: %.2f\n", descuento);
        printf("Total a pagar: %.2f\n", total);
    }

    return 0;
}
