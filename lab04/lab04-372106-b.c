// Fernando Haro Calvo

#include <stdio.h>

#define PAGO_HORA_NORMAL 13.0

int main() {
    int horasTrabajadas, horasExtras, i = 1;
    float pagoNormal, pagoExtra1, pagoExtra2, pagoTotal;

    while (i <= 30) {
        printf("Horas trabajador %d: ", i);
        scanf("%d", &horasTrabajadas);

        if (horasTrabajadas <= 40.0) {
            pagoNormal = horasTrabajadas * PAGO_HORA_NORMAL;
            pagoExtra1 = 0;
            pagoExtra2 = 0;
        } else if (horasTrabajadas <= 48.0) {
            horasExtras = horasTrabajadas - 40.0;
            pagoNormal = 40.0 * PAGO_HORA_NORMAL;
            pagoExtra1 = horasExtras * PAGO_HORA_NORMAL * 2;
            pagoExtra2 = 0;
        } else {
            horasExtras = horasTrabajadas - 48.0;
            pagoNormal = 40.0 * PAGO_HORA_NORMAL;
            pagoExtra1 = (48.0 - 40.0) * PAGO_HORA_NORMAL * 2;
            pagoExtra2 = horasExtras * PAGO_HORA_NORMAL * 3;
        }

        pagoTotal = pagoNormal + pagoExtra1 + pagoExtra2;

        printf("Pago normal: %.2f\n", pagoNormal);
        printf("Pago extra (hasta 8 horas): %.2f\n", pagoExtra1);
        printf("Pago extra (mas de 8 horas): %.2f\n", pagoExtra2);
        printf("Pago total: %.2f\n\n", pagoTotal);
        i++;
    }

    printf("FHC");
    return 0;
}
