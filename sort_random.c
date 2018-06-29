#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"algorithms_sort.h"



//#define tamanho 9000
#define quantidade 6
#define menorTamanho 5000
#define maiorTamanho 15000
#define intervalo 5000

int main(void){

  time_t t;
  clock_t start, stop;
  long tempos[9][quantidade];
  srand((unsigned) time(&t));
  int tamanho = 0;
  char endereco[50];

int i = 0;
for (tamanho = menorTamanho; tamanho <= maiorTamanho; tamanho+=intervalo) {
  
      // Leitura, preenchimento e ordação por meio do Bubble Sort
      int vetor[tamanho];
      for (int j = 0; j < quantidade; j++) {
        //Abrir arquivo pra leitura
        FILE* readArq;
        sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
        readArq = fopen(endereco,"r");

        //Preencher vetor
        for (int i = 0; i < tamanho;i++) {
          fscanf(readArq,"%i\n",&vetor[i]);
        }

        ///Ordenar e obter tempo

        start = clock();
        bubble_sort(vetor,tamanho);
        stop = clock();
        tempos[i][j] = (stop - start);//(CLOCKS_PER_SEC / 1000);


      }
      i++;


      // Leitura, preenchimento e ordação de vetor por meio do Quick Sort
      for (int j = 0; j < quantidade; j++) {
        //Abrir arquivo pra leitura
        FILE* readArq;
        sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
        readArq = fopen(endereco,"r");

        //Preencher vetor
        for (int i = 0; i < tamanho;i++) {
          fscanf(readArq,"%i\n",&vetor[i]);
        }

        ///Ordenar e obter tempo
        start = clock();
        insertion_sort(vetor,tamanho);
        stop = clock();
        tempos[i][j] = (stop - start);//(CLOCKS_PER_SEC / 1000);
       
      }
      i++;
      // Leitura, preenchimento e ordação de vetor por meio do Quick Sort
      for (int j = 0; j < quantidade; j++) {
        //Abrir arquivo pra leitura
        FILE* readArq;
        sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
        readArq = fopen(endereco,"r");

        //Preencher vetor
        for (int i = 0; i < tamanho;i++) {
          fscanf(readArq,"%i\n",&vetor[i]);
        }

        ///Ordenar e obter tempo
        start = clock();
        quick_sort(vetor,0,tamanho);
        stop = clock();
        tempos[i][j] = (stop - start);//(CLOCKS_PER_SEC / 1000);
      }
      i++;

  }







FILE* csv;
csv = fopen("outputs/tempo_de_processador_random.csv","wt");
fprintf(csv,"arquivo\ttamanho\tBubble Sort\tInsertion Sort\tQuick Sort\t\n");
for (int j = 1; j < quantidade; j++) {
  fprintf(csv,"%i\t5000\t",j);
  for (int i = 0; i < 3; i++) {
    fprintf(csv,"%li\t",tempos[i][j]);
  }

  fprintf(csv,"\n");
}
fprintf(csv,"\n\n\t\tmedia\n\n");


fprintf(csv,"arquivo\ttamanho\tBubble Sort\tInsertion Sort\tQuick Sort\t\n");

for (int j = 1; j < quantidade; j++) {
  fprintf(csv,"%i\t10000\t",j);
  for (int i = 3 ; i < 6; i++) {
    fprintf(csv,"%li\t",tempos[i][j]);
  }

  fprintf(csv,"\n");
}
fprintf(csv,"\n\n\t\tmedia\n\n");


fprintf(csv,"arquivo\ttamanho\tBubble Sort\tInsertion Sort\tQuick Sort\t\n");
for (int j = 1; j < quantidade; j++) {
  fprintf(csv,"%i\t15000\t",j);
  for (int i = 6 ; i < 9; i++) {
    fprintf(csv,"%li\t",tempos[i][j]);
  }

  fprintf(csv,"\n");
}
fprintf(csv,"\n\n\t\tmedia\n\n");




  return 0;
}
