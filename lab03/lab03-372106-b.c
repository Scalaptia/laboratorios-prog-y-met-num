// Fernando Haro Calvo
#include <stdio.h>

int main(){
    int edad, semestre, costo;

    printf("Introduce la edad del alumno: ");
    scanf("%d", &edad);

    printf("\nIntroduce el semestre: ");
    scanf("%d", &semestre);

    if(edad>15){
        costo = 6000;
    } else {
        costo = 3800;
    }
    
    if(semestre>4){
        costo = costo + costo*0.15;
    }

    printf("\nEl costo total es: $%d", costo);
    printf("\nFHC");
    return 0;
}