#include <stdio.h>
#define LIMITE 10
int v[LIMITE]; 
void capturarDatosVector()
{
   int i;
   for(i=0 ; i<LIMITE ; i++)
   {
       printf("Valor del casillero %d ",i);
       scanf("%d",&v[i]);
   }    
}
void mostrarVector()
{
   int i=0;
   while(i<LIMITE)
   {
       printf("%d ",v[i]);
       i=i+1;
   }    
}
void vectorAlCuadrado()
{
    int c;
    for (c=0 ;c<LIMITE ;c++ )
    {
        v[c]=v[c]*v[c];
    }
}
void mostrarVectorX()
{
    printf("\n");
    for (int c=LIMITE-1;c>=0 ; c--)
    {
        printf("%d ",v[c]);
    }
}
int main()
{
  // char z[5][4]; 
   capturarDatosVector();
   mostrarVector();
   vectorAlCuadrado();
   printf("\n");
   mostrarVector();
   mostrarVectorX();
    return 0;
}
