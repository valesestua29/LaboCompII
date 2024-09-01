/* Ejercicio integrador */

/* Escribir un programa en C que solicite al usuario ingresar la cantidad de numeros que
desea procesar. Luego, el programa debe solicitar al usuario que ingrese esos numeros
uno por uno. Utilizando punteros, el programa debe calcular y mostrar la suma y el 
producto de los numeros ingresados

El programa debera cumplir con los siguientes requisitos: 

- utilizar punteros para acceder a los numeros ingresados
- utilizar las funciones scanf y printf para interactuar con el usuario
- utilizar un ciclo para procesar los numeros ingresados */

#include <stdio.h>
int main(){

    int cant, i, num, suma=0, prod=1;
    int *a; 

    printf("Digite la cantidad de numeros a ingresar: ");
    scanf("%i",&cant);

    for(i=0; i<cant; i++){
        printf("Ingrese el nro %i ): ",i+1);
        scanf("%i",&num);

        a = &num; 
        suma= suma + *a;
        prod= prod * (*a);
    }

    printf("\n\n la suma de los numeros ingresados es %i", suma);
    printf("\n\n El producto de los numeros ingresados es %i", prod);

    return 0;
}
