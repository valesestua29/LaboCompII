/* Buscar un Elemento en un vector y Mostrar su Posicion
Escribe un programa en C que busque un elemento especıfico en un array de
enteros y muestre su posicion en el array.*/

#include<stdio.h>

int main() {

    int cant, i, buscado, encontrado=0;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array[i]);
    }

    printf("Ingrese el valor a buscar: ");
    scanf("%i",&buscado);

    for (i=0; i<cant; i++){

        if(array[i]==buscado){
            encontrado=i;
        }
    }

    if(encontrado!=0){
            printf("El valor se encuentra en la posicion %i del array", encontrado);
    }else{
            printf("No se encontro el valor solicitado");
    }

    return 0;
}