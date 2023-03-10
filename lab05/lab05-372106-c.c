// Fernando Haro Calvo

#define A 60
#define B 50
#define C 40
#define D 35

#include <stdio.h>

int main(){
    char opcion;
    int tboletos, total;

    do {
        fflush(stdin);
        printf("[A] Batman\n");
        printf("[B] Spider Man\n");
        printf("[C] Sing 2\n");
        printf("[D] Home Alone 5\n");
        printf("[T] Finalizar programa\n");

        printf("\nQue pelicula desea ver?: ");
        scanf(" %c", &opcion);

        switch (opcion)
        {
        case 'A':
        case 'a':
            printf("\nCuantos boletos desea comprar?: ");
            scanf("%d", &tboletos);
            total = tboletos * A;
            printf("Total a pagar: $%d\n\n", total);
            break;
        
        case 'B':
        case 'b':
            printf("\nCuantos boletos desea comprar?: ");
            scanf("%d", &tboletos);
            total = tboletos * B;
            printf("Total a pagar: %d\n\n", total);
            break;
        
        case 'C':
        case 'c':
            printf("\nCuantos boletos desea comprar?: ");
            scanf("%d", &tboletos);
            total = tboletos * C;
            printf("Total a pagar: %d\n\n", total);
            break;
        
        case 'D':
        case 'd':
            printf("\nCuantos boletos desea comprar?: ");
            scanf("%d", &tboletos);
            total = tboletos * D;
            printf("Total a pagar: %d\n\n", total);
            break;

        case 'T':
        case 't':
            printf("\nVuelva pronto!");
            break;
        
        default:
            printf("\nOpcion no existe");
            break;
        }
    } while((opcion != 'T') && (opcion != 't'));
    
    printf("\nFHC");
    return 0;
}
