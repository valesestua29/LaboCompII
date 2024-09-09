/*Inversion de Vector
Escribe una funcion en C que invierta el orden de los elementos en un vector
dado utilizando punteros.*/

#include<stdio.h>
void invertirVector(int *array, int cant);

int main(){

    int cant, i;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array1[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array1[i]);
    }

    // Llamamos a la función para invertir el vector
    invertirVector(array1, cant);

    // Imprimimos el vector invertido
    printf("Vector invertido: ");
    for (i = 0; i < cant; i++) {
        printf("%i ", array1[i]);
    }
    printf("\n");

    return 0;
}

void invertirVector(int *array, int cant){

    int *inicio = array;           // Puntero al inicio del array
    int *fin = array + cant - 1;   // Puntero al final del array
    int temp;

    // Intercambiamos los elementos utilizando punteros
    while (inicio < fin) {
        // Intercambiamos el valor de los punteros
        temp = *inicio;
        *inicio = *fin;
        *fin = temp;

        // Movemos los punteros hacia el centro
        inicio++;
        fin--;
    }

}