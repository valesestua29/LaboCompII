/*  EJERCICIO INTEGRADOR ----------- 

Escribe un programa en C que permita calcular el área y el perímetro de diferentes formas geométricas. 
El programa debe presentar un menú con las siguientes opciones:
1. Calcular área y perímetro de un cuadrado.
2. Calcular área y perímetro de un rectángulo.
3. Calcular área y perímetro de un círculo.
4. Salir.

Para cada opción seleccionada por el usuario, el programa debe solicitar los datos necesarios para 
realizar los cálculos y luego mostrar los resultados.El cálculo de las áreas y perímetros debe ser 
realizado mediante funciones separadas para cada tipo de forma geométrica. 
Estas funciones deben recibir los datos necesarios como parámetros y devolver los resultados mediante
parámetros por referencia. El programa debe continuar ejecutándose hasta que el usuario seleccione la 
opción para salir. Utiliza el valor de π como 3.14159 para los cálculos del círculo. */

#include<stdio.h>
void areaPerimCuadrado(float *a);
void areaPerimRectangulo(float *a, float *b);
void areaPerimCirculo(float *a);

int main(){

    int opc;
    float lado1, lado2, radio; 

    do{
        printf ("\n\n--- MENU DE OPCIONES ---\n\n");
        printf ("1. Calcular area y perimetro de un cuadrado.\n");     
        printf ("2. Calcular area y perimetro de un rectangulo.\n"); 
        printf ("3. Calcular area y perimetro de un circulo.\n"); 
        printf ("4. Salir\n\n"); 

        scanf("%d",&opc);


        switch(opc){
            case 1:
                    printf("\nIngrese el largo del lado del cuadrado: ");
                    scanf("%f",&lado1);
                    areaPerimCuadrado(&lado1);
                    break;

            case 2: 
                    printf("\nIngrese el lado 1 del rectangulo: ");
                    scanf("%f",&lado1);
                    printf("\nIngrese el lado 2 del rectangulo: ");
                    scanf("%f", &lado2);

                    areaPerimRectangulo(&lado1, &lado2);
                    break;

            case 3:
                    printf("\nIngrese el radio del circulo: ");
                    scanf("%f",&radio);

                    areaPerimCirculo(&radio);
                    break;

            case 4:
                    break;

            default:
                    printf("\n\n El numero ingresado no es correcto \n\n");
                    break;
        }

    }while(opc!=4);

    return 0;
}


void areaPerimCuadrado(float *a ){

    float area, perimetro;
    area=(*a)*(*a);
    perimetro=4*(*a);
    printf("\nEl area del cuadrado es: %.2f ",area);
    printf("\nEl perimetro del cuadrado es: %.2f \n\n",perimetro);
}


void areaPerimRectangulo(float *a, float *b){

    float area, perimetro;
    area= (*a) * (*b) ;
    perimetro= 2*(*a)+2*(*b);
    printf("\nEl area del rectangulo es: %.2f ",area);
    printf("\nEl perimetro del rectangulo es: %.2f \n\n",perimetro);
}


void areaPerimCirculo(float *a){

    float area, perimetro, pi;
    pi=3.1418;
    area= pi*(*a) ; 
    perimetro=pi*(*a)*2;

    printf("\nEl area del rectangulo es: %.2f ",area);
    printf("\nEl perimetro del rectangulo es: %.2f \n\n",perimetro);
}