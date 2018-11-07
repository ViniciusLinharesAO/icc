#include <stdio.h>
#include <stdlib.h>

void lerVetor() {
    int menuB(void);
    int quantVet, tamVet;

    printf("! Digite 0 para voltar ao menu !\n");
    printf("- Informe a quantidade de vetores:  ");
    scanf("%d", &quantVet);
    if(quantVet == 0) menuB();

    printf("- Informe o tamanho dos vetores:  ");
    scanf("%d", &tamVet);
    if(quantVet == 0) menuB();

    int vetor[tamVet][quantVet], i;

    for(int l = 0; l < tamVet; l++) {
      for(int c = 0; c < quantVet; c++) {
        vetor[l][c] = c;
      }
    }

    for(int l = 0; l < tamVet; l++) {
      for(int c = 0; c < quantVet; c++) {
        printf("%d", vetor[l][c]);
      }
      printf("\n");
    }

    printf("! Digite 0 para voltar ao menu !\n");
    scanf("%d",&i);
    if(i == 0) menuB();
}
