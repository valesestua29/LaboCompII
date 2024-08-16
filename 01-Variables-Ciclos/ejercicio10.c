/*
Escribe un programa que calcule el IMC de una persona. El usuario debe
ingresar su peso en kilogramos y su altura en metros. El programa debe imprimir
el IMC y una categorıa correspondiente (bajo peso, peso normal, sobrepeso,
etc.).

*/

#include <stdio.h>

int main(){
    
    float peso, altura, imc;
    
    printf("Ingrese su peso en kilogramos: ");
    scanf("%f",&peso);
    printf("Ingrese su altura: ");
    scanf("%f",&altura);
    
    imc= peso / ((altura/100)*(altura/100)) ;
    
    if(imc<=18.5){
        printf("Peso inferior al normal");
    }else if(imc>18.5 && imc<=24.9){
        printf("Peso normal");
    }else if(imc>24.9 && imc<=29.9){
        printf("Peso superior al normal");
    }else{
        printf("Obesidad");
    }
    
    return 0;
}
