/*Escriba un algoritmo que imprima esta figura:                                                            
*****                                                                                                     
****                                                                                                      
***                                                                                                       
**                                                                                                        
*                                                                                                         
                                              */
                                             
#include<stdio.h>

int main(){
    int filas,i,j,aux;

    printf("Ingrese una cantidad de filas: "); scanf("%i", &filas);

    aux = filas;

    for (i = 0; i < filas; i++){
        for (j = 0; j < aux; j++){
            printf("*");
        }
        aux--;
        printf("\n");
    }
    





    return 0;
}
