/*
Crea un programa que simule una cuenta de ahorro. El usuario ingresa la
cantidad de dinero que quiere ahorrar mensualmente. El programa debe calcular
cuanto dinero habra acumulado en un año considerando un interes fijo mensual
del 35%.

*/

#include <stdio.h>

int main(){
    
    float dinero, dineroAcum;
    int i;
    
    printf("Digite la cantidad de dinero a ingresar: $");
    scanf("%f",&dinero);
    
    for(i=1;i<=12;i++){
        dineroAcum=dineroAcum+dinero*35/100;   
    }
    printf("El total acumulado en un año es $%.2f",dineroAcum);
    
    
    return 0;
}
