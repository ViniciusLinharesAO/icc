// #############################################################################
//        **``CALCULADORA COM OPERAÇÕES DE VETORES E MATRIZES´´**
//        **``UNIVERSIDADE ESTADUAL DO CEARÁ - CIÊNCIA DA COMPUTAÇÃO´´**
//Autores: - Davi Luis Barbosa Silve
//         - Dedyanna Carla de Almeida Cacau
//         - Vinícius Linhares Alves de Oliveira
//               **``FORTALEZA/CE-2018´´**
//##############################################################################
// **``PROGRAMA PRINCIPAL´´**
#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"
//#include "matriz.h"

int *vet1 = NULL, *vet2 = NULL, *mat1 = NULL, *mat2 = NULL;
int n1=1, n2=1;

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

int menuA(void){ //**FUNÇÃO DO MENU PRINCIPAL**//
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
        printf("Insira uma opção:\n\n");
    }
    criaLinha(30);
    scanf("%d",&n);
    switch (n){ //**OPÇÕES DO MENU PRINCIPAL**//
        case 1: iB=0;menuB(); break;
        case 2: iC=0;menuC(); break;
        case 3: printf("\33[H\33[2J"); printf("\nAdeus.\n\n"); break;
        default: iA++;menuA();
    }
}

int menuB(void){//**MENU DE OPERAÇÕES COM VETORES**//
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
    switch (n){//**OPÇÕES DO MENU DE OPERAÇÕES COM VETORES**//
        case 1: lerVetor(&vet1, &vet2, &n1, &n2); break;
        case 2: soma2Vet(vet1, vet2, n1, n2); break;
        case 3: mulEsc(vet1, vet2, n1, n2); break;
        case 4: prodEsc2Vet(vet1, vet2, n1, n2); break;
        case 5: iA=0;menuA();break;
        default: iB++;menuB();
    }
}

int menuC(void){//**MENU DE OPERAÇÕES COM MATRIZES**//
    printf("\e[H\e[2J");
    criaLinha(30);
    printf("OPERAÇÕES COM MATRIZES\n");
    criaLinha(30);
    printf("1. Ler matrizes\n");
    printf("2. Somar duas matrizes\n");
    printf("3. Multiplicar duas matrizes\n");
    printf("4. Calcular a transposta de uma matrize\n");
    printf("5. Calcular o determinante de uma matrizes \n\t(Apenas no caso da matriz 1x1, 2x2, ou 3x3)\n");
    printf("6. Verificar se uma matriz é simétrica\n");
    printf("7. Voltar ao menu principal\n\n");
    if(iC!=0){
        printf("Valor inválido, digite outro:\n\n");
    }else{
        printf("Insira um opcao:\n\n");
    }
    criaLinha(30);
    scanf("%d",&n);
    printf("\e[H\e[2J");
    switch (n){//**OPÇÕES DO MENU DE OPERAÇÕES COM MATRIZES**//
        case 1: printf("lerMatriz\n"); break;
        case 2: printf("Somar duas matrizes\n"); break;
        case 3: printf("Multiplicar duas matrizes\n"); break;
        case 4: printf("Calcular a transposta de uma matrize\n"); break;
        case 5: printf("Calcular o determinante de uma matrizes (Apenas no iaso da matriz 1x1, 2x2, ou 3x3)\n"); break;
        case 6: printf("Verificar se uma matriz é simétrica\n"); break;
        case 7: iA=0;menuA();break;
        default: iC++;menuC();
    }
}

void main(){
    menuA();
}
