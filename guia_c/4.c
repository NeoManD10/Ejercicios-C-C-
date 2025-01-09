/*Escribir un algoritmo que lea 10 números enteros mayores que 100 y entregue la suma del                  
primer dígito de cada uno de ellos. Ej. Se ingresan 231, 140, 105, 2341, 9876, 315,111,7685,               
654322,987, el programa debe entregar: 41*/ 

#include <stdio.h>

int main(){
    int i,num[10],res=0,contador;

    for(i = 0; i < 10; i++){
        printf("Ingresa un numero mayor que 100: "); scanf("%i", &num[i]);

        if (num[i] < 100){
            printf("Sigue las instrucciones!!\n");
            return 0;
        }
    }

    for (i = 0; i < 10; i++){
        while (num[i] >= 10){
            num[i] = num[i] / 10;
        }   

        res = res + num[i];
    }
    

    printf("La suma del primer digito de cada numero es: %i\n", res);

    return 0;
}