/* Encontrar menor 

Escribe una funcion en C llamada encontrarmenor que tome tres numeros enteros como entrada y devuelva el menor 
de los tres como resultado. Luego, escribe un programa que solicite tres numeros al usuario,
utilice esta funcion para encontrar el menor, y finalmente imprima el resultado. */

#include<stdio.h>
void encontrar_menor(int num1, int num2, int num3);

int main(){

    int num1, num2, num3;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);
    printf("Ingrese un numero: ");
    scanf("%i", &num2);
    printf("Ingrese un numero: ");
    scanf("%i", &num3);


    encontrar_menor(num1, num2, num3);
    return 0;
}

void encontrar_menor(int num1, int num2, int num3){

    if((num1<num2)&&(num1<num3)){
        printf("\n\n%i es el menor", num1);
    }else if ((num2<num1)&&(num2<num3)){
        printf("\n\n%i es el menor", num2);
    }else if ((num3<num1)&&(num3<num2)){
        printf("\n\n%i es el menor", num3);
    }else{
        printf("\n\n Los numeros son iguales");
    }

}

