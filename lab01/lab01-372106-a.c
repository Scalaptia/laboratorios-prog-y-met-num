//FERNANDO HARO CALVO
#include <stdio.h>

int main()
{
    int a, b, r1;
    float c, r2;
    char letra;
    
    printf("Dame un caracter: ");
    scanf("%c", &letra);
    printf("Dame un numero entero a: ");
    scanf("%d", &a);
    printf("Dame otro numero entero b: ");
    scanf("%d", &b);
    printf("Dame un numero real o de punto flotante c: ");
    scanf("%f", &c);

    printf("El caracter es %c, entero a es %d, entero b es %d, flotante c es %.2f ", letra, a, b, c);
    r1 = a + b;
    printf("\nLa suma de a+b=%d", r1);
    r1 = a % b;
    printf("\nEl residuo de a+b=%d", r1);
    r2 = (float) a/b;
    printf("\nLa division normal es %.2f ", r2);
    printf("\n\nFHC");
    return 0;
}