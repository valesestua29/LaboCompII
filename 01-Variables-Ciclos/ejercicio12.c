/******************************************************************************
Desarrolla un juego en el que el programa selecciona un numero aleatorio entre
1 y 100, y el usuario intenta adivinarlo. El programa debe dar pistas (mayor/-
menor) y contar el numero de intentos.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));
    int numSecreto = rand() % 10 + 1; 
    
    int num,cont; 
    
    printf("Ingrese un numero: ");
    scanf("%i",&num);
    
    if(num==numSecreto){
        printf("Has Adivinado el numero!! ");
    }else{
        printf("\nEl numero ingresado es incorrecto\n\n");
        
        while (num!=numSecreto){
            
            printf("Ingrese un numero: ");
            scanf("%i",&num);
            
            cont++;
            
            if(num>numSecreto){
                printf("\nEl numero ingresado es mayor al buscado\n");
               
            }else if (num<numSecreto){
                printf("\nEl numero ingresado es menor al buscado\n");
            }else{
                printf("\nHas Adivinado el numero!! ");
            }
        }
        
        printf("\n\n La cantidad de intentos fueron %i ",cont);
    }
    
    
    


    return 0;
}
