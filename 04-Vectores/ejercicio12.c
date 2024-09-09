/* Duplicacion de Elementos
Implementa una funcion en C que tome un vector y su tamano como argumentos
y devuelva un nuevo vector con los elementos duplicados. */

#include<stdio.h>
#include<math.h>
void duplicadoArray(int array[], int cant);

int main(){

    int cant, i;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array1[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array1[i]);
    }

    duplicadoArray(array1, cant);

    return 0;
}

void duplicadoArray(int array[], int cant){

    int i;

    printf("\n\nEl vector duplicado es el siguiente: \n");

    for (i=0; i<cant; i++){
        array[i]=pow(array[i], 2);
        printf("%i ", array[i]);
    }

}