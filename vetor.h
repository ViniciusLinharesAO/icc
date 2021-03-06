// #############################################################################
//        **``CALCULADORA COM OPERAÇÕES DE VETORES E MATRIZES´´**
//        **``UNIVERSIDADE ESTADUAL DO CEARÁ - CIÊNCIA DA COMPUTAÇÃO´´**
//Autores: - Davi Luis Barbosa Silve
//         - Dedyanna Carla de Almeida Cacau
//         - Vinícius Linhares Alves de Oliveira
//               **``FORTALEZA/CE-2018´´**
//##############################################################################
// **``BLIBIOTECA DE OPERAÇÕES DOS VETORES´´**
#include <stdio.h>
#include <stdlib.h>
int lerDnvVet=0;
//**FUNÇÃO DE LEITURA DOS VETORES**//
void lerVetor(int **vet1,int **vet2, int *n1, int *n2) {
  int menuB(void);
  int i;
  if(lerDnvVet==1){
    printf("Sobrescrever os vetores?( 1=Sim / 0=Não ): ");
    free(*vet1);
    free(*vet2);
    scanf("%d", &i);
    if (i==0) {
      menuB();
    }
    if (i==1) {
      lerDnvVet=0;
      printf("Digite o tamanho do Vetor 1: ");
      scanf("%d", n1);
      printf("insira os valores\n");
      *vet1 = (int *) malloc((*n1)*sizeof(int));
      for (int i = 0; i < *n1; i++) {
        printf("[%d]: ", i+1);
        scanf("%d", &(*vet1)[i]);
      }
      printf("Digite o tamanho do Vetor 2: ");
      scanf("%d", n2);
      printf("insira os valores\n");
      *vet2 = (int *) malloc((*n2)*sizeof(int));
      for (int i = 0; i < *n2; i++) {
        printf("[%d]: ", i+1);
        scanf("%d", &(*vet2)[i]);
      }
      lerDnvVet++;
    }
    if(i!=0 && i!=1){
      printf("Opção inválida, digite 0 para voltar para o menu: ");
      scanf("%d", &i);
    }
  }
  if(lerDnvVet==0){
    printf("Digite o tamanho do Vetor 1: ");
    scanf("%d", n1);
    printf("insira os valores\n");
    *vet1 = (int *) malloc((*n1)*sizeof(int));
    for (int i = 0; i < *n1; i++) {
      printf("[%d]: ", i+1);
      scanf("%d", &(*vet1)[i]);
    }
    printf("Digite o tamanho do Vetor 2: ");
    scanf("%d", n2);
    printf("insira os valores\n");
    *vet2 = (int *) malloc((*n2)*sizeof(int));
    for (int i = 0; i < *n2; i++) {
      printf("[%d]: ", i+1);
      scanf("%d", &(*vet2)[i]);
    }
    lerDnvVet++;
  }
  menuB();
}
//**FUNÇÃO DE SOMA ENTRE OS VETORES**//
int soma2Vet(int *vet1, int *vet2, int n1, int n2){
  int menuB(void);
  int i;
  if(n1==n2){
    for (i = 0; i < n1; i++) {
      printf("%d ", vet1[i]+vet2[i]);
    }
    printf("\n\nDigite 0 para voltar\n");
    scanf("%d", &i);
    menuB();
  }
  else{
    printf("Vetores com tamanhos diferentes!\n");
    printf("\nDigite 0 para voltar: ");
    scanf("%d", &i);
    menuB();
  }
}
//**FUNÇÃO DE MULTIPLICAÇÃO POR ESCALAR COM 1 DOS VETORES**//
int mulEsc(int *vet1, int *vet2, int n1, int n2){
  int menuB(void);
  int i,v,n;
  printf("Vetor 1 ou 2?: ");
  scanf("%d", &v);
  if(v==1 || v==2){
    printf("Valor a ser multiplicado: ");
    scanf("%d", &n);
    if(v==1){
      for (int i = 0; i < n1; i++) {
        printf("%d ", n*(vet1[i]));
      }
      printf("\n\nDigite 0 para voltar\n");
      scanf("%d", &i);
      menuB();
    }
    if(v==2){
      for (int i = 0; i < n2; i++) {
        printf("%d ", n*(vet2[i]));
      }
      printf("\n\nDigite 0 para voltar\n");
      scanf("%d", &i);
      menuB();
    }
  }else{
    printf("Opção inválida, digite 0 para voltar para o menu: ");
    scanf("%d", &i);
    menuB();
  }
}
//**FUNÇÃO DO PRODUTO ESCALAR ENTRE OS VETORES**//
int prodEsc2Vet(int *vet1, int *vet2, int n1, int n2){
  int menuB(void);
  int i,r=0;
  if(n1==n2){
    for (i = 0; i < n1; i++) {
      r+=vet1[i]*vet2[i];
    }
    printf("%d\n", r);
    printf("\nDigite 0 para voltar\n");
    scanf("%d", &i);
    menuB();
  }
  else{
    printf("Vetores com tamanhos diferentes!\n");
    printf("\nDigite 0 para voltar: ");
    scanf("%d", &i);
    menuB();
  }
}
