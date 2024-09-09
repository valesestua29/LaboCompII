/* Media de Elementos
Escribe una funcion en C que reciba un vector y su tamano como argumentos
y devuelva la media de los elementos */

#include<stdio.h>
void media(int array[], int cant);

int main(){

    int cant, i ;

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array[i]);
    }

    media(array,cant);
    return 0;
}

void media(int array[], int cant){

    int suma=0, i;
    float media=0;

    for (i=0; i<cant; i++){
        suma=suma+array[i];
    }

    media=(float)suma/cant;

    printf("La media del array ingresado es %.2f", media);

    return ;
}