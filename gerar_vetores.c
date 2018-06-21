#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include"algorithms_sort.h"

//#define tamanho 3000
#define quantidade 6
#define dispersao 30000

int main(void){

  time_t t;
  clock_t start, stop;
  long tempos[3][quantidade];
  srand((unsigned) time(&t));
  int tamanho = 0;
  char endereco[50];

  for (int i = 0; i < 3; i++) {
    switch (i) {
   


    	// Vetores com tamanho 3000
      case 0:{
        tamanho = 3000;
        // Random
        for (int j = 0; j < quantidade; j++) {
          FILE* arq;                                                                    // cria o ponteira pro arquivo
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");         //concatena as string com os inteiros j = "versao do arquivo", tamanho = "O tamanho"
          arq = fopen(endereco, "wt");                                                  //abre o arquivo para escrita

          for (int i = 0; i < tamanho;i++) {
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve um numero aleatorio em cada linha do arquivo
          }
          fclose(arq);
        }

        // Quase invertido
        int NoventaPorCento = (int)(tamanho*0.9);                                       //indica a quantidade de elementos do 90% do tamanho;
        for (int j = 0; j < quantidade; j++) {

          FILE* readArq;
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
          readArq = fopen(endereco,"rt");                                                //abre arquivo random para leitura
          int vetor[tamanho];
          for (int i = 0; i < tamanho;i++) {
            //fgets(linha,100,readArq);
            fscanf(readArq,"%i\n",&vetor[i]);                                           //armazena em um vetor temporario

            //Preencher vetor
          }
          quick_sort(vetor,0,tamanho);                                                  //ordena esse vetor

          FILE* arq;
          sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
          arq = fopen(endereco, "wt");

          for (int i = tamanho; i > 0;i--) {
            if(i < NoventaPorCento){
             fprintf(arq,"%d\n",vetor[i]);                                              //escreve em ordem decrescente 90% do vetor ordenado
           }else{
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve o restante aleatoriamente
           }
          }
          fclose(arq);
        }

        // Quase ordenado
        for (int j = 0; j < quantidade; j++) {
          FILE* readArq;
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
          readArq = fopen(endereco,"r");                                                //abre arquivo random para leitura
          int vetor[tamanho];
          //Preencher vetor

          for (int i = 0; i < tamanho;i++) {
            fscanf(readArq,"%i\n",&vetor[i]);                                           //armazena em um vetor temporario
          }
          quick_sort(vetor,0,tamanho);                                                  //ordena esse vetor


          FILE* arq;
          sprintf(endereco,"%s%d%s%d%s","inputs/quase_ordenado/",j,"_",tamanho,".txt");
          arq = fopen(endereco, "wt");

          for (int i = 0; i < tamanho;i++) {
            if(i < NoventaPorCento){
             fprintf(arq,"%d\n",vetor[i]);                                              //escreve em ordem crescente 90% do vetor ordenado
           }else{
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve o restante aleatoriamente
           }
          }
          fclose(arq);
        }
        break;
      }



      //// Vetores com tamanho de 6000
      case 1:{
        tamanho = 5000;
        for (int j = 0; j < quantidade; j++) {
          FILE* arq;                                                                    // cria o ponteira pro arquivo
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");         //concatena as string com os inteiros j = "versao do arquivo", tamanho = "O tamanho"
          arq = fopen(endereco, "wt");                                                  //abre o arquivo para escrita

          for (int i = 0; i < tamanho;i++) {
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve um numero aleatorio em cada linha do arquivo
          }
          fclose(arq);
        }

        // Quase invertido
        int NoventaPorCento = (int)(tamanho*0.9);                                       //indica a quantidade de elementos do 90% do tamanho;
        for (int j = 0; j < quantidade; j++) {

          FILE* readArq;
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
          readArq = fopen(endereco,"rt");                                                //abre arquivo random para leitura
          int vetor[tamanho];
          for (int i = 0; i < tamanho;i++) {
            //fgets(linha,100,readArq);
            fscanf(readArq,"%i\n",&vetor[i]);                                           //armazena em um vetor temporario

            //Preencher vetor
          }
          quick_sort(vetor,0,tamanho);                                                  //ordena esse vetor

          FILE* arq;
          sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
          arq = fopen(endereco, "wt");

          for (int i = tamanho; i > 0;i--) {
            if(i < NoventaPorCento){
             fprintf(arq,"%d\n",vetor[i]);                                              //escreve em ordem decrescente 90% do vetor ordenado
           }else{
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve o restante aleatoriamente
           }
          }
          fclose(arq);
        }

        // Quase ordenado
        for (int j = 0; j < quantidade; j++) {
          FILE* readArq;
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
          readArq = fopen(endereco,"r");                                                //abre arquivo random para leitura
          int vetor[tamanho];
          //Preencher vetor

          for (int i = 0; i < tamanho;i++) {
            fscanf(readArq,"%i\n",&vetor[i]);                                           //armazena em um vetor temporario
          }
          quick_sort(vetor,0,tamanho);                                                  //ordena esse vetor


          FILE* arq;
          sprintf(endereco,"%s%d%s%d%s","inputs/quase_ordenado/",j,"_",tamanho,".txt");
          arq = fopen(endereco, "wt");

          for (int i = 0; i < tamanho;i++) {
            if(i < NoventaPorCento){
             fprintf(arq,"%d\n",vetor[i]);                                              //escreve em ordem crescente 90% do vetor ordenado
           }else{
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve o restante aleatoriamente
           }
          }
          fclose(arq);
        }
        break;
      }

      //
      case 2:{
        tamanho = 7000;
        for (int j = 0; j < quantidade; j++) {
          FILE* arq;                                                                    // cria o ponteira pro arquivo
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");         //concatena as string com os inteiros j = "versao do arquivo", tamanho = "O tamanho"
          arq = fopen(endereco, "wt");                                                  //abre o arquivo para escrita

          for (int i = 0; i < tamanho;i++) {
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve um numero aleatorio em cada linha do arquivo
          }
          fclose(arq);
        }

        // Quase invertido
        int NoventaPorCento = (int)(tamanho*0.9);                                       //indica a quantidade de elementos do 90% do tamanho;
        for (int j = 0; j < quantidade; j++) {

          FILE* readArq;
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
          readArq = fopen(endereco,"rt");                                                //abre arquivo random para leitura
          int vetor[tamanho];
          for (int i = 0; i < tamanho;i++) {
            //fgets(linha,100,readArq);
            fscanf(readArq,"%i\n",&vetor[i]);                                           //armazena em um vetor temporario

            //Preencher vetor
          }
          quick_sort(vetor,0,tamanho);                                                  //ordena esse vetor

          FILE* arq;
          sprintf(endereco,"%s%d%s%d%s","inputs/quase_invertido/",j,"_",tamanho,".txt");
          arq = fopen(endereco, "wt");

          for (int i = tamanho; i > 0;i--) {
            if(i < NoventaPorCento){
             fprintf(arq,"%d\n",vetor[i]);                                              //escreve em ordem decrescente 90% do vetor ordenado
           }else{
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve o restante aleatoriamente
           }
          }
          fclose(arq);
        }

        // Quase ordenado
        for (int j = 0; j < quantidade; j++) {
          FILE* readArq;
          sprintf(endereco,"%s%d%s%d%s","inputs/random/",j,"_",tamanho,".txt");
          readArq = fopen(endereco,"r");                                                //abre arquivo random para leitura
          int vetor[tamanho];
          //Preencher vetor

          for (int i = 0; i < tamanho;i++) {
            fscanf(readArq,"%i\n",&vetor[i]);                                           //armazena em um vetor temporario
          }
          quick_sort(vetor,0,tamanho);                                                  //ordena esse vetor


          FILE* arq;
          sprintf(endereco,"%s%d%s%d%s","inputs/quase_ordenado/",j,"_",tamanho,".txt");
          arq = fopen(endereco, "wt");

          for (int i = 0; i < tamanho;i++) {
            if(i < NoventaPorCento){
             fprintf(arq,"%d\n",vetor[i]);                                              //escreve em ordem crescente 90% do vetor ordenado
           }else{
             fprintf(arq,"%d\n",rand() % dispersao);                                    //escreve o restante aleatoriamente
           }
          }
          fclose(arq);
        }
        break;
      }
    }
  }





  return 0;
}
