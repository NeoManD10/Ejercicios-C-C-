/*Crea un programa que funcione como un intérprete de comandos simple, aceptando entradas como ls, cd y cat e implementando una 
funcionalidad básica para cada comando.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <fcntl.h>

#define MAX_INPUT 256

// Función para listar archivos (ls)
void ejecutarLS() {
    DIR* directorio;
    struct dirent* entrada;

    directorio = opendir(".");
    if (directorio == NULL) {
        perror("Error al abrir el directorio");
        return;
    }

    printf("Archivos en el directorio actual:\n");
    while ((entrada = readdir(directorio)) != NULL) {
        printf("%s\n", entrada->d_name);
    }
    closedir(directorio);
}

// Función para cambiar directorio (cd)
void ejecutarCD(char* ruta) {
    if (chdir(ruta) == -1) {
        perror("Error al cambiar de directorio");
    } else {
        printf("Directorio cambiado a: %s\n", ruta);
    }
}

// Función para mostrar el contenido de un archivo (cat)
void ejecutarCAT(char* archivo) {
    int fd = open(archivo, O_RDONLY);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return;
    }

    char buffer[1024];
    ssize_t bytesLeidos;

    while ((bytesLeidos = read(fd, buffer, sizeof(buffer) - 1)) > 0) {
        buffer[bytesLeidos] = '\0';
        printf("%s", buffer);
    }

    if (bytesLeidos == -1) {
        perror("Error al leer el archivo");
    }

    close(fd);
}

// Función principal del intérprete
int main() {
    char entrada[MAX_INPUT];
    char* comando;
    char* argumento;

    printf("Intérprete de comandos simple. Escribe 'exit' para salir.\n");

    while (1) {
        printf("> ");
        fflush(stdout);

        // Leer entrada del usuario
        if (fgets(entrada, MAX_INPUT, stdin) == NULL) {
            break;
        }

        // Eliminar el salto de línea final
        entrada[strcspn(entrada, "\n")] = '\0';

        // Salir si el comando es "exit"
        if (strcmp(entrada, "exit") == 0) {
            printf("Saliendo...\n");
            break;
        }

        // Separar comando y argumento
        comando = strtok(entrada, " ");
        argumento = strtok(NULL, " ");

        // Procesar los comandos
        if (strcmp(comando, "ls") == 0) {
            ejecutarLS();
        } else if (strcmp(comando, "cd") == 0) {
            if (argumento == NULL) {
                printf("Uso: cd <ruta>\n");
            } else {
                ejecutarCD(argumento);
            }
        } else if (strcmp(comando, "cat") == 0) {
            if (argumento == NULL) {
                printf("Uso: cat <archivo>\n");
            } else {
                ejecutarCAT(argumento);
            }
        } else {
            printf("Comando no reconocido: %s\n", comando);
        }
    }

    return 0;
}
