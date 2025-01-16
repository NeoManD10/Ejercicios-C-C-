/*Crea un programa que reciba una matriz de N x M y calcule su transpuesta.*/

#include <stdio.h>

#define MAX_FILAS 100
#define MAX_COLUMNAS 100

int main() {
    int matriz[MAX_FILAS][MAX_COLUMNAS];
    int transpuesta[MAX_COLUMNAS][MAX_FILAS];
    int filas, columnas;

    // Solicitar dimensiones de la matriz
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    // Solicitar elementos de la matriz
    printf("Ingrese los elementos de la matriz (%d x %d):\n", filas, columnas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular la transpuesta
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Mostrar la matriz original
    printf("\nMatriz original (%d x %d):\n", filas, columnas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Mostrar la matriz transpuesta
    printf("\nMatriz transpuesta (%d x %d):\n", columnas, filas);
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
