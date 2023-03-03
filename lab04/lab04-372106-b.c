#include <stdio.h>

#define PAGO_HORA_NORMAL 13.0
#define PAGO_HORA_EXTRA_1 26.0
#define PAGO_HORA_EXTRA_2 39.0
#define HORAS_LIMITE_1 40.0
#define HORAS_LIMITE_2 48.0

int main() {
    int horas_trabajadas, horas_extras;
    float pago_normal, pago_extra_1, pago_extra_2, pago_total;

    for (int i = 1; i <= 30; i++) {
        printf("Horas trabajador %d: ", i);
        scanf("%d", &horas_trabajadas);

        if (horas_trabajadas <= HORAS_LIMITE_1) {
            pago_normal = horas_trabajadas * PAGO_HORA_NORMAL;
            pago_extra_1 = 0;
            pago_extra_2 = 0;
        } else if (horas_trabajadas <= HORAS_LIMITE_2) {
            horas_extras = horas_trabajadas - HORAS_LIMITE_1;
            pago_normal = HORAS_LIMITE_1 * PAGO_HORA_NORMAL;
            pago_extra_1 = horas_extras * PAGO_HORA_NORMAL * 2;
            pago_extra_2 = 0;
        } else {
            horas_extras = horas_trabajadas - HORAS_LIMITE_2;
            pago_normal = HORAS_LIMITE_1 * PAGO_HORA_NORMAL;
            pago_extra_1 = (HORAS_LIMITE_2 - HORAS_LIMITE_1) * PAGO_HORA_NORMAL * 2;
            pago_extra_2 = horas_extras * PAGO_HORA_NORMAL * 3;
        }

        pago_total = pago_normal + pago_extra_1 + pago_extra_2;

        printf("Pago normal: %.2f\n", pago_normal);
        printf("Pago extra (hasta 8 horas): %.2f\n", pago_extra_1);
        printf("Pago extra (mas de 8 horas): %.2f\n", pago_extra_2);
        printf("Pago total: %.2f\n\n", pago_total);
    }

    return 0;
}
