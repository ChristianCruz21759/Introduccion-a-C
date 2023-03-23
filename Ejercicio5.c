#include <stdio.h>

int main(){
    
    int numbers[9];
    int * pNumbers;
    
    for(int i = 0; i <= 9; i++){

    printf("Ingresar numero %d: ", i+1);
    scanf("%d", &numbers[i]);

    }
    
    for(int i = 0; i <= 9; i++){
        
    pNumbers = &numbers[i];

    printf("Numero %d por 2: %d\n", i+1,(*pNumbers)*2);

    }
    
return 0;
}
