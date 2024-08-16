/*
Escribe un programa que solicite al usuario ingresar las longitudes de los tres
lados de un triangulo y determine si es equilatero, isosceles o escaleno
*/

#include <stdio.h>

int main(){
    
    int lado1,lado2,lado3;
    
    printf("Ingrese los lados del triangulo ");
    printf("\nLado 1: ");
    scanf("%f",&lado1);
    printf("\nLado 2: ");
    scanf("%f",&lado2);
    printf("\nLado 3: ");
    scanf("%f",&lado3);
    
    if(lado1==lado2 && lado1==lado3){
        printf("Es un triangulo equilatero");
    }else if((lado1==lado2 && lado1!=lado3)||(lado1==lado3 && lado2!=lado1)||(lado2==lado3 && lado2!=lado1)){
        printf("Es un triangulo isosceles ");
    }else{
        printf("Es un triangulo escaleno");
    }

    return 0;
}
