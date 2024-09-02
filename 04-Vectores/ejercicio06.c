/* Producto Escalar
Crea una funcion en C que calcule el producto escalar de dos vectores y devuelva
el resultado. */

#include<stdio.h>
void productoEscalar(int array1[], int array2[], int cant);

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

    productoEscalar(array1, array2, cant);

    return 0;
}


void productoEscalar(int array1[], int array2[], int cant){

    int i, array3[cant], suma1=0, suma2=0, prod=0;

    // Multiplicando cada posicion de vector entre si
    printf("El producto escalar entre los vectores ingresados es: \n");
    for(i=0; i<cant; i++){

        array3[i]=array1[i]*array2[i];
        printf("%i ", array3[i]);

    }
    
    // sumando los valores de cada vector y multiplicandolos entre si
    printf("\n\nEl producto escalar total entre los vectores ingresados es: \n");

    for(i=0; i<cant; i++){
        suma1=suma1+array1[i];
        suma2=suma2+array2[i];
    }

    prod=suma1*suma2;

    printf("%i ",prod);

    return ;
}