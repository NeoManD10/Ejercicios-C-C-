/*5. Escriba un algoritmo que lea números enteros, hasta que se ingrese un número negativo. El             
Algoritmo debe entregar la suma de aquellos números pares ingresados.                                      
*/                                                                                                         

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i,num[10],resul=0;
    int aux=10;

    printf("Se muestra en la salida 10 numeros aleatorios.\nSe suman los numeros pares SÓLO si no ha salido un numero negativo.\nSi aparece un negativo desaparece la cuenta de los numeros pares positivos.\n\n");

    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    for(i = 0; i < 10; i++){
        num[i] = ((rand() % 21) - aux); //Numero aleatorio entre -10 y 10
        printf("%i\n", num[i]);
    }

    i = 0;
    while(i < 10){
        // Terminar si encontramos un número negativo
        if (num[i] < 0) {
            if(num[i] < 0 && i == 0){
                printf("\n¡¡El primer numero es negativo, por lo que no hay suma de numeros pares.!!\n\n");
                return 0;
            }
            printf("\n\nLa suma de los números pares es: %i\n\n", resul);
            return 0;
        }

        // Sumar números pares
        if (num[i] % 2 == 0) {
            resul += num[i];
            printf("\nNÚMERO PAR: %i\n", num[i]);
        }
        i++;
    }
    
    return 0;
}