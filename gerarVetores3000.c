#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"algoritmos_sort.h"

#define tamanho 3000
#define quantidade 6
#define dispersao 30000

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
     fprintf(arq,"%d\n",rand() % dispersao);                //quase_invertido em todas posições do vetor
  }
}


int NoventaPorCento = (int)(tamanho*0.9);
for (int j = 0; j < quantidade; j++) {
  FILE* arq;
  sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
  arq = fopen(endereco, "wt");
  for (int i = tamanho; i > -1;i--) {
    if(i < NoventaPorCento){
     fprintf(arq,"%d\n",i);
   }else{
     fprintf(arq,"%d\n",rand() % dispersao);
   }
  }
}


for (int j = 0; j < quantidade; j++) {
  FILE* arq;
  sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
  arq = fopen(endereco, "wt");
  for (int i = 0; i < tamanho;i++) {
    if(i < NoventaPorCento){
     fprintf(arq,"%d\n",i);
   }else{
     fprintf(arq,"%d\n",rand() % dispersao);
   }
  }
}


  return 0;
}
