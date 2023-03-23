#include <stdio.h>

int main(){

int n, fib1, fib2, suma;

fib1 = 0;
fib2 = 1;

printf("Ingrese el numero de terminos de la serie de Fibonacci que desee: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){

    printf("%d ", fib1);
    suma = fib1 + fib2;
    fib1 = fib2;
    fib2 = suma;

    }
return 0;
}
