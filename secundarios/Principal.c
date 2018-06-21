#include"algoritmos_sort.h"
#include<time.h>
#include<unistd.h>
#include <stdlib.h>

#define tamanho 100

int main(void) {
  clock_t start, stop;
  long tempos[3][20];

  //long a[]= {1,2,3,4,5,6,7,10,9,0}, t=10;
  //bubbleSort(a,t);
  time_t t;
  int vetor[tamanho];

   int n = 100;

   /* Intializes quase_invertido number generator */
   srand((unsigned) time(&t));

   for (int i; i < tamanho;i++) {
      vetor[i] = rand() % 3000;                //quase_invertido em todas posições do vetor
   }
   for (int i = 0; i < tamanho;i++) {
     printf("%i\n",vetor[i] );
   }

  //int a[]= {1,2,3,4,5,6,7,10,9,0};
  //QuickSort(a,0,9);



  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 20; j++) {

      if(i==0){

        start = clock();
        insertion_sort(vetor,tamanho);
        stop = clock();
        tempos[i][j] = stop - start;
      }else if(i==1){
        start = clock();
        quick_sort(vetor,0,tamanho-1);
        stop = clock();
        tempos[i][j] = stop - start;
      }else if(i==2){
        start = clock();
        bubble_sort(vetor,tamanho);
        stop = clock();
        tempos[i][j] = stop - start;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 20; j++) {
      printf("%li ", tempos[i][j]);
    }
    printf("\n");
  }



//printf("%li\n",stop -start );
  return 0;



}
