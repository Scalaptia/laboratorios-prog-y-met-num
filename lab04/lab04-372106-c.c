// Fernando Haro Calvo

#include <stdio.h>

int main() {
    char opcion;
    int num1, num2, resultado;
    
    while (1) {
        fflush(stdin);
        printf("Menu de opciones:\n");
        printf("+ Sumar\n");
        printf("- Restar\n");
        printf("* Multiplicar\n");
        printf("/ Dividir\n");
        printf("# Salir\n\n");
        
        scanf("%c", &opcion);

        if (opcion == '+' || opcion == '-' || opcion == '*' || opcion == '/') {
            printf("Ingrese el primer numero: ");
            scanf("%d", &num1);

            printf("Ingrese el segundo numero: ");
            scanf("%d", &num2);

            switch(opcion) {
                case '+':
                    resultado = num1 + num2;
                    printf("La suma es: %d\n\n", resultado);
                    break;
                case '-':
                    resultado = num1 - num2;
                    printf("La resta es: %d\n\n", resultado);
                    break;
                case '*':
                    resultado = num1 * num2;
                    printf("La multiplicacion es: %d\n\n", resultado);
                    break;
                case '/':
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        printf("La division es: %d\n\n", resultado);
                    } else {
                        printf("Error division entre cero.\n\n");
                    }
                    break;
            }        
        } else if (opcion == '#') {
            break;
        } else {
            printf("Opcion incorrecta.\n\n");
        }
    }
    
    printf("FHC");
    return 0;
}
