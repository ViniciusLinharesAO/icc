// #############################################################################
//        **``CALCULADORA COM OPERAÇÕES DE VETORES E MATRIZES´´**
//        **``UNIVERSIDADE ESTADUAL DO CEARÁ - CIÊNCIA DA COMPUTAÇÃO´´**
//Autores: - Davi Luis Barbosa Silve
//         - Dedyanna Carla de Almeida Cacau
//         - Vinícius Linhares Alves de Oliveira
//               **``FORTALEZA/CE-2018´´**
//##############################################################################
// **``BLIBIOTECA DE OPERAÇÕES DAS MATRIZES´´**
#include <stdio.h>
#include <stdlib.h>
int lerDnvMat=0;
//**FUNÇÃO DE LEITURA DAS MATRIZES**//
void lerMatriz(int ***mat1,int ***mat2, int *x1, int *y1, int *x2, int *y2) {
  int menuC(void);
  int i,j;
  if(lerDnvMat==1){
    printf("Sobrescrever as matrizes?( 1=Sim / 0=Não ): ");
    free(**mat1);
    free(**mat2);
    scanf("%d", &i);
    if (i==0) {
      menuC();
    }
    if (i==1) {
      lerDnvMat=0;
      printf("Digite a quantidade de linhas da Matriz 1: ");
      scanf("%d", x1);
      printf("Digite a quantidade de colunas da Matriz 1: ");
      scanf("%d", y1);
      (*mat1) = (int **)malloc((*x1) * sizeof(int *));
      for (i=0; i < *x1; i++){
        (*mat1)[i] = (int *)malloc((*y1) * sizeof(int *));
      }
      printf("insira os valores\n");
      for (i = 0; i < *x1; i++) {
        for (j = 0; j < *y1; j++) {
          printf("[%d][%d]: ", i+1, j+1);
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
      printf("insira os valores\n");
      for (i = 0; i < *x2; i++) {
        for (j = 0; j < *y2; j++) {
          printf("[%d][%d]: ", i+1, j+1);
          scanf("%d", &(*mat2)[i][j]);
        }
      }
      lerDnvMat++;
    }
    if(i!=0 && i!=1){
      printf("Opção inválida, digite 0 para voltar para o menu: ");
      scanf("%d", &i);
    }
  }
  if(lerDnvMat==0){
    lerDnvMat=0;
    printf("Digite a quantidade de linhas da Matriz 1: ");
    scanf("%d", x1);
    printf("Digite a quantidade de colunas da Matriz 1: ");
    scanf("%d", y1);
    (*mat1) = (int **)malloc((*x1) * sizeof(int *));
    for (i=0; i < *x1; i++){
      (*mat1)[i] = (int *)malloc((*y1) * sizeof(int *));
    }
    printf("insira os valores\n");
    for (i = 0; i < *x1; i++) {
      for (j = 0; j < *y1; j++) {
        printf("[%d][%d]: ", i+1, j+1);
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
    printf("insira os valores\n");
    for (i = 0; i < *x2; i++) {
      for (j = 0; j < *y2; j++) {
        printf("[%d][%d]: ", i+1, j+1);
        scanf("%d", &(*mat2)[i][j]);
      }
    }
    lerDnvMat++;
  }
  printf("\nDigite 0 para voltar: ");
  scanf("%d", &i);
  menuC();
}
//**FUNÇÃO DE SOMA ENTRE AS MATRIZES**//
int soma2Mat(int **mat1,int **mat2, int x1, int y1, int x2, int y2){
  int menuC(void);
  int i, j;
  if(x1==x2 && y1==y2){
    for (i = 0; i < x1; i++) {
      for (j = 0; j < y1; j++) {
        printf("%d ", ((mat1)[i][j])+((mat2)[i][j]));
      }
      printf("\n");
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
//**FUNÇÃO DE MULTIPLICAÇÃO ENTRE AS MATRIZES**//
int Mul2mat(int **mat1,int **mat2, int x1, int y1, int x2, int y2) {
  int menuC(void);
  int i, j, k, n;
  printf("1. A*B\n2. B*A\nOperação 1 ou 2: ");
  scanf("%d", &n);
  if (n == 1) {
    if (y1 == x2) {
      int mulVet[x1][y2];
      for (i = 0; i < x1; i++){
        for (j = 0; j < y2; j++){
          mulVet[i][j] = 0;
          for (k = 0; k < x2; k++){
            mulVet[i][j] = mulVet[i][j] + mat1[i][k] * mat2[k][j];
          }
        }
      }
      for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
          printf("%d ", (mulVet)[i][j]);
        }
        printf("\n");
      }
    }else{
      printf("Operação impossível!!");
    }
  }
  if (n == 2) {
    if (y2 == x1) {
      int mulVet2[x2][y1];
      for (i = 0; i < x2; i++){
        for (j = 0; j < y1; j++){
          mulVet2[i][j] = 0;
          for (k = 0; k < x1; k++){
            mulVet2[i][j] = mulVet2[i][j] + mat2[i][k] * mat1[k][j];
          }
        }
      }
      for (i = 0; i < x2; i++) {
        for (j = 0; j < y1; j++) {
          printf("%d ", (mulVet2)[i][j]);
        }
        printf("\n");
      }
    }else{
      printf("Operação impossível!!");
    }
  }
  if (n != 1 && n != 2) {
    printf("Opção inválida!\n");
    printf("\nDigite 0 para voltar: ");
    scanf("%d", &k);
    menuC();
  }
  printf("\nDigite 0 para voltar: ");
  scanf("%d", &i);
  menuC();
}
//**FUNÇÃO DE TRANSPOSTA DA MATRIZ**//
int transMat(int **mat1,int **mat2, int x1, int y1, int x2, int y2) {
  int menuC(void);
  int i, j, k;
  printf("Matriz 1 ou 2: ");
  scanf("%d", &k);
  if (k==1 || k==2) {
    if (k==1) {
      for (j = 0; j < y1; j++) {
        for (i = 0; i < x1; i++) {
          printf("%d ", (mat1)[i][j]);
        }
        printf("\n");
      }
    }
    if (k==2) {
      for (j = 0; j < y2; j++) {
        for (i = 0; i < x2; i++) {
          printf("%d ", (mat2)[i][j]);
        }
        printf("\n");
      }
    }
  }else{
    printf("Escolha inválida!!\n");
  }
  printf("\nDigite 0 para voltar: ");
  scanf("%d", &i);
  menuC();
}
//**FUNÇÃO DO DETERMINANTE DAS MATRIZ**//
int deterMat(int **mat1,int **mat2, int x1, int y1, int x2, int y2) {
  int menuC(void);
  int k,d;
  printf("Apenas no caso da matriz 1x1, 2x2, ou 3x3\nMatriz 1 ou 2: ");
  scanf("%d", &k);
  if (k==1) {
    if (x1 == y1) {
      if(x1 == 3){
        d = ((mat1)[0][0]*(mat1)[1][1]*(mat1)[2][2] +
             (mat1)[0][1]*(mat1)[1][2]*(mat1)[2][0] +
             (mat1)[0][2]*(mat1)[1][0]*(mat1)[2][1])
            -
            ((mat1)[0][2]*(mat1)[1][1]*(mat1)[2][0] +
             (mat1)[0][0]*(mat1)[1][2]*(mat1)[2][1] +
             (mat1)[0][1]*(mat1)[1][0]*(mat1)[2][2]);
        printf("%d\n", d);
        scanf("%d", &k);
        menuC();
      }
      if (x1 == 2) {
        d = ((mat1)[0][0]*(mat1)[1][1])
            -
            ((mat1)[0][1]*(mat1)[1][0]);
        printf("%d\n", d);
        scanf("%d", &k);
        menuC();
      }
      if (x1 == 1) {
        d = (mat1)[0][0];
        printf("%d\n", d);
        scanf("%d", &k);
        menuC();
      }
      if (x1 != 1 && x1 != 2 && x1 != 3) {
        printf("Tamanho inválido!\n");
        printf("\nDigite 0 para voltar: ");
        scanf("%d", &k);
        menuC();
      }
    }else{
      printf("Tamanhos diferentes!\n");
      printf("\nDigite 0 para voltar: ");
      scanf("%d", &k);
      menuC();
    }
  }
  if (k==2) {
    if (x2 == y2) {
      if(x2 == 3){
        d = ((mat2)[0][0]*(mat2)[1][1]*(mat2)[2][2] +
             (mat2)[0][1]*(mat2)[1][2]*(mat2)[2][0] +
             (mat2)[0][2]*(mat2)[1][0]*(mat2)[2][1])
            -
            ((mat2)[0][2]*(mat2)[1][1]*(mat2)[2][0] +
             (mat2)[0][0]*(mat2)[1][2]*(mat2)[2][1] +
             (mat2)[0][1]*(mat2)[1][0]*(mat2)[2][2]);
        printf("%d\n", d);
        scanf("%d", &k);
        menuC();
      }
      if (x2 == 2) {
        d = ((mat2)[0][0]*(mat2)[1][1])
            -
            ((mat2)[0][1]*(mat2)[1][0]);
        printf("%d\n", d);
        scanf("%d", &k);
        menuC();
      }
      if (x2 == 1) {
        d = (mat2)[0][0];
        printf("%d\n", d);
        scanf("%d", &k);
        menuC();
      }
      if (x1 != 1 && x1 != 2 && x1 != 3) {
        printf("Tamanho inválido!\n");
        printf("\nDigite 0 para voltar: ");
        scanf("%d", &k);
        menuC();
      }
    }else{
      printf("Tamanhos diferentes!\n");
      printf("\nDigite 0 para voltar: ");
      scanf("%d", &k);
      menuC();
    }
  }
  if (k!=1 && k!=2) {
    printf("Opção inválida!\n");
    printf("\nDigite 0 para voltar: ");
    scanf("%d", &k);
    menuC();
  }
}
//**FUNÇÃO DE VERIFICAÇÃO SIMÉTRICA DA MATRIZ**//
int simMat(int **mat1,int **mat2, int x1, int y1, int x2, int y2) {
  int menuC(void);
  int i, j, k, sim1[x1][y1], sim2[x2][y2];
  printf("Matriz 1 ou 2: ");
  scanf("%d", &k);
  if (k==1) {
    if (x1==y1){
      for (j = 0; j < y1; j++) {
        for (i = 0; i < x1; i++) {
          (sim1)[j][i] = (mat1)[i][j];
        }
      }
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
      if (i == x1) {
        printf("A matriz é simetrica.\n");
      }else{
        printf("A matriz não é simetrica.\n");
      }
    }else{
      printf("A matriz não é simetrica.\n");
    }
  }
  if (k==2) {
    for (j = 0; j < y2; j++) {
      for (i = 0; i < x2; i++) {
        (sim2)[j][i] = (mat2)[i][j];
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
