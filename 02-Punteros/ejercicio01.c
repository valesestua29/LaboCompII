/******************************************************************************
Escribir un programa que solicite al usuario dos numeros enteros y 
luego intercambie los valores de las variables utilizando punteros.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num1, num2;
    int *camb1, *camb2 ;
    
    printf("Ingrese dos numeros: ");
    scanf("%i %i", &num1,&num2);
    
    camb1 = &num1;
    camb2 = &num2;
    
    int temp = *camb1;   // Guarda el valor de num1 en una variable temporal
    *camb1 = *camb2;     // Asigna el valor de num2 a num1
    *camb2 = temp;       // Asigna el valor de temp (el valor original de num1) a num2
        
    printf("num1 es %i y num2 es %i", num1,num2);
    return 0;
}
