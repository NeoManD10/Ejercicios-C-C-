/*Escribe un programa que reciba un número entero positivo y determine si es primo. 
Luego, modifica el programa para imprimir todos los números primos hasta ese número.*/

#include <stdio.h>
#include <stdbool.h>

// Función para determinar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false; // 0 y 1 no son primos
    }

    for (int i = 2; i * i <= num; i++) { // Solo hasta la raíz cuadrada
        if (num % i == 0) {
            return false; // No es primo si es divisible por i
        }
    }

    return true; // Es primo si no encontró divisores
}

// Función principal
int main() {
    int n;

    printf("Ingresa un número entero positivo: ");
    scanf("%d", &n);

    // Verificar si el número ingresado es primo
    if (esPrimo(n)) {
        printf("%d es un número primo.\n", n);
    } else {
        printf("%d no es un número primo.\n", n);
    }

    // Listar todos los números primos hasta n
    printf("Números primos hasta %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
