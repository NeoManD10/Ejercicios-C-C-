#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ALUMNOS 10
#define NUM_NOTAS 5

int main(){
    //Semilla para generar numeros aleatorios
    srand(time(NULL));

    //Arreglo para almacenar notas
    double notas[NUM_ALUMNOS][NUM_NOTAS];

    //Bucle para notas aleatorias entre 0 y 10
    for(int i = 0; i < NUM_ALUMNOS; i++){
        for (int j = 0; j < NUM_NOTAS; j++){
            notas[i][j] = (double)(rand() % 110 / 10.0);
        }    
    }

        // Cálculo del promedio de cada alumno y su impresión                             
    for (int i = 0; i < NUM_ALUMNOS; i++) {                                           
        double suma = 0.0;                                                            
                                                                                      
        for (int j = 0; j < NUM_NOTAS; j++) {                                         
            suma += notas[i][j];                                                      
        }                                                                             
                                                                                      
        double promedio = suma / NUM_NOTAS;                                           
        printf("Alumno %d - Promedio: %.2f\n", i + 1, promedio);                      
    }                                                                      




    return 0;
}