/*Hacer un algoritmo que de por resultado esta figura                                                      
    *                                                                                                      
   ***                                                                                                     
  *****                                                                                                    
 *******                                                                                                   
*********                                                                                                  
                                                                                                           
*/ 

#include <stdio.h>

int main(){
    int largo,i,j,aux,ast=1,aux2=0;

    printf("Largo del triangulo: "); scanf("%i", &largo);

    aux = largo - 1;
 
    for (i = 0; i < largo; i++){
        for (j = 0; j < aux ; j++){
            printf(" ");
        }
        while (aux2 < ast ){
            printf("*");
            aux2++;
        }
        aux2 = 0;
        ast = ast + 2;
        printf("\n");
        aux--;
    }

    return 0;
}

/*MI OTRA VERSION

#include<stdio.h>

int main(){

int filas,aux,i=0,j=0,z=1,aux2=0;

printf("Ingrese un numero de filas: ");
scanf("%i",&filas);

aux = filas;

  while(i < filas){
    while(j < aux-1 ){
      printf(" ");
      j++;
    }

  while(aux2 < z){
          printf("*");
          aux2++;
  }

printf("\n");
aux2 = 0;
z = z + 2;
j = 0;
aux--;
i++;
  }

return 0;
}










*/