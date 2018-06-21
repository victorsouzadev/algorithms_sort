#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"algoritmos_sort.h"

#define tamanho 3000
#define quantidade 50

int main(void){

  time_t t;
  clock_t start, stop;
  long tempos[3][quantidade];
  srand((unsigned) time(&t));

  char endereco[50];

// Gerar txt com vetores quase_invertido


for (int j = 0; j < quantidade; j++) {
  FILE* arq;
  sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
  arq = fopen(endereco, "wt");
  for (int i = 0; i < tamanho;i++) {
     fprintf(arq,"%d\n",i);
  }
}


// Leitura, preenchimento e ordação por meio do Bubble Sort
int vetor[tamanho];
for (int j = 0; j < quantidade; j++) {
  //Abrir arquivo pra leitura
  FILE* readArq;
  sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
  readArq = fopen(endereco,"r");

  //Preencher vetor
  for (int i = 0; i < tamanho;i++) {
    fscanf(readArq,"%i\n",&vetor[i]);
  }

  ///Ordenar e obter tempo

  start = clock();
  bubble_sort(vetor,tamanho);
  stop = clock();
  tempos[0][j] = stop - start;
}



// Leitura, preenchimento e ordação de vetor por meio do Quick Sort
for (int j = 0; j < quantidade; j++) {
  //Abrir arquivo pra leitura
  FILE* readArq;
  sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
  readArq = fopen(endereco,"r");

  //Preencher vetor
  for (int i = 0; i < tamanho;i++) {
    fscanf(readArq,"%i\n",&vetor[i]);
  }

  ///Ordenar e obter tempo
  start = clock();
  quick_sort(vetor,0,tamanho);
  stop = clock();
  tempos[1][j] = stop - start;
}

// Leitura, preenchimento e ordação de vetor por meio do Quick Sort
for (int j = 0; j < quantidade; j++) {
  //Abrir arquivo pra leitura
  FILE* readArq;
  sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
  readArq = fopen(endereco,"r");

  //Preencher vetor
  for (int i = 0; i < tamanho;i++) {
    fscanf(readArq,"%i\n",&vetor[i]);
  }

  ///Ordenar e obter tempo
  start = clock();
  insertion_sort(vetor,tamanho);
  stop = clock();
  tempos[2][j] = stop - start;
}







FILE* csv;
csv = fopen("outputs/tempo_de_processador_quase_invertido.csv","wt");
for (int i = 0; i < 3; i++) {
  fprintf(csv,"%i;",i);
  for (int j = 0; j < quantidade; j++) {
    fprintf(csv,"%li;",tempos[i][j]);

  }
  fprintf(csv,"\n");
}






  return 0;
}
