#include <stdio.h>

// Prototipos de funciones
void binario(int numero);
void octal(int numero);
void decimal(int numero);
void hexadecimal(int numero);

int main() {
    int salida, num;

    printf("Ingresa un numero: ");
    scanf("%i", &num);

    printf("\n1. Binario.");
    printf("\n2. Octal.");
    printf("\n3. Decimal.");
    printf("\n4. Hexadecimal.");
    printf("\n\nSelecciona el sistema numerico de salida: ");
    scanf("%i", &salida);

    switch (salida) {
        case 1: // Binario
            printf("El numero en binario es: ");
            binario(num);
            printf("\n");
            break;
        case 2: // Octal
            printf("El numero en octal es: ");
            octal(num);
            printf("\n");
            break;
        case 3: // Decimal
            printf("El numero en decimal es: ");
            decimal(num);
            printf("\n");
            break;
        case 4: // Hexadecimal
            printf("El numero en hexadecimal es: ");
            hexadecimal(num);
            printf("\n");
            break;
        default:
            printf("Opcion invalida.");
            return 1;
    }

    return 0;
}

void binario(int numero) {
    int array[100], i = 0;

    while (numero >= 1) {
        array[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    // Imprimir el binario en el orden correcto
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", array[j]);
    }
}

void octal(int numero) {
    int array[100], i = 0;

    while (numero >= 1) {
        array[i] = numero % 8;
        numero = numero / 8;
        i++;
    }

    // Imprimir el octal en el orden correcto
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", array[j]);
    }
}

void decimal(int numero) {
    // El número ingresado ya está en decimal
    printf("%d", numero);
}

void hexadecimal(int numero) {
    char array[100];
    int i = 0;

    while (numero >= 1) {
        int resto = numero % 16;
        if (resto < 10) {
            array[i] = resto + '0'; // Convertir a carácter '0'-'9'
        } else {
            array[i] = resto - 10 + 'A'; // Convertir a carácter 'A'-'F'
        }
        numero = numero / 16;
        i++;
    }

    // Imprimir el hexadecimal en el orden correcto
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", array[j]);
    }
}
