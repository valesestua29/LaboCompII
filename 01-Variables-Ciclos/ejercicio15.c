/******************************************************************************
Crea un programa que solicite al usuario ingresar un n´umero entero no negativo
y luego calcule su factorial.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num,i=1;
    long fact=1;
    
    printf("Ingresa un numero: ");
    scanf("%i",&num);
    
    if(num>=0){
        for(i=1;i<=num;i++){
            fact*=i;
        }
    }else{
        printf("Debe ser un numero positivo");
    }
    
    
    printf("El factorial de %i es %li",num,fact);
    
    return 0;
}
