/*
Crear una calculadora con funciones que contengan parametros
*/

#include <stdio.h>

//Declaracion de funciones
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);
void menu();

//Programa principal

int main(){
    menu();
    return 0;
}

//Funcion vacia menu principal

void menu(){

    int opcion , num_a , num_b;

printf("1. Sumar\n");
printf("2. Restar\n");
printf("3. Multiplicar\n");
printf("4. Dividir\n");

printf("Digite su opcion: "); scanf("%i", &opcion);

printf("Numero a: "); scanf("%i", &num_a);
printf("Numero b: "); scanf("%i", &num_b);

//switch para escoger opciones

switch (opcion)
{
case 1:
    printf("Resultado: %i\n", sumar(num_a, num_b));
    break;
case 2:
    printf("Resultado: %i\n", restar(num_a, num_b));
    break;
case 3:
    printf("Resultado: %i\n", multiplicar(num_a, num_b));
    break;
case 4:
    printf("Resultado: %i\n", dividir(num_a, num_b));
    break;
default:
printf("Opcion Invalida.");
    break;
}

}

//Funciones

int sumar(int a, int b){
    return a + b;
}

int restar(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if (b == 0){
        printf("No existe.\n");
        return 0;
    }
    else{
        return a / b;

    }
}



