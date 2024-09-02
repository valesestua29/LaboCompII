/* Elemento Maximo y su Posicion
Desarrolla una funcion en C que encuentre el elemento maximo en un vector
dado y devuelva su posicion. */

#include<stdio.h>

int main(){

    int cant, i , posicion, mayor=0;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array[i]);
    }

    for (i=0; i<cant; i++){
        if(array[i]>mayor){
            mayor=array[i];
            posicion=i;
        }
    }

    printf("El mayor numero ingresado es %i y se encuentra en la posicion %i del vector ", mayor, posicion);

    return 0;
}