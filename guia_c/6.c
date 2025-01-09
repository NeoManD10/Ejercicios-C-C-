/*6. Escribe un algoritmo que lea un RUT y calcule el dígito verificador. La idea es que realices          
este ejercicio usando: Estructura cíclica y MOD. El Algoritmo deberá mostrar, finalmente, el               
número completo: Ej, se ingresa el número 20573464 y se debe imprimir: 20573464-3*/ 

#include <stdio.h>
#include <string.h>

int main() {
    char rut[20];
    int sum = 0, multiplier = 2, digit, length, remainder, verifier;

    printf("Ingresa tu RUT sin el dígito verificador (ej: 20573464): ");
    scanf("%s", rut);

    length = strlen(rut); // calcular el número de caracteres del RUT ingresado.

    // Iterar sobre el RUT desde el último dígito al primero
    for (int i = length - 1; i >= 0; i--) {
        digit = rut[i] - '0';  // Convertir carácter a entero
        sum += digit * multiplier;
        multiplier++;
        if (multiplier > 7) {
            multiplier = 2; // Reiniciar el multiplicador a 2
        }
    }

    remainder = sum % 11; 
    verifier = 11 - remainder;

    char verifier_char;
    if (verifier == 11) {
        verifier_char = '0';
    } else if (verifier == 10) {
        verifier_char = 'K';
    } else {
        verifier_char = verifier + '0';  // Convertir número a carácter
    }

    printf("El RUT completo es: %s-%c\n", rut, verifier_char);

    return 0;
}