//Fernando Haro Calvo

#include <stdio.h>

int main(){
    int num;

    printf("Introduce un numero: ");
    scanf("%d", &num);

    if(num<0){
        num = num*(-1);
    }

    printf("El valor absoluto es: %d", num);
    printf("\nFHC");
    return 0;
}