/* Tamano de Vectores y Suma
Escribe un programa en C que solicite al usuario el tamano de dos vectores y
luego los rellene con numeros enteros ingresados por el usuario. Implementa
una funcion en C que tome dos vectores como argumentos y devuelva su suma
como un tercer vector. */

#include<stdio.h>
void suma(int array1[], int array2[], int cant);

int main() {

    int cant, i;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array1[cant], array2[cant];

    printf("\n\nDigite los numeros del primer array \n ");
    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array1[i]);
    }

    printf("\n\nDigite los numeros del segundo array \n");
    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array2[i]);
    }

    suma(array1,array2,cant);

    return 0;
}

void suma(int array1[], int array2[], int cant){

    int array3[cant], i;

    printf("\n\nEl nuevo array es \n");
    for (i=0; i<cant; i++){
        array3[i]=array1[i]+array2[i];
        printf("%i ",array3[i]);
    }
    return ;
}