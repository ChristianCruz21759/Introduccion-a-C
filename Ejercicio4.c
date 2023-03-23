#include <stdio.h>
#include "math.h"

int main(){
    
    int a, b, c;
    
    printf("Ingresar dos numeros separados por un espacio: ");
    scanf("%d %d", &a, &b);
    
    printf("PI: %f\n", PI);
    
    c = suma(a,b);
    printf("La suma de estos dos numeros es: %d\n", c);
    
    c = resta(a,b);
    printf("La resta de estos dos numeros es: %d\n", c);
    
    c = multiplicacion(a,b);
    printf("La mutliplicacion de estos dos numeros es: %d\n", c);
    
    c = division(a,b);
    printf("La division de estos dos numeros es: %d\n", c);
    

    return 0;
}
