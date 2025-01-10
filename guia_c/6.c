/*6. Escribe un algoritmo que lea un RUT y calcule el dígito verificador. La idea es que realices          
este ejercicio usando: Estructura cíclica y MOD. El Algoritmo deberá mostrar, finalmente, el               
número completo: Ej, se ingresa el número 20573464 y se debe imprimir: 20573464-3

LOGICA DEL ALGORITMO

Para el RUT 20885694, de derecha a izquierda:
Dígitos:         2   0   8   8   5   6   9   4
Multiplicadores: 3   2   7   6   5   4   3   2

(4 × 2) + (9 × 3) + (6 × 4) + (5 × 5) + (8 × 6) + (8 × 7) + (0 × 2) + (2 × 3)
= 8 + 27 + 24 + 25 + 48 + 56 + 0 + 6 = 194

194 % 11 = 7

Dígito verificador = 11 - Resto
= 11 - 7 = 4
*/ 

#include <stdio.h>
#include <string.h>

int main() {
    char rut[20];
    int sum = 0, mult = 2, digit, length, total_suma, verificador;

    printf("Ingresa tu RUT sin el dígito verificador (ej: 20573464): ");
    scanf("%s", rut);

    length = strlen(rut); // calcular el número de caracteres del RUT ingresado.
    printf("%i", length);

    // Iterar sobre el RUT desde el último dígito al primero
    for (int i = length - 1; i >= 0; i--) {
        digit = rut[i] - '0';  // Convertir carácter a entero 
        /* 
        Por si no se entiende esta parte
        Si rut[i] es '5':

        El valor ASCII de '5' es 53.
        El valor ASCII de '0' es 48.
        
        Entonces 
        digit = 53 - 48 = 5
        */
        
        sum = sum + (digit * mult);
        mult++;
        if (mult > 7) {
            mult = 2; // Reiniciar el multiplicador a 2
        }
    }

    total_suma = sum % 11; 
    verificador = 11 - total_suma;

    char caracter_verificador;
    if (verificador == 11) { // Si el verificador es 11 se toma por defecto como '0'.
        caracter_verificador = '0';
    } else if (verificador == 10) { // Si el verificador es 10 se toma por defecto como 'k'
        caracter_verificador = 'K';
    } else {
        caracter_verificador = verificador + '0';  // Convertir número a carácter. Es lo mismo pero al reves, por eso se suma.                     
    }

    printf("El RUT completo es: %s-%c\n", rut, caracter_verificador);

    return 0;
}