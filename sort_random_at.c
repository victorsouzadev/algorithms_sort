#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"algorithms_sort_assignments.h"

//#define tamanho 9000
#define quantidade 6

int main(void){

  time_t t;
  clock_t start, stop;
  long tempos[9][quantidade];
  srand((unsigned) time(&t));
  int tamanho = 0;
  char endereco[50];

// Gerar txt com vetores random
/*
for (int j = 0; j < quantidade; j++) {
  FILE* arq;
  sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
  arq = fopen(endereco, "wt");
  for (int i = 0; i < tamanho;i++) {
     fprintf(arq,"%d\n",rand() % 200000);                //random em todas posições do vetor
  }
}
*/



for (int i = 0; i < 3; i++) {
  switch (i){
    case 0:{
      tamanho=3000;
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

        
        int atribuicoes = bubble_sort(vetor,tamanho);
        tempos[0][j] = atribuicoes;
      }



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
         ///Ordenar e obter atribuições
        int atribuicoes = insertion_sort(vetor,tamanho);
        tempos[1][j] = atribuicoes;
      }
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

        ///Ordenar e obter atribuições
        int atribuicoes = quick_sort(vetor,0,tamanho);
        tempos[2][j] = atribuicoes;
      }

      break;
    }
    case 1:{
      tamanho=5000;
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

       ///Ordenar e obter atribuições
        int atribuicoes = bubble_sort(vetor,tamanho);
        tempos[3][j] = atribuicoes;
      }



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

        ///Ordenar e obter atribuições
        int atribuicoes = insertion_sort(vetor,tamanho);
        tempos[4][j] = atribuicoes;
      }
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
         ///Ordenar e obter atribuições
        int atribuicoes = quick_sort(vetor,0,tamanho);
        tempos[5][j] = atribuicoes;

      }


      break;
    }

    case 2:{
      tamanho=7000;
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

       ///Ordenar e obter atribuições
        int atribuicoes = bubble_sort(vetor,tamanho);
        tempos[6][j] = atribuicoes;
      }



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

        ///Ordenar e obter atribuições
        int atribuicoes = insertion_sort(vetor,tamanho);
        tempos[7][j] = atribuicoes;
      }
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
         ///Ordenar e obter atribuições
        int atribuicoes = quick_sort(vetor,0,tamanho);
        tempos[8][j] = atribuicoes;


      }
      break;
    }


  }
}








FILE* csv;
csv = fopen("outputs/atribuicoes_random.csv","wt");
fprintf(csv,"Bubble Sort;Insertion Sort;Quick Sort;\n");
for (int j = 1; j < quantidade; j++) {
  //fprintf(csv,"%i;\n",j);
  for (int i = 0; i < 3; i++) {
    fprintf(csv,"%li;",tempos[i][j]);
  }

  fprintf(csv,"\n");
}

for (int j = 1; j < quantidade; j++) {
  //fprintf(csv,"%i;\n",j);
  for (int i = 3 ; i < 6; i++) {
    fprintf(csv,"%li;",tempos[i][j]);
  }

  fprintf(csv,"\n");
}
for (int j = 1; j < quantidade; j++) {
  //fprintf(csv,"%i;\n",j);
  for (int i = 6 ; i < 9; i++) {
    fprintf(csv,"%li;",tempos[i][j]);
  }

  fprintf(csv,"\n");
}





  return 0;
}
