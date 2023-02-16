//FERNANDO HARO CALVO
#include <stdio.h>

int main()
{
    int a=10, b=20;
    int resultado;
    resultado= a>b;
    printf("En lenguaje C: 1 es verdadero y 0 es falso \n");
    printf("a=%d, b=%d, \n", a, b);
    printf("La comparacion de a > b es: %d \n", resultado);

    resultado= a<b;
    printf("La comparacion de a < b es: %d \n", resultado);

    resultado= a != b;
    printf("La comparacion de a != b es: %d \n", resultado);

    resultado= (a!=b && b>=a) || (b==a || a>5);
    printf("La comparacion de (a!=b && b>=a) || (b==a || a>5) es: %d \n", resultado);
    printf("\n\nFHC");
}