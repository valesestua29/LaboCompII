/******************************************************************************
Escribir un programa que solicite al usuario un numero y luego imprima su
direccion de memoria utilizando punteros.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num;
    
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    
    printf("\n\nLa direccion de memoria de %i es %p",num, &num);
    
    
    return 0;
}
