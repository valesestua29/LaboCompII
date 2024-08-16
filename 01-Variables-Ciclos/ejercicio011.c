/******************************************************************************
Crea un programa que convierta la temperatura de grados Celsius a Fahrenheit.
El usuario debe ingresar la temperatura en Celsius y el programa debe imprimir
la temperatura equivalente en Fahrenheit.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    float farh, cels;
    
    printf("Ingrese los grados Celsius: ");
    scanf("%f",&cels);
    
    farh=(cels*9/5)+32;
    
    printf("%.2f Celsius es equivalente a %.2f Fahrenheit",cels,farh);

    return 0;
}
