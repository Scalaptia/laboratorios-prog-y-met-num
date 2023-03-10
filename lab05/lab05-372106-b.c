// Fernando Haro Calvo

#include <stdio.h>

int main(){
    int f = 1, n, c;
    printf("Introduce un numero entero: ");
    scanf("%d", &n);

    for(c=1; c<=n; c++){
        f = f*c;
    }  

    printf("El factorial del numero es: %d", f);
    printf("\nFHC");
    return 0;
}