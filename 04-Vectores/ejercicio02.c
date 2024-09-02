/* Encontrar el Maximo Elemento en un vector
Escribe un programa en C que encuentre y muestre el m´aximo elemento en un
array de enteros */


#include<stdio.h>

int main(){

    int cant, i , mayor=0;

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
        }
    }

    printf("El mayor numero ingresado es %i", mayor);

    return 0;
}