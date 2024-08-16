/******************************************************************************
Desarrollar un programa que encuentre el mayor entre dos numeros ingresados
por el usuario utilizando punteros.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num1, num2;
    int *camb1, *camb2 ;
    
    printf("Ingrese dos numeros: ");
    scanf("%i %i", &num1,&num2);
    
    camb1 = &num1; // Asignar la dirección de memoria de num1 a camb1
    camb2 = &num2; // Asignar la dirección de memoria de num2 a camb2
    
    if (*camb1 < *camb2) {
        printf("%i es menor que %i\n", *camb1, *camb2);
    } else if (*camb1 > *camb2) {
        printf("%i es mayor que %i\n", *camb1, *camb2);
    } else {
        printf("Los numeros son iguales\n");
    }
    
    return 0;
}
