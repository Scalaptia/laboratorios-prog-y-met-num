#include <stdio.h>
#define TOTAL 4
int searchInVector(int y[TOTAL],int x)
{
    int i, flag=0;
    for(i=0;i<TOTAL;i++)
    {
        if(x==y[i])
        {
            flag=1;
        }
    }
    return flag;
}
int main()
{
   int vector[TOTAL], num,i,found;
   for(i=0;i<TOTAL;i++)
   {
       printf("vector[%d]=?",i );
       scanf("%d",&vector[i]);   
   }
   printf("Que numero buscas? ");
   scanf("%d",&num);
   found=searchInVector(vector,num);
   if(found)
   {
       printf("Si se encontro!");
   }
   else
   {
       printf("No se encontro! ");
   }
  
}

