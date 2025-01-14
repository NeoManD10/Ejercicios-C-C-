/* Implementa una lista enlazada que permita:

    Insertar elementos al principio y al final.
    Eliminar elementos por valor.
    Buscar elementos. */

#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

// Función para crear un nuevo nodo
Nodo* crearNodo(int dato) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}

// Insertar al principio
void insertarInicio(Nodo** cabeza, int dato) {
    Nodo* nuevoNodo = crearNodo(dato);
    nuevoNodo->siguiente = *cabeza;
    *cabeza = nuevoNodo;
    printf("Elemento %d insertado al principio.\n", dato);
}

// Insertar al final
void insertarFinal(Nodo** cabeza, int dato) {
    Nodo* nuevoNodo = crearNodo(dato);
    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
        printf("Elemento %d insertado al final (lista vacía).\n", dato);
        return;
    }
    Nodo* actual = *cabeza;
    while (actual->siguiente != NULL) {
        actual = actual->siguiente;
    }
    actual->siguiente = nuevoNodo;
    printf("Elemento %d insertado al final.\n", dato);
}

// Eliminar por valor
void eliminarPorValor(Nodo** cabeza, int valor) {
    Nodo* actual = *cabeza;
    Nodo* anterior = NULL;

    // Buscar el nodo con el valor
    while (actual != NULL && actual->dato != valor) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        printf("Elemento %d no encontrado.\n", valor);
        return;
    }

    // Eliminar el nodo
    if (anterior == NULL) { // Eliminar la cabeza
        *cabeza = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }
    free(actual);
    printf("Elemento %d eliminado.\n", valor);
}

// Buscar un elemento
Nodo* buscar(Nodo* cabeza, int valor) {
    Nodo* actual = cabeza;
    while (actual != NULL) {
        if (actual->dato == valor) {
            return actual;
        }
        actual = actual->siguiente;
    }
    return NULL;
}

// Mostrar la lista
void mostrarLista(Nodo* cabeza) {
    Nodo* actual = cabeza;
    printf("Lista: ");
    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
}

// Liberar memoria de la lista
void liberarLista(Nodo** cabeza) {
    Nodo* actual = *cabeza;
    Nodo* siguiente;
    while (actual != NULL) {
        siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
    *cabeza = NULL;
    printf("Memoria liberada.\n");
}

// Programa principal
int main() {
    Nodo* lista = NULL;

    insertarInicio(&lista, 10);
    insertarInicio(&lista, 20);
    insertarFinal(&lista, 30);
    insertarFinal(&lista, 40);

    mostrarLista(lista);

    eliminarPorValor(&lista, 20);
    mostrarLista(lista);

    Nodo* encontrado = buscar(lista, 30);
    if (encontrado != NULL) {
        printf("Elemento %d encontrado.\n", encontrado->dato);
    } else {
        printf("Elemento no encontrado.\n");
    }

    liberarLista(&lista);
    return 0;
}
