/*Escriba un algoritmo que lea un número entero y cuente sus dígitos, entregando el total                  
  de ellos, Ejemplo: se lee el 357, debe imprimir 3; si lee el 39721 debe imprimir 5.*/ 

#include <stdio.h>

int main(){
    int num, i;

    printf("Ingrese un numero: "); scanf("%i", &num);

    while (num > 0){
      num = num / 10;
      i++;
    }
    printf("%i\n", i);
    
    return 0;
}