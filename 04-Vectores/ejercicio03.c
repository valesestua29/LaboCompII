/* Contar la Cantidad de Elementos Pares en un vector
Escribe un programa en C que cuente y muestre la cantidad de elementos pares
en un array de enteros. */

#include<stdio.h>

int main() {

    int cant, i, cont;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array[i]);
    }

    for (i=0; i<cant; i++){
        if(array[i]%2==0){
            cont++;
        }
    }

    printf("La cantidad de elementos pares es %i", cont);

    return 0;
}