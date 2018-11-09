#include <stdio.h>
#include <stdlib.h>

void lerVetor(int **vet1,int **vet2, int *n1, int *n2) {
  int menuB(void);
  printf("Digite o tamanho do Vetor 1: ");
  scanf("%d", n1);
  *vet1 = (int *) malloc((*n1)*sizeof(int));
  for (int i = 0; i < *n1; i++) {
    scanf("%d", &(*vet1)[i]);
  }
  printf("Digite o tamanho do Vetor 2: ");
  scanf("%d", n2);
  *vet2 = (int *) malloc((*n2)*sizeof(int));
  for (int i = 0; i < *n2; i++) {
    scanf("%d", &(*vet2)[i]);
  }
  menuB();
}

int soma2Vet(int *vet1, int *vet2, int n1, int n2){
  int menuB(void);
  int i;
  if(n1==n2){
    for (i = 0; i < n1; i++) {
      printf("%d ", vet1[i]+vet2[i]);
      if(i<n1-1){ printf("\n"); }
    }
    printf("\n\nDigite 0 para voltar\n");
    scanf("%d", &i);
    menuB();
  }
}

int mulEsc(int *vet1, int *vet2, int n1, int n2){
  int menuB(void);
  int i;
  int v,n;
  if(n1==n2){
    printf("Vetor 1 ou 2?: ");
    scanf("%d", &v);
    printf("Valor a ser multiplicado: ");
    scanf("%d", &n);
    if(v==1){
      for (int i = 0; i < n1; i++) {
        printf("%d ", n*(vet1[i]));
        if(i==n1-1){ printf("\n"); }
      }
      printf("\n\nDigite 0 para voltar\n");
      scanf("%d", &i);
      menuB();
    }
    if(v==2){
      for (int i = 0; i < n2; i++) {
        printf("%d ", n*(vet2[i]));
        if(i==n2-1){ printf("\n"); }
      }
      printf("\n\nDigite 0 para voltar\n");
      scanf("%d", &i);
      menuB();
    }
  }
}
int prodEsc2Vet(){

}
