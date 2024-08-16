/******************************************************************************
Desarrollar un programa que encuentre el dıgito mas significativo de un numero
ingresado por el usuario utilizando punteros.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int num, *punt;

    printf("Ingrese un número: ");
    scanf("%d", &num);

    punt=&num;
    
    // Si el número es negativo, conviértelo a positivo
    if (*punt < 0) {
        *punt *= -1;
    }

    // Encuentra el dígito más significativo
    int masSignificativo = 0;
    int *punt2;
    
    punt2 = &masSignificativo;
    
    while (*punt > 0) {
        *punt2 = *punt % 10;
        *punt /= 10;
    }

    printf("El dígito más significativo es %d\n", masSignificativo);
    
    return 0;
}
