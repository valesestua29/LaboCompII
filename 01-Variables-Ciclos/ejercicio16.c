/******************************************************************************
Desarrolla un programa que simule un cajero automatico. El usuario puede
realizar depositos, retiros y consultar su saldo.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int opc;
    float cantDepo, cantRetir, saldo, saldoFinal;
    
    saldo=0;
    
    do{
        printf("\n\n---- Menu de opciones ----\n");
        printf("\n1. Ingresar saldo");
        printf("\n2. Realizar depositos");
        printf("\n3. Relizar retiros");
        printf("\n4. Consultar saldo");
        printf("\n5. Salir");
        
        printf("\nIngrese una opcion: ");
        scanf("%i",&opc);
        
        switch(opc){
            case 1:
                printf("\n\nIngrese su saldo: ");
                scanf("%f",&saldo);
                break;
            
            case 2:
                printf("\n\nCantidad a depositar: ");
                scanf("%f", &cantDepo);
                
                saldo= saldo+cantDepo;
                printf("Depósito exitoso. Saldo actual: %.2f\n", saldo);
    
                break;
            case 3:
                printf("\n\nCantidad a retirar: ");
                scanf("%f", &cantRetir);
                
                if(cantRetir>saldo){
                    printf("\nNo hay suficiente saldo para realizar el retiro");
                }else{
                    saldo = saldo-cantRetir;
                    printf("\nTe quedan %.2f",saldo);
                }
                
                break;
                
            case 4:
                printf("\n\nSu saldo actual es: %.2f",saldo);
                break;
            case 5:
                break;
            default: 
            
        }
        
    }while(opc!=5);
    
    return 0;
}
