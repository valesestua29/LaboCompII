/* Contar digitos
Crea una funcion en C llamada contardigitos que acepte un numero entero
como parametro y devuelva la cantidad de dıgitos que tiene. Luego, modifica
un programa para utilizar esta funcion, solicitando al usuario un numero entero
y mostrando la cantidad de digitos que tiene. */

#include<stdio.h>
int contarDigitos(int num);

int main(){

    int num, cantDigitos;
    printf("Ingrese un numero: ");
    scanf("%i",&num);

    cantDigitos= contarDigitos(num);
    printf("%i es un numero de %i", num,cantDigitos);

    return 0;
}

int contarDigitos(int num){

    int cont=0;

    if(num==0){
        return 1;
    }else{
        while(num!=0){
            num=num/10;
            cont++;
        }
    }

    return cont;
}