/*Escribir un algoritmo que lea 10 números enteros mayores que 100 y entregue la suma del                  
último dígito de cada uno de ellos. Ej. Se ingresan 231, 140, 105, 2341, 9876, 315,111,7685,               
654322,987, el programa debe entregar: 33                                                                  
Sugerencia: Use MOD y divida por 10 para obtener dígito.*/ 

#include <stdio.h>

int main(){
    int i,num,aux=0,resul=0;
    
    for ( i = 0; i < 10; i++){
        printf("Ingrese un numero mayor que 100: "); scanf("%i", &num);
        if (num < 100){
            printf("Siga las instrucciones!!\n");
            return 0;
        }
        else{
            aux = num % 10;
            resul = resul + aux;
        }
    }

    printf("La suma de los ultimos digitos de los numeros es: %i\n", resul);
    



    return 0;
}