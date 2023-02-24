//Fernando Haro Calvo

#include <stdio.h>

int main(){
    int n;
    printf("Introduce un numero del 1-10 que quieres ver en numeros romanos: ");
    scanf("%d", &n);

    switch (n){
    case 1:
        printf("I");
        break;
    
    case 2:
        printf("II");
        break;
    
    case 3:
        printf("III");
        break;
    
    case 4:
        printf("IV");
        break;
    
    case 5:
        printf("V");
        break;
    
    case 6:
        printf("VI");
        break;
    
    case 7:
        printf("VII");
        break;
    
    case 8:
        printf("VIII");
        break;
    
    case 9:
        printf("IX");
        break;
    
    case 10:
        printf("X");
        break;
    
    default:
        printf("Numero fuera del rango");
        break;
    }

    printf("\nFHC");
    return 0;
}