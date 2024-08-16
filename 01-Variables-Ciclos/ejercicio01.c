/* Comparacion de dos numeros 

Escribe un programa que solicite al usuario ingresar dos numeros enteros y luego imprime el mayor de los dos. 
Si son iguales que imprima "son iguales"*/

#include <stdio.h>
int main(){

    int num1, num2 ;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("\nIngrse el segundo numero: ");
    scanf("%i", &num2);

    if (num1>num2){
        printf("%i es mayor que %i", num1,num2);
    }else if (num1<num2){
        printf("%i es mayor que %i", num2,num1);
    }else{
        printf("Los numeros ingresados son iguales");
    }   
    
    return 0;

}