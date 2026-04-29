#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
int main(int argc, char const *argv[]){

    int a,b;
    printf("Ingrese 1re numero: ");
    scanf("%d",&a);

    printf("Ingrese 2do numero: ");
    scanf("%d",&b);
    sumar(a,b);
    restar(a,b);
    multiplicar(a,b);
    printf("\nla suma es: %d",sumar(a,b));
    printf("\nla resta es: %d",restar(a,b));
    printf("\nla multiplicacion es: %d",multiplicar(a,b));
    return 0;
}