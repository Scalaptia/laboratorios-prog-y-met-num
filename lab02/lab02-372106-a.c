//Fernando Haro Calvo

#include <stdio.h>
#include <math.h>

int main(){
	int x;
	float y;
	
	printf("Introduce un numero x: ");
	scanf("%d", &x);
	
	if(x<10){
		y = fabs(x) + 2.0/x;
	}
	if(x>=10 && x<=20){
		y= sin(x) + cos(x) - (1/x);
	}
	if(x>20){
		y = sqrt(pow(x, 3) + 2.0*x);
	}
	printf("El valor de y es: %.3f", y);
	printf("\nFHC");
	return 0;
}