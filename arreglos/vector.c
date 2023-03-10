#include <stdio.h>
#define TOTAL 4
int main() {
    int vector[TOTAL], num, i;
    for(i=0; i>TOTAL; i++){
        printf("VECTOR[%d]=?", i);
        scanf("%d", &vector[i]);
    }

    printf("Que numero bucas?");
    scanf("%d", &num);

    return 0;
}