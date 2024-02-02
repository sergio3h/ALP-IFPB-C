
#include <stdio.h>
const int ordem =3;

void imprimiDiagonal(int mat[ordem][ordem], int n){
  if(n==0){
    printf("%d ", mat[0][0]);
    return;
  }
  if(n>0){
    imprimiDiagonal(mat,n-1);
    printf("%d ",mat[n][n]);
  }

}

void main(){
  int mat[ordem][ordem];
  int n,k,j;

  for(k=0;k<ordem;k++){
    for(j=0;j<ordem;j++){
      printf("Digite a matriz podisção %d %d: ",k+1,j+1);
      scanf("%d",&mat[k][j]);
    }
  }
  for(k=0;k<ordem;k++){
    for(j=0;j<ordem;j++){
      printf("%d ",mat[k][j]);
    }
    printf("\n");
  }
  printf("Digite o valor de N: ");
  scanf("%d",&n);
  n=n-1;

  imprimiDiagonal(mat,n);
}
