#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"algorithms_sort.h"



//#define tamanho 9000
#define quantidade 6
#define menorTamanho 3000
#define maiorTamanho 7000
#define intervalo 2000

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
        sprintf(endereco,"%s%d%s%d%s","inputs/quase_ordenado/",j,"_",tamanho,".txt");
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
        sprintf(endereco,"%s%d%s%d%s","inputs/quase_ordenado/",j,"_",tamanho,".txt");
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
        sprintf(endereco,"%s%d%s%d%s","inputs/quase_ordenado/",j,"_",tamanho,".txt");
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
csv = fopen("outputs/tempo_de_processador_quase_ordenado.csv","wt");
fprintf(csv,"Bubble Sort\tInsertion Sort\tQuick Sort\t\n");
for (int j = 1; j < quantidade; j++) {
  //fprintf(csv,"%i;\n",j);
  for (int i = 0; i < 3; i++) {
    fprintf(csv,"%li\t",tempos[i][j]);
  }

  fprintf(csv,"\n");
}

for (int j = 1; j < quantidade; j++) {
  //fprintf(csv,"%i;\n",j);
  for (int i = 3 ; i < 6; i++) {
    fprintf(csv,"%li\t",tempos[i][j]);
  }

  fprintf(csv,"\n");
}
for (int j = 1; j < quantidade; j++) {
  //fprintf(csv,"%i;\n",j);
  for (int i = 6 ; i < 9; i++) {
    fprintf(csv,"%li\t",tempos[i][j]);
  }

  fprintf(csv,"\n");
}





  return 0;
}
