/*Escribe una función recursiva que calcule el factorial de un número.
#1, 2, 6, 24, 120, 720, 5040
# 1 * 2* 3* 4* 5

*/
#include<stdio.h>
#include<stdlib.h>

int fact (int n);

int main(){
    int num;

    printf("Ingrese un numero: "); scanf("%i", &num);
    system("clear");
    printf("Factorial de %i: %i\n",num,fact(num));

    return 0;
}

int fact (int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * fact(n - 1);
    }
}