//Fernando Haro Calvo

#include <stdio.h>

int main(){
	int a, b, c, menor, medio, mayor;
	
	printf("Introduce 3 numeros: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if (a>b){
		mayor = a;
		menor = b;
	} else {
		mayor = b;
		menor = a;
	}
	
	if (c > mayor){
		medio = mayor;
		mayor = c;
	} else {
		if(c < menor){
			medio = menor;
			menor = c;
		} else{
			medio = c;
		}
	}
	printf("Los numeros de menor a mayor son: %d, %d, %d", menor, medio, mayor);
	printf("\nFHC");
	return 0;
}