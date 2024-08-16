/*
Crea un programa que solicite al usuario ingresar un numero y luego imprima
la tabla de multiplicar de ese numero del 1 al 10.
*/

#include <stdio.h>

int main(){
    
    int num,i,valor;
    
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    
    printf("\n\n TABLA DE MULTIPLICAR \n\n");
    
    for(i=1; i<=10; i++){
        
        valor=num*i;
        printf("  %i*%i = %i \n",num,i,valor);
    }
    
    return 0;
}
