#include<stdio.h>


////////////////////////////////////////////////////////////////////////////////Insertion Sort
int insertion_sort(int input[],int tamanho){
  int j,i,temp,atribuicoes=0;
  for (j = 1; j < tamanho; j++) {
    temp = input[j];                
    i = j-1;
    atribuicoes+=3;              
    while ((i >= 0) && ( input[i] > temp )) {
      input[i+1] = input[i];        
      i--;
      atribuicoes+=4;                          
    }
    input[i+1] = temp;
    atribuicoes++;              
  }


return atribuicoes;
}





////////////////////////////////////////////////////////////////////////////////Quick Sort


int quick_sort(int input[], int p, int r){
  int static atribuicoes_quick_sort=0;
    int x,i,j,temp;
  if (p < r){
    atribuicoes_quick_sort++;
     x = input[r];
     i = p - 1;
     atribuicoes_quick_sort +=2;
  for (j = p; j <= (r - 1) ; j++) {
    atribuicoes_quick_sort++;
    if (input[j] <= x){
        i = i + 1;
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        atribuicoes_quick_sort +=5;
    }
  }
  temp = input[i + 1];
  input[i + 1] = input[r];
  input[r] = temp;
  atribuicoes_quick_sort += 3;


    int q =i+1;
    atribuicoes_quick_sort++;
    quick_sort(input,p,q-1);
    quick_sort(input,q+1,r);
  }
  return atribuicoes_quick_sort;
}

////////////////////////////////////////////////////////////////////////////////Bubble Sort
int bubble_sort(int list[], int n){
  int c, d, t,atribuicoes = 0;
  for (c = 0 ; c < n - 1; c++){
    atribuicoes++;
    for (d = 0 ; d < n - c - 1; d++){
      atribuicoes++;
      if (list[d] > list[d+1]){
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
        atribuicoes+=4;
      }
    }
  }
  return atribuicoes;
}
