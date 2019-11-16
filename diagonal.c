#include <stdio.h>
#define m 3
int main(int argc, char const *argv[]) {
  int i;
  int j;
  int counter=0;
  int matrix[m][m]={4,-1,1, 4,-8,1, -2,1,5};
  int total;
  for(i=0;i<m;i++){
    total = 0;
    for(j=0;j<m;j++){
      if(i != j){
        total += abs(matrix[i][j]);
      }
    }
    if(abs(matrix[i][i])> total){
        counter++;
    }
  }
    if(counter == m){
        printf("Diagonal weight matrix");
    }
    else
        printf("Not Diagonal weight matrix");
  return 0;
}
