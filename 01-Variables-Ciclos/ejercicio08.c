/*
Desarrolla una calculadora de gastos que solicite al usuario ingresar el precio de
varios productos y luego calcule el total. El programa debe continuar pidiendo
precios hasta que el usuario decida detenerse.


*/

#include <stdio.h>

int main(){
    
    int num=0, total=0;
    
    printf("EL PROGRAMA FINALIZA INGRESANDO UN NUMERO NEGATIVO\n\n");
    
    while(num>=0){
        
        printf("\nIngrese el precio del producto: ");
        scanf("%i",&num);
        
        total=total+num;
    }
    printf("El total es $%i",total);
    
    return 0;
}
