/* Generar fibonacci
Completa un programa en C que imprima una secuencia de Fibonacci de longitud n, donde n es un numero 
ingresado por el usuario. Define una funcion llamada generarfibonacci que tome un parametro n y 
genere la secuencia correspondiente. */

#include<stdio.h>
void generarfibonacci(int num);

int main(){

    int num;

    printf("Ingrese un numero: ");
    scanf("%i",&num);
    generarfibonacci(num);

}

void generarfibonacci(int num){

    int i, a=0, b=1, next; 

    if(num<=0){
        printf("Error");
    }else{
        for(i=1; i<=num; i++){
            printf("%i ", a);
            next = a + b;
            a = b;
            b = next;
        }
        printf("\n");
    }
}