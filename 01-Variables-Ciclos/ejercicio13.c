/******************************************************************************
Escribe un programa que solicite al usuario ingresar tres numeros y luego los
imprima en orden ascendente.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num1, num2, num3;
    
    printf("Ingrese tres numeros: ");
    scanf("%i""%i""%i",&num1,&num2,&num3);
    
    if((num1<num2 && num2<num3)){
        printf ("%i %i %i",num1,num2,num3);
    }else if((num1<num3 && num3<num2)){
        printf("%i %i %i", num1,num3,num2);
    }else if(num2<num1 && num1<num3){
        printf("%i %i %i", num2,num1,num3);
    }else if(num2<num3 && num1>num3){
        printf("%i %i %i", num2,num3,num1);
    }else if(num3<num2 && num2<num1){
        printf("%i %i %i", num3,num2,num1);
    }else {
        printf("%i %i %i",num3,num1,num2);
    }
    
    return 0;
}
