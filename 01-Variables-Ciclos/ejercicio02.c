/* Verificacion de numero par o impar

Desarrolla un programa que solicite al usuario ingresar un numero entero e imprima
si es par o impar*/

#include <stdio.h>
int main(){

    int num;

    printf("Ingrese un numero: ");
    scanf("%i",&num);

    if (num%2==0){
        printf("El numero ingresado es par");
    }else{
        printf("El numero ingresado es impar");
    }

    return 0;
}