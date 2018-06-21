#include<stdio.h>
#include <stdlib.h>
#include <time.h>
//#include<conio.h>
#include "algoritmos_sort.h"

#define tamanho 100

int main(void) {
  clock_t start, stop;


  int vetor[tamanho];


   //------------------------------------------ quase_invertido -----------------------------------------------------------//
 for (int i; i < tamanho;i++) {
    vetor[i] = (rand()%100);                          //quase_invertido em todas posições do vetor
  }


 //---------------------------------------- Quase ordenado ------------------------------------------------------//
/*
  int NoventaPorCento = (int)(tamanho*0.9);

  for (int i = 0; i < tamanho;i++) {
    if(i < NoventaPorCento){                        //Dez por cento em quase_invertido crescente na primeira parte do vetor
      vetor[i] = i;
    }
    else{                                           //quase_invertido nas demais posições do vetor
      vetor[i] =(rand()%4000);
    }
  }
*/

  //---------------------------------------- Quase invertida ------------------------------------------------------//
  /*
   int NoventaPorCento = (int)(tamanho*0.9), valor = 0;

   for (int i = tamanho; i > -1;i--) {

     if(i < NoventaPorCento){                        //Dez por cento em quase_invertido crescente na primeira parte do vetor
       vetor[i] = valor++;
     }
     else{                                           //quase_invertido nas demais posições do vetor
       vetor[i] = (rand()%4000);
     }
   }
*/


  start = clock();
  insertion_sort(vetor,tamanho);
  stop = clock();

  for (int i = 0; i < tamanho;i++) {
    printf("%i\n",vetor[i] );
  }






  printf("%li", stop - start);

  return 0;
}
