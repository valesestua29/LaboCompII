/* Interseccion de Vectores
Crea una funcion en C que encuentre la interseccion de dos vectores (elementos
comunes) y devuelva un tercer vector con dichos elementos. */

#include<stdio.h>
void tercerArray(int array1[], int array2[], int cant);

int main(){

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

    
    tercerArray(array1, array2, cant);


    return 0;
}

void tercerArray(int array1[], int array2[], int cant) {
    int i, j, k = 0;
    int array3[cant]; // El tamaño máximo del array3 es igual al tamaño de array1 o array2

    // Buscar la intersección
    for (i = 0; i < cant; i++) {
        for (j = 0; j < cant; j++) {
            if (array1[i] == array2[j]) {
                array3[k++] = array1[i]; // Agregar el elemento en común
                break; // Romper el bucle interno para evitar duplicados
            }
        }
    }

    if (k == 0) {
        printf("No hay elementos comunes.\n");
    } else {
        printf("\n\nElementos comunes: ");
        for (i = 0; i < k; i++) {
            printf("%i ", array3[i]);
        }
        printf("\n");
    }
}
