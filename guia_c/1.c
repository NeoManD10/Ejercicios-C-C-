/*Escriba un algoritmo que lea 10 números e imprima sólo los números positivos                             
  En este caso usaremos solo 10 numeros */  

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
  
int main(){
    int min=-10, max=10,i=1,j=1;
    int num_aleatorio[i];

// Inicializar la semilla para números aleatorios
    srand(time(NULL));

// Generar un número aleatorio entre -10 y 10
   while (j <= 10){
      num_aleatorio[i] = (rand() % 21 + min); // Se genera un numero entre 0 y 20. El "+ min" es para que el numero comience de un negativo y cuente hacia adelante.
      if (num_aleatorio[i] > 0){
        printf("Entre %d y %d: %d\n", min, max, num_aleatorio[i]);
        i++;
      }
      i++;
      j++;
   }
   
return 0;
}