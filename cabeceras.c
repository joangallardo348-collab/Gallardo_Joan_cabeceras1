#include <stdio.h>
#include "sumar.h"
#include "restar.h"
int main(int argc, char const *argv[]){

    int a,b;
    printf("Ingrese 1re numero: ");
    scanf("%d",&a);

    printf("Ingrese 2do numero: ");
    scanf("%d",&b);
    sumar(a,b);
    restar(a,b);
    printf("la suma es: %d",sumar(a,b));
    printf("la suma es: %d",restar(a,b));
    return 0;
}