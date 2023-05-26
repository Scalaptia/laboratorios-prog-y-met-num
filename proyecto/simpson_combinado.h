// Fernando Haro Calvo
#include <stdio.h>

void simpsoncombinado (int npuntos) {
    float area1, area2, areaTotal;
    int a, b;
    int n = npuntos - 3;
    int k = npuntos - 4;

    a = fx(k);
	b = fx(npuntos-1);
    area2 = simpson3octavos(a, b, k);
    
	npuntos = k+1;
    b = a;
    a = fx(0);
    area1 = simpson1tercio(a, b, npuntos);

    areaTotal = area1 + area2;

    printf("\nMetodo de simpson combinado\n");
    printf("Area total: %f \n", areaTotal);

}