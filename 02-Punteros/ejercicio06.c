/******************************************************************************
Crear un programa que determine si un numero ingresado por el usuario es
positivo, negativo o cero utilizando punteros
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num, *camb1;
    
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    
    camb1=&num;
    
    if(*camb1>0){
        printf("Es un numero positivo");
    }else if(*camb1<0){
        printf("Es un numero negativo");
    }else{
        printf("Es igual a cero");
    }
    
    return 0;
}
