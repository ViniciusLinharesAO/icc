void lerVetor() {
    int quantVet, tamVet;

    printf("1. Digite 0 para voltar ao menu\n");
    printf("2. Informe a quantidade de vetores:");
    scanf("%d", &quantVet);
    if(quantVet == 0) menuB();

    printf("3. Informe o tamanho dos vetores: ");
    scanf("%d", &tamVet);

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

    printf("3. Digite 0 para voltar ao menu: ");
    scanf("%d",&i);
    if(i == 0) menuB();
}
