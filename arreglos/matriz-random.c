#include <stdio.h>
#define TROW 3
#define TCOL 4

int tabla[TROW][TCOL];

void capturarMatriz()
{ 
    for (int row=0;row<TROW;row++ )
    {
        for(int col=0;col<TCOL ; col++ )
        {
            printf("tabla[%d][%d]=? ",row,col);
            scanf("%d",&tabla[row][col]);
        }
    }
}
void imprimir_matriz()
{
    int row=0,  col;
    while(row<TROW)
    {  
        col=0;
       
        do
        {
            printf("%4d ",tabla[row][col]);
            col++;
        }while(col<TCOL);
        printf("\n"); 
        row++;
    }
}

float promedioMatriz()
{
    float prom,suma=0;
    for(int i=0;i<TROW; i++)
    {
        for(int j=0;j<TCOL; j++)
        {
            suma=suma+tabla[i][j];
        }
    }
    prom=suma/(TROW*TCOL);
    return prom;
}
int buscarMenor()
{
    int menor=tabla[0][0];
   for(int n=0; n<TROW; n++)
   {
       for(int m=0;m<TCOL; m++)
       {
           if(menor >tabla[n][m])
           {
                menor=tabla[n][m];               
           }
       }
   }
   return menor;
}

int main()
{
    float prom;
    capturarMatriz();
    imprimir_matriz();
    prom=promedioMatriz();
    printf("\nEl promedio es %f",prom);
    printf("\nEl menor es %d ",buscarMenor());
}