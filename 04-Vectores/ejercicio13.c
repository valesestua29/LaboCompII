/*Eliminacion de Duplicados
Crea una funcion en C que elimine los elementos duplicados de un vector dado
y devuelva un nuevo vector sin duplicados.*/

#include<stdio.h>
void eliminarDuplicado(int array[], int cant);

int main(){

    int cant, i;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array1[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array1[i]);
    }

    eliminarDuplicado(array1, cant);

    return 0;
}

void eliminarDuplicado(int array[], int cant) {
    int i, j, k = 0;
    int arraySinDuplicados[cant]; // Array para almacenar los elementos sin duplicados
    int duplicado;

    for (i = 0; i < cant; i++) {
        duplicado = 0; // Inicializamos como si no hubiera duplicado

        // Verificar si array[i] ya está en arraySinDuplicados
        for (j = 0; j < k; j++) {
            if (array[i] == arraySinDuplicados[j]) {
                duplicado = 1; // Si se encuentra duplicado, lo marcamos
                break;
            }
        }
        // Si no es duplicado, lo agregamos al arraySinDuplicados
        if (!duplicado) {
            arraySinDuplicados[k++] = array[i];
        }
    }

    printf("Array sin duplicados: ");
    for (i = 0; i < k; i++) {
        printf("%i ", arraySinDuplicados[i]);
    }
    printf("\n");

}