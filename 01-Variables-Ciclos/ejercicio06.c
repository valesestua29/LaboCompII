/*
Implementa un programa que simule un conteo regresivo para el despegue de
un cohete. El usuario debe ingresar un numero entero positivo y el programa
debe imprimir los numeros desde ese numero hasta 0
*/

#include <stdio.h>

int main(){
    
    int num,i;
    
    
    printf("Ingresa un numero: ");
    scanf("%i", &num);
    
    if(num>0){
        printf("\n\nCuenta regresiva: \n");
        for(i=num;i>0;i--){
            printf(" %i ",i);
        }
        printf("\n\nDESPEGUEEE")
    }else{
        printf("el numero ingresado no es valido");
    }
    
    
    
    
    
    return 0;
}
