//Fernando Haro Calvo

#include <stdio.h>

int main(){
	int dinero, quinientos, doscientos, cien, cincuenta;
	
	printf("Introduce la cantidad a retirar: \n");
	scanf("%d", &dinero);
	
	quinientos = dinero/500;
	dinero = dinero - (quinientos*500);
	doscientos = dinero/200;
	dinero = dinero - (doscientos*200);
	cien = dinero/100;
	dinero = dinero - (cien*100);
	cincuenta = dinero/50;
	dinero = dinero - (cincuenta*50);
	
	printf("\nBilletes de 500: %d", quinientos);
	printf("\nBilletes de 200: %d", doscientos);
	printf("\nBilletes de 100: %d", cien);
	printf("\nBilletes de 50: %d", cincuenta);
	
	printf("\nFHC");
	return 0;
}