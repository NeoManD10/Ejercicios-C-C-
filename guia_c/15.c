/*Crea un programa que lea una frase del usuario y cuente cuántas palabras contiene. 
Considera que las palabras están separadas por espacios.*/

#include <stdio.h> //Permite usar funciones de entrada y salida estándar, como printf y fgets.
#include <string.h> // Contiene funciones para manipular cadenas de caracteres, como strlen para obtener la longitud de una cadena.
#include <ctype.h> // Contiene funciones para manipular cadenas de caracteres, como strlen para obtener la longitud de una cadena.

#define MAX_LONGITUD 1000

int main() {
    char frase[MAX_LONGITUD];
    int contadorPalabras = 0;
    int enPalabra = 0; // Indica si estamos dentro de una palabra

    printf("Ingresa una frase: ");
    fgets(frase, MAX_LONGITUD, stdin); //Lee una línea de texto del usuario desde la entrada estandar (stdin) y la almacena en el arreglo frase.

    // Elimina el salto de línea al final si está presente
    size_t longitud = strlen(frase);
    if (longitud > 0 && frase[longitud - 1] == '\n') { // Verifica si el último carácter de la cadena es un salto de línea (\n) y lo reemplaza con un carácter nulo (\0) para eliminarlo.
        frase[longitud - 1] = '\0';
    }

    for (int i = 0; frase[i] != '\0'; i++) {
        if (!isspace(frase[i])) { // Verifica si el carácter actual no es un espacio en blanco u otro separador utilizando la función isspace.
            if (!enPalabra) {
                enPalabra = 1; // Comienza una nueva palabra
                contadorPalabras++;
            }
        } else {
            enPalabra = 0; // Salimos de una palabra
        }
    }

    printf("La frase contiene %d palabra(s).\n", contadorPalabras);

    return 0;
}
