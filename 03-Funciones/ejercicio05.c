/* Es primo
Desarrolla una funcion en C llamada esprimo que reciba un numero entero
como entrada y devuelva 1 si el numero es primo, o 0 en caso contrario. Luego,
escribe un programa que solicite un numero al usuario y utilice esta funcion
para determinar si es primo o no, mostrando el resultado correspondiente. */

#include<stdio.h>
int esprimo(int num);
int main(){

    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    esprimo(num);

    return 0; 
}

int esprimo(int num){

    if ((num%num==0)&&(num%1==0)){
        return 1;
    }else{
        return 0;
    }

    return 1;
}