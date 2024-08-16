/******************************************************************************
Crear un programa que calcule la suma de dos n´umeros ingresados por el usuario
utilizando punteros
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num1, num2, suma;
    int *camb1, *camb2 ;
    
    printf("Ingrese dos numeros: ");
    scanf("%i %i", &num1,&num2);
    
    camb1 = &num1; // Asignar la dirección de memoria de num1 a camb1
    camb2 = &num2; // Asignar la dirección de memoria de num2 a camb2
    
    suma = *camb1 + *camb2;
    
    printf("La suma de %i + %i = %i ", *camb1,*camb2,suma);
    
    return 0;
}
