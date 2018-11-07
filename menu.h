#include <stdio.h>
#include <stdlib.h>

int n,iA=0,iB=0,iC=0;
int menuA(void);
int menuB(void);
int menuC(void);

void criaLinha(int v){
  int i;
  printf("=");
  for (i=0;i<v;i++) {
    printf("=");
  }
  printf("=\n");
}

int menuA(void){
    printf("\33[H\33[2J");
    criaLinha(30);
    printf("\tMENU PRINCIPAL\n");
    criaLinha(30);
    printf("1. Operações com vetores.\n");
    printf("2. Operações com matrizes.\n");
    printf("3. Sair do programa.\n\n");
    if(iA!=0){
        printf("Opção inválida, digite outra:\n\n");
    }else{
        printf("Insira uma opção:\n");
    }
    criaLinha(30);
    scanf("%d",&n);
    switch (n){
        case 1: menuB(); break;
        case 2: menuC(); break;
        case 3: printf("\33[H\33[2J"); printf("\nAdeus.\n\n"); break;
        default: iA++;menuA();
    }
}

int menuB(void){
    printf("\e[H\e[2J");
    criaLinha(30);
    printf("\tOPERAÇÕES COM VETORES\n");
    criaLinha(30);
    printf("1. Ler vetores\n");
    printf("2. Somar dois vetores\n");
    printf("3. Multiplicar um dos vetores por um escalar\n");
    printf("4. Realizar o produto escalar entre dois vetores\n");
    printf("5. Voltar ao menu principal\n\n");
    if(iB!=0){
        printf("Valor inválido, digite outro:\n\n");
    }else{
        printf("Insira um opcao:\n\n");
    }
    criaLinha(30);
    scanf("%d",&n);
    printf("\e[H\e[2J");
    switch (n){
        case 1: lerVetor(); break;
        case 2: printf("Somar dois vetores\n"); break;
        case 3: printf("Multiplicar um dos vetores por um escalar\n"); break;
        case 4: printf("Realizar o produto escalar entre dois vetores\n"); break;
        case 5: iA=0;menuA();break;
        default: iB++;menuB();
    }
}

int menuC(void){
    printf("\e[H\e[2J");
    printf("OPERAÇÕES COM MATRIZES\n\n");
    printf("1. Ler matrizes\n");
    printf("2. Somar duas matrizes\n");
    printf("3. Multiplicar duas matrizes\n");
    printf("4. Calcular a transposta de uma matrize\n");
    printf("5. Calcular o determinante de uma matrizes (Apenas no iaso da matriz 1x1, 2x2, ou 3x3)\n");
    printf("6. Verificar se uma matriz é simétrica\n");
    printf("7. Voltar ao menu principal\n\n");
    if(iC!=0){
        printf("Valor inválido, digite outro:\n\n");
    }else{
        printf("Insira um opcao:\n\n");
    }
    scanf("%d",&n);
    printf("\e[H\e[2J");
    switch (n){
        case 1: printf("Ler matrizes\n"); break;
        case 2: printf("Somar duas matrizes\n"); break;
        case 3: printf("Multiplicar duas matrizes\n"); break;
        case 4: printf("Calcular a transposta de uma matrize\n"); break;
        case 5: printf("Calcular o determinante de uma matrizes (Apenas no iaso da matriz 1x1, 2x2, ou 3x3)\n"); break;
        case 6: printf("Verificar se uma matriz é simétrica\n"); break;
        case 7: iA=0;menuA();break;
        default: iC++;menuC();
    }
}
