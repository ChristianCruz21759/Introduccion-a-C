#include <stdio.h>

int main(){

float F, C;

printf("Ingrese la temperatura en grados Fahrenheit: ");
scanf("%f", &F);
C = (F-32)*9/5;
printf("La temperatura en grados Celsius es %f", C);

return 0;
}
