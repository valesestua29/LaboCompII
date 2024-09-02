/* Suma de Elementos en un vector
Escribe un programa en C que calcule la suma de todos los elementos en un
array de enteros */

#include<stdio.h>

int main(){

    int cant, i, suma=0;

    printf("Ingrese la longitud del array: ");
    scanf("%i", &cant);

    int array[cant];

    for (i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array[i]);

        suma=suma+array[i];
    }

    printf("La suma de los numeros ingresados en el array es %i", suma);

    return 0;
}