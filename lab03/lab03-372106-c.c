//Fernando Haro Calvo

#include <stdio.h>
#define PI 3.1416

int main() {
    char opcion;
    float base, altura, radio, lado, angulo, area, apotema;
    
    printf("T) Area del triangulo\n");
    printf("C) Area del circulo\n");
    printf("P) Area del pentagono\n");
    printf("S) Area del Sector circular\n");
    printf("Seleccione una opcion [T,C,P,S]\n");
    scanf("%c", &opcion);
    
    switch (opcion) {
        case 'T':
            printf("\nIngrese la base del triangulo: ");
            scanf("%f", &base);
            
            printf("Ingrese la altura del triangulo: ");
            scanf("%f", &altura);
            
            area = base * altura / 2;
            
            printf("\nEl area del triangulo es: %.2f\n", area);
            break;
            
        case 'C':
            printf("\nIngrese el radio del circulo: ");
            scanf("%f", &radio);
            
            area = PI * radio * radio;
            
            printf("\nEl area del circulo es: %.2f\n", area);
            break;
            
        case 'P':
            printf("\nIngrese el lado del pentagono: ");
            scanf("%f", &lado);

            printf("Ingrese la longitud de la apotema del pentagono: ");
            scanf("%f", &apotema);
   
            area = (5 * lado * apotema) / 2;
            
            printf("\nEl area del pentagono es: %.2f\n", area);
            break;
            
        case 'S':
            printf("\nIngrese el radio del sector circular: ");
            scanf("%f", &radio);
            
            printf("Ingrese el angulo del sector circular: ");
            scanf("%f", &angulo);
            
            area = (PI * radio * radio * angulo) / 360;
            
            printf("\nEl area del sector circular es: %.2f\n", area);
            break;
            
        default:
            printf("Opcion invalida\n");
            break;
    }

    printf("\nFHC");
    return 0;
}
