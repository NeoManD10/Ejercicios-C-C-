/*Escriba un algoritmo que imprima esta figura:                                                                                             
*                                                                                                          
**                                                                                                         
***                                                                                                        
****                                                                                                       
*****/ 

#include <stdio.h>

int main(){
    int num,i,j;

    printf("Ingresa la cantidad de filas que quiere: "); scanf("%i", &num);


for (i = 0; i < num ; i++){
    for ( j = 0; j <= i; j++){
        printf("*");
    }
    printf("\n");
}
    
    return 0;
}


/*Mi otra version usando while

#include<stdio.h>

int main(){

int filas,i=1,j=0;

printf("Ingrese la cantidad de filas que quiere: ");
scanf("%i",&filas);

  while(i <= filas){
    while(j != i){
      printf("*");
      j++;
    }
  printf("\n");
  j=0;
  i++;
  }

return 0;
}
*/

