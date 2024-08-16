/* Desarrolla un programa que solicite al usuario ingresar su edad e imprima en
que categorıa se encuentra (niño, adolescente, adulto).*/

#include <stdio.h>

int main(){
    
    int num;
    
    printf("Ingresa tu edad: ");
    scanf("%i", &num);
    
    if((num>=0)&&(num<=5)){
        printf ("Estas en el rango de infante");
    }else if(num>5 && num<=12){
        printf("Estas en el rango de niño");
    }else if(num>12 && num<=18){
        printf("Estas en el rango de adolescente");
    }else if(num>18 && num<=60){
        printf("Estas en el rango de adulto");
    }else if(num>60 && num<100){
        printf("Estas en el rango de vejez");
    }else{
        printf("El numero ingresado no es valido");
    }

    return 0;
}
