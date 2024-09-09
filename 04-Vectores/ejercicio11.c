/* Norma de un Vector
Escribe una funcion en C que calcule la norma de un vector dado y la devuelva
como resultado.*/

#include<stdio.h>
#include<math.h>
void normaArray(int array[], int cant);


int main(){

    int cant, i;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array1[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array1[i]);
    }

    normaArray(array1, cant);

    return 0;
}

void normaArray(int array[], int cant){

    int suma=0,i;
    float normal;

    for (i=0; i<cant; i++){
        suma=suma + pow(array[i], 2);
    }

    normal= sqrt(suma);

    printf("\n La normal del vector ingresado es: %.2f ", normal);

}
