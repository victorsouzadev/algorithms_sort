#include<stdio.h>


////////////////////////////////////////////////////////////////////////////////Insertion Sort
int insertion_sort(int input[],int tamanho){
  int j,i,temp,atribuicoes=0;
  for (j = 1; j < tamanho; j++) {
    temp = input[j];                atribuicoes++;
    i = j-1;                        atribuicoes++;
    while ((i >= 0) && ( input[i] > temp )) {
      input[i+1] = input[i];        atribuicoes++;
      i--;                          atribuicoes++;
    }
    input[i+1] = temp;              atribuicoes++;
  }


return atribuicoes;
}





////////////////////////////////////////////////////////////////////////////////Quick Sort
int partition(int input[],int p, int r){
  int x,i,j,temp;
  x = input[r];
  i = p - 1;
  for (j = p; j <= (r - 1) ; j++) {
    if (input[j] <= x){
        i = i + 1;
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
  }
  temp = input[i + 1];
  input[i + 1] = input[r];
  input[r] = temp;
  return (i+1);
}


void quick_sort(int input[], int p, int r){
  if (p < r){
    int q = partition(input,p,r);
    quick_sort(input,p,q-1);
    quick_sort(input,q+1,r);
  }
}

////////////////////////////////////////////////////////////////////////////////Bubble Sort
void bubble_sort(int list[], int n){
  int c, d, t;
  for (c = 0 ; c < n - 1; c++){
    for (d = 0 ; d < n - c - 1; d++){
      if (list[d] > list[d+1]){
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
