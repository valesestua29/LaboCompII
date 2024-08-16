/******************************************************************************
Desarrolla un programa que solicite al usuario ingresar su edad. Si es mayor de
18 años, imprime ”Bienvenido/a”; de lo contrario, imprime ”Acceso denegado”.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int edad;
    
    printf("Ingresa tu edad: ");
    scanf("%i", &edad);
    
    if(edad>=18){
        printf("\n\nBienvenide");
    }else if(edad<18){
        printf("Acceso denegado");
    }
    
    return 0;
}
