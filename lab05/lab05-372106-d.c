// Fernando Haro Calvo

#include <stdio.h>

int main(){
    char opcion;
    float interes, prestamo, total_a_pagar, mensualidad;

    do {
        fflush(stdin);
        printf("[1] Prestamo a 18 meses\n");
        printf("[2] Prestamo a 36 meses\n");
        printf("[3] Prestamo a 50 meses\n");
        printf("[S] Finalizar programa\n");

        printf("\nSelecciona una opcion: ");
        scanf(" %c", &opcion);

        switch (opcion)
        {
        case '1':
            printf("Ingresa la cantiad del prestamo: ");
            scanf("%f", &prestamo);
            interes = prestamo * 0.20; 
            total_a_pagar = prestamo + interes;
            mensualidad = total_a_pagar/18;
            printf("\nInteres: $%.2f\n", interes);
            printf("Total a pagar: $%.2f\n", total_a_pagar);
            printf("Mensualidad: $%.2f\n\n", mensualidad);
            break;
        
        case '2':
            printf("Ingresa la cantiad del prestamo: ");
            scanf("%f", &prestamo);
            interes = prestamo * 0.35;
            total_a_pagar = prestamo + interes;
            mensualidad = total_a_pagar/36;
            printf("\nInteres: $%.2f\n", interes);
            printf("Total a pagar: $%.2f\n", total_a_pagar);
            printf("Mensualidad: $%.2f\n\n", mensualidad);
            break;
        
        case '3':
            printf("Ingresa la cantiad del prestamo: ");
            scanf("%f", &prestamo);
            interes = prestamo * 0.45;
            total_a_pagar = prestamo + interes;
            mensualidad = total_a_pagar/50;
            printf("\nInteres: $%.2f\n", interes);
            printf("Total a pagar: $%.2f\n", total_a_pagar);
            printf("Mensualidad: $%.2f\n\n", mensualidad);
            break;
        
        case 'S':
        case 's':
            printf("Vuelva pronto!");
            break;
        
        default:
            printf("\nOpcion no existe");
            break;
        }

    } while((opcion != 'S') && (opcion != 's'));
    
    printf("\nFHC");
    return 0;
}
