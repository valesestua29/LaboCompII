/******************************************************************************
Implementar un programa que convierta un caracter ingresado por el usuario a
su correspondiente codigo ASCII utilizando punteros.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    char caracter, *punt;
    int codigo_ascii;
    
    printf("Ingrese un caracter: ");
    scanf("%c",&caracter);
    
    punt=&caracter;
    codigo_ascii = *punt; // Guarda el valor del código ASCII en la variable

    printf("El código ASCII de '%c' es %d.\n", *punt, codigo_ascii);
    
    
    return 0;
}
