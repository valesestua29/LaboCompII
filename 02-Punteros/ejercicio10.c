/******************************************************************************
Crear un programa que determine si un car´acter ingresado por el usuario es una
vocal utilizando punteros.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(){
    
    char letra, *punt;
    
    printf("Ingrese una letra: ");
    scanf("%c",&letra);
    
    letra = tolower(letra);
    punt=&letra;
    
    switch(*punt){
        case 'a':
            printf("La letra ingresada es una vocal");
            break;
        case 'e':
            printf("La letra ingresada es una vocal");
            break;
        case 'i':
            printf("La letra ingresada es una vocal");
            break;
        case 'o':
            printf("La letra ingresada es una vocal");
            break;
        case 'u':
            printf("La letra ingresada es una vocal");
            break;
        default:
            printf("La letra ingresada no es una vocal");
            break;
    }
    
        
    return 0;
}
