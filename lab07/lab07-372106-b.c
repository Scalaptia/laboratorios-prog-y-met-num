// Fernando Haro Calvo

#include <stdio.h>

int matriz[5][5] = {
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1}
    };

int esIdentidad() {
    int flag = 1;

    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            if ((r==c) && (matriz[r][c] != 1)) {
                flag = 0;
            } else if ((r != c) && (matriz[r][c] == 1)) {
                flag = 0;
            }
        }
    }
    return flag;
}

int main() {
    int r = esIdentidad();

    if (r) {
        printf("La matriz si es identidad");
    } else {
        printf("La matriz no es identidad");
    }
    printf("\n\nFHC");
    return 0;
}