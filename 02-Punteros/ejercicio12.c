/******************************************************************************
Crear un programa que encuentre la suma de los dıgitos de un numero ingresado
por el usuario utilizando punteros.
*******************************************************************************/

#include <stdio.h>
int main(){
    
    int num, *ptr;
    
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    
    ptr = &num; // Asignamos la dirección de memoria de 'num' al puntero
    
    // Iteramos sobre cada dígito del número
    while (*ptr > 0) {
        suma += *ptr % 10; // Obtenemos el dígito actual y lo sumamos
        *ptr /= 10; // Pasamos al siguiente dígito
    }

    printf("La suma de los digitos del numero ingresado es: %d\n", suma);
    
    return 0;
}
