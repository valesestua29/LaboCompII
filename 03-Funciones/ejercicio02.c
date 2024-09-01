/*  Calcular promedio
Implementa una funcion en C llamada calcularpromedio que reciba un arreglo
de numeros enteros y su longitud como parametros, y devuelva el promedio de los elementos del arreglo. 
Luego, escribe un programa que solicite al usuario ingresar los elementos de un arreglo, 
utilice esta funci´on para calcular el promedio, y finalmente imprima el resultado. */


#include<stdio.h>
cargarArray(int array[], int cant);
float calcularPromedio(int array[], int cant);

int main(){

    int cant;
    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i", &cant);

    int array[cant];
    cargarArray(array, cant);
    
    float promedio; 

    promedio= calcularPromedio(array,cant);
    printf("El promedio es: %f",promedio);

    return 0; 
}

cargarArray(int array[], int cant){
    int i ;

    for (i=0; i<cant; i++){
        printf("Ingrese un numero: ");
        scanf("%i", &array[i]);
    }
}

float calcularPromedio(int array[], int cant){
    int suma=0, i;
    float promedio;

    for (i=0; i<cant; i++){
        suma=suma+array[i];
    }

    promedio= (float)suma/cant;

    return promedio;
}
