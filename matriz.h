#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int ***mat1,int ***mat2, int *x1, int *y1, int *x2, int *y2) {
  int menuC(void);
  int i,j;
  printf("Digite a quantidade de linhas da Matriz 1: ");
  scanf("%d", x1);
  printf("Digite a quantidade de colunas da Matriz 1: ");
  scanf("%d", y1);
  (*mat1) = (int **)malloc((*x1) * sizeof(int *));
  for (i=0; i < *x1; i++){
    (*mat1)[i] = (int *)malloc((*y1) * sizeof(int *));
  }
  for (i = 0; i < *x1; i++) {
    for (j = 0; j < *y1; j++) {
      scanf("%d", &(*mat1)[i][j]);
    }
  }
  printf("Digite a quantidade de linhas da Matriz 2: ");
  scanf("%d", x2);
  printf("Digite a quantidade de colunas da Matriz 2: ");
  scanf("%d", y2);
  (*mat2) = (int **)malloc((*x2) * sizeof(int *));
  for (i=0; i < *x2; i++){
    (*mat2)[i] = (int *)malloc((*y2) * sizeof(int *));
  }
  for (i = 0; i < *x2; i++) {
    for (j = 0; j < *y2; j++) {
      scanf("%d", &(*mat2)[i][j]);
    }
  }
  printf("\nDigite 0 para voltar: ");
  scanf("%d", &i);
  menuC();
}

int soma2Mat(int **mat1,int **mat2, int x1, int y1, int x2, int y2){
  int menuC(void);
  int i, j;
  if(x1==x2 && y1==y2){
    for (i = 0; i < x1; i++) {
      for (j = 0; j < y1; j++) {
        printf("%d ", ((mat1)[i][j])+((mat2)[i][j]));
        if(j==(x1)-1){printf("\n");}
      }
    }
    printf("\nDigite 0 para voltar: ");
    scanf("%d", &i);
    menuC();
  }
  else{
    printf("Matrizes com tamanhos diferentes!\n");
    printf("\nDigite 0 para voltar: ");
    scanf("%d", &i);
    menuC();
  }
}

int Mul2mat(int **mat1,int **mat2, int x1, int y1, int x2, int y2) {
  int menuC(void);
  int i, j, k;
  int mulVet[x1][y2];
  for (i = 0; i < x1; i++){
    for (j = 0; j < y1; j++){
      mulVet[i][j] = 0;
      for (k = 0; k < y1; k++){
        mulVet[i][j] = mulVet[i][j] + mat1[i][k] * mat2[k][j];
      }
    }
  }
  for (i = 0; i < x1; i++) {
    for (j = 0; j < y1; j++) {
      printf("%d ", (mulVet)[i][j]);
      if(j==(x1)-1){printf("\n");}
    }
  }
  printf("\nDigite 0 para voltar: ");
  scanf("%d", &i);
  menuC();
}

int transMat(int **mat1,int **mat2, int x1, int y1, int x2, int y2) {
  int menuC(void);
  int i, j, k;
  printf("Matriz 1 ou 2: ");
  scanf("%d", &k);
  if (k==1) {
    for (j = 0; j < x1; j++) {
      for (i = 0; i < y1; i++) {
        printf("%d ", (mat1)[i][j]);
        if(i==(x1)-1){printf("\n");}
      }
    }
  }else{
    for (j = 0; j < x2; j++) {
      for (i = 0; i < y2; i++) {
        printf("%d ", (mat2)[i][j]);
        if(i==(x2)-1){printf("\n");}
      }
    }
  }
  printf("\nDigite 0 para voltar: ");
  scanf("%d", &i);
  menuC();
}








int simMat(int **mat1,int **mat2, int x1, int y1, int x2, int y2) {
  int menuC(void);
  int i, j, k, sim1[x1][y1], sim2[x2][y2];
  printf("Matriz 1 ou 2: ");
  scanf("%d", &k);
  if (k==1) {
    for (j = 0; j < x1; j++) {
      for (i = 0; i < y1; i++) {
        (sim1)[i][j] = (mat1)[i][j];
      }
    }
    if (x1==y1){
      for (i = 0; i < x1; i++){
        for (j = 0; j < y1; j++){
          if ((mat1)[i][j] != (sim1)[i][j]){
            break;
          }
        }
        if (j != y1){
          break;
        }
      }
      if (i == x1)
        printf("A matriz é simetrica.\n");
      else
        printf("A matriz não é simetrica.\n");
    }else{
      printf("A matriz não é simetrica.\n");
    }
  }

  if (k==2) {
    for (j = 0; j < x2; j++) {
      for (i = 0; i < y2; i++) {
        (sim2)[i][j] = (mat2)[i][j];
      }
    }
    if (x2==y2){
      for (i = 0; i < x2; i++){
        for (j = 0; j < y2; j++){
          if ((mat2)[i][j] != (sim2)[i][j]){
            break;
          }
        }
        if (j != y2){
          break;
        }
      }
      if (i == x2)
        printf("A matriz é simetrica.\n");
      else
        printf("A matriz não é simetrica.\n");
    }else{
      printf("A matriz não é simetrica.\n");
    }
  }

  if (k != 1 && k != 2) {
    printf("Opção inválida!\n");
    printf("\nDigite 0 para voltar: ");
    scanf("%d", &i);
    menuC();
  }

  printf("\nDigite 0 para voltar: ");
  scanf("%d", &i);
  menuC();
}
