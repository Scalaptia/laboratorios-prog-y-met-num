#include <stdio.h>

void imprimirMatriz(int x[4][5])
{
   int r,c;
   for (r=0 ;r<4 ;r++)
   {
       for (c=0 ;c<5 ;c++)
       {
           printf("%d ",x[r][c]);
       }
       printf("\n");
   }
      
}

int sumarMatriz( int x[4][5])
{
  int suma=0;
  int r=0,c;
   while( r <4 )
   {
       c=0;
       while (c<5)
       {
           suma= suma + x[r][c];
           c++;
       }
       r++;
   }   
   return suma;
}
float promedio(int suma,int total)
{
  return (float) suma/total;
}

int main()
{
   int x[4][5];
   int r,c,s;
   float p;
   for (r=0; r<4 ;r++ )
   {
       for (c=0 ; c<5 ; c++)
       {
           printf("x[%d][%d]= ? ",r,c);
           scanf("%d",&x[r][c]);
       }
   }
   imprimirMatriz(x);
   s=sumarMatriz(x);
   printf("La suma es %d \n",s);
   p=promedio(s,20);
   printf("El promedio es %f \n",p);
   return 0;
}
