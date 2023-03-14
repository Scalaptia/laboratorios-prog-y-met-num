#include <stdio.h>
#define NUMELEM 5
int vector[NUMELEM];

void capturarVector()
{
    int i;
    for(i=0; i<NUMELEM; i++)
    {
       printf("vector[%d]=?",i);
        scanf("%d",&vector[i]);
    }
}
void imprimirVector()
{
    int i;
    for(i=0;i<NUMELEM; i++)
    {
       printf("%d ",vector[i]); 
    }
}
void cuadradoVector()
{
    int i=0;
    do
    {
        vector[i]=vector[i]*vector[i];
        i++;
    }while(i<NUMELEM);
}
int buscarMayor()
{
    int i,mayor;
    mayor=vector[0];
    for (i=0;i<NUMELEM; i++)
    {
        if(mayor < vector[i])
        {
            mayor=vector[i];
        }
    }
    return mayor;
}


int main()
{
    
    capturarVector(); 
    imprimirVector();
    cuadradoVector();
    printf("\n");
    imprimirVector();
    printf("\nEl mayor es %d", buscarMayor());
}
