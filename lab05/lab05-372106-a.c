// Fernando Haro Calvo

#include <stdio.h>

int main(){
    int a, b, c;
    printf("Introduce el valor del numero a: ");
    scanf("%d", &a);
    printf("Introduce el valor del numero b: ");
    scanf("%d", &b);

    while (a>=b){
        a = a-b;
        c = c+1;
    }

    printf("El numero b cabe %d veces dentro del numero b", c);
    printf("\nFHC");
    return 0;
}