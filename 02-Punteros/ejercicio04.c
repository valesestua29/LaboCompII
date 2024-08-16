/******************************************************************************
Implementar un programa que determine si un numero ingresado por el usuario
es par o impar utilizando punteros.
*******************************************************************************/

#include <stdio.h>

int main(){
   
   int num1, *camb1;
   
   printf("Ingresar un numeros: ");
   scanf("%i",&num1);
   
   camb1=&num1;
   
   if(*camb1%2==0){
       printf("El numero ingresado es par");
   }else{
       printf("El numero ingresado es impar");
   }

    return 0;
}
