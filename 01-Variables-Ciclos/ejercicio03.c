/* Verificacion de año bisiesto

Escribe un programa que solicite al usuario un año e imprima si es bisiesto o no. Un año es bisiesto 
si es derivable por 4 pero no por 100, o si es divisible por 400 */

#include <stdio.h>
int main() {

    int num; 
    printf("Ingresa un año: ");
    scanf("%i", &num);

    if(((num%4==0)&&(num%100==0))||(num%400==0)){
        printf("%i es bisiesto", num);
    }else {
        printf("%i no es bisiesto", num);
    }

    return 0;
}