/*Vector Simetrico
Implementa una funcion en C que determine si un vector dado es simetrico, es
decir, si es igual al vector invertido*/

#include<stdio.h>
int simetrico (int array[], int cant);

int main(){

    int cant, i;


    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array[cant];

    for(i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array[i]);
    }

    if (simetrico(array, cant)) {
        printf("\n\nEl array es simetrico.\n");
    } else {
        printf("\n\nEl array es asimetrico.\n");
    }


    return 0;
}

int simetrico (int array[], int cant){

    int i;

    for (i=0; i<cant/2; i++){
        if(array[i]!=array[cant-i-1]){
            return 0;
        }
    }
    return 1;
}