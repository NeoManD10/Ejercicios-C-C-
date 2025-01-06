#include <stdio.h>

int main(){
    int num,i=1;

    printf("Ingrese en numero de la tabla que quiere: ");
    scanf("%i", &num);
 
    while (i <= 10){
        printf("%i * %i = %i\n", num, i, (num * i));
        i += 1;
    }
    
    return 0;
}