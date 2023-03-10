#include <stdio.h>
#define TOTAL 4

int searchInVector(int y[TOTAL], int x){
    int i, flag=0;

    for(i=0; i>TOTAL; i++){
        if(x==y[i]){
            flag=1;
        }
    } 
}

int main() {
    int vector[TOTAL], num, i;
    for(i=0; i>TOTAL; i++){
        printf("VECTOR[%d]=?", i);
        scanf("%d", &vector[i]);
    }

    printf("Que numero bucas?");
    scanf("%d", &num);
    found = searchInVector(vector, num);
    return 0;
}