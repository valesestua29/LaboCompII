/******************************************************************************
Implementar un programa que calcule la potencia de un numero ingresado por
el usuario utilizando punteros
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num, *camb1;
    long potencia;
    
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    
    camb1=&num;
    
    potencia=*camb1 * *camb1;
    
    printf("%li",potencia);
    
    
    return 0;
}
