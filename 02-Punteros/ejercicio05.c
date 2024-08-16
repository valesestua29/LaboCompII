/******************************************************************************
Escribir un programa que calcule el factorial de un numero ingresado por el
usuario utilizando punteros.
*******************************************************************************/

#include <stdio.h>

int main(){
   
   int num1, i, *camb1;
   long fact=1, *resultado;
  
   printf("Ingresar un numeros: ");
   scanf("%i",&num1);
   
   camb1=&num1;
   
   if(*camb1>=0){
       for(i=1; i<=*camb1;i++){
           fact=fact*i;
           resultado=&fact;
       }
   }else{
       printf("El numero es negativo");
   }
   
   printf("El factorial de %i es %li",*camb1,*resultado);

    return 0;
}
