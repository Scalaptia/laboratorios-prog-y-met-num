// Fernando Haro Calvo
#include <stdio.h>

void simpsoncombinado (int npuntos) {
    float area1, area2, areaTotal;
    float a, b;
    int n = npuntos - 3;
    int k = npuntos - 4;
    
    a = fx(0);
    b = fx(k);
    area1 = simpson1tercio(a, b, n);

    a = fx(k);
	b = fx(npuntos-1);
    area2 = simpson3octavos(a, b, k);

    areaTotal = area1 + area2;

    printf("\nMetodo de simpson combinado\n");
    printf("Area total: %f \n", areaTotal);
}