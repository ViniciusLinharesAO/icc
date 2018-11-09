#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **mat1,int **mat2, int *x1, int *y1, int *x2, int *y2) {
  int menuB(void);
  int i,j;
  printf("Digite a quantidade de linhas da Matriz 1: ");
  scanf("%d", x1);
  printf("Digite a quantidade de colunas da Matriz 1: ");
  scanf("%d", y1);
  **mat1 = (int **)malloc((*x1) * sizeof(int *));
    for (i=0; i < *x1; i++){
         mat1[i] = (int *)malloc((*y1) * sizeof(int));
    }
  for (int i = 0; i < *x1; i++) {
    for (int i = 0; i < *y1; i++) {
      scanf("%d", &(*mat1)[i][j]);
    }
  }
  printf("Digite a quantidade de linhas da Matriz 2: ");
  scanf("%d", x2);
  printf("Digite a quantidade de colunas da Matriz 2: ");
  scanf("%d", y2);
  *mat2 = (int *) malloc((*x2)*sizeof(int));
  for (int i = 0; i < *x2; i++) {
    for (int i = 0; i < *y2; i++) {
      scanf("%d", &(*mat2)[i][j]);
    }
  }
  menuB();
}
