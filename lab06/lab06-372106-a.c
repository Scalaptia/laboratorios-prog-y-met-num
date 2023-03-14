#include <stdio.h>

int main(){
    int suma, n, c, edad, bebes = 0, ninos = 0, adolescentes = 0, adultos = 0;
    float promedio;

    printf("\nIntroduce la cantidad de personas: ");
    scanf("%d", &n);

    for (c = 1; c<=n; c++){
        printf("Introduce la edad %d: ", c);
        scanf("%d", &edad);

        if ((edad == 0) && (edad <= 3)) {
            bebes++;
        } else if ((edad >= 4) && (edad <= 12)){
            ninos++;
        } else if ((edad >= 13) && (edad <= 17)){
            adolescentes++;
        } else if (edad >= 18){
            adultos++;
        }
        suma = suma + edad;
    }

    promedio = suma/n;
    printf("\nEl promedio de edades es: %.2f", promedio);
    printf("\nBebes: %d", bebes);
    printf("\nNinos: %d", ninos);
    printf("\nAdolescentes: %d", adolescentes);
    printf("\nAdultos: %d", adultos);


    return 0;
}
