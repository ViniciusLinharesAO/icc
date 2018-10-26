#include <stdio.h>
int n,iA=0,iB=0,iC=0;

int menuA(void){
    printf("\33[H\33[2J");
    printf("MENU PRINCIPAL\n\n");
    printf("1. Operações com vetores.\n");
    printf("2. Operações com matrizes.\n");
    printf("3. Sair do programa.\n\n");
    if(iA!=0){
        printf("Opção inválido, digite outro:\n\n");
    }else{
        printf("Insira uma opção:\n\n");
    }
    scanf("%d",&n);
    switch (n){
        case 1: menuB(); break;
        case 2: menuC(); break;
        case 3: printf("Adeus.\n"); break;
    }
}

int menuB(void){
    printf("\e[H\e[2J");
    printf("OPERAÇÕES COM VETORES\n\n");
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
    scanf("%d",&n);
    switch (n){
        case 1: printf("Ler vetores"); break;
        case 2: printf("Somar dois vetores"); break;
        case 3: printf("Multiplicar um dos vetores por um escalar"); break;
        case 4: printf("Realizar o produto escalar entre dois vetores"); break;
        case 5: menuA();break;
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
    switch (n){
        case 1: printf("Ler matrizes"); break;
        case 2: printf("Somar duas matrizes\n"); break;
        case 3: printf("Multiplicar duas matrizes\n"); break;
        case 4: printf("Calcular a transposta de uma matrize\n"); break;
        case 5: printf("Calcular o determinante de uma matrizes (Apenas no iaso da matriz 1x1, 2x2, ou 3x3)\n"); break;
        case 6: printf("Verificar se uma matriz é simétrica\n"); break;
        case 7: menuA();break;
        default: iC++;menuC();
    }
}

void main(){
    menuA();
