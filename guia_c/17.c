/*Escribe un programa que convierta un número entre sistemas binario, octal, decimal y hexadecimal.*/

#include <stdio.h>

void binario (int numero);

int main(){
    int salida,num;

    printf("Ingresa un numero: "); scanf("%i", &num);

    printf("\n1. Binario.");
    printf("\n2. Octal. "); 
    printf("\n3. Decimal. "); 
    printf("\n4. Hexadecimal. "); 
    printf("\n\nSelecciona el sistema numerico de salida: "); scanf("%i", &salida);
    


        switch (salida)
    {
    case 1 : // binario
        binario(num);
        printf("\n");
        break;
    case 2: // octal
        /* code */
        break;
    case 3: // decimal
        /* code */
        break;
    case 4: // hexadecimal
        /* code */
        break;
    
    default:
    printf("Opcion invalida.");
    return 1;
        break;
    }

    return 0;
}

void binario (int numero){
    int array[100],i=0,aux;

    while (numero >= 1){
        if (numero % 2 == 0){
            array[i] = 0;
            i++;
        }
        else{
            array[i] = 1;
            i++;
        }
        numero = numero / 2;
    }
    // Imprimir el binario en el orden correcto
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", array[j]);
    }
    printf("\n");
    // 1111110
}