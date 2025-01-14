/*Hacer un algoritmo que de por resultado esta figura     
   *
  ***
 *****
*******
 *****
  ***
   *
                                                                                                                                                                                                
*/ 

#include<stdio.h>

int main(){

int filas,aux,i=0,j=0,z=1,aux2=0;

printf("Ingrese un numero de filas: "); scanf("%i",&filas);

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

  z = 2 * (filas - 2) + 1;
  aux = filas - 1;

  for ( i = 1; i < filas; i++){
   for ( j = 0; j < filas - aux ; j++){
      printf(" ");
   }
   aux--;
  

   for (aux2 = 0; aux2 < z; aux2++){ 
         printf("*");
   }
  
   printf("\n");
   z = z - 2;

 }
  



return 0;
}