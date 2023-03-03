#include <stdio.h>

int main() {
    char opcion;
    int a, b, resultado;
    
    while (1) {
        printf("Menu de opciones:\n");
        printf("+ Sumar\n");
        printf("- Restar\n");
        printf("* Multiplicar\n");
        printf("/ Dividir\n");
        printf("# Salir\n\n");

        printf("Ingrese una opcion: ");
        scanf(" %c", &opcion);

        if (opcion == '#') {
            break;
        }

        printf("Ingrese dos numeros enteros: ");
        scanf("%d %d", &a, &b);

        switch(opcion) {
            case '+':
                resultado = a + b;
                printf("%d + %d = %d\n\n", a, b, resultado);
                break;
            case '-':
                resultado = a - b;
                printf("%d - %d = %d\n\n", a, b, resultado);
                break;
            case '*':
                resultado = a * b;
                printf("%d * %d = %d\n\n", a, b, resultado);
                break;
            case '/':
                if (b != 0) {
                    resultado = a / b;
                    printf("%d / %d = %d\n\n", a, b, resultado);
                } else {
                    printf("No se puede dividir por cero.\n\n");
                }
                break;
            default:
                printf("Opcion incorrecta, vuelva a intentar.\n\n");
                break;
        }
    }
    
    printf("Adios!\n");
    
    return 0;
}
