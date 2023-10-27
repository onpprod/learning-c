#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd, *p;

    printf("Quantiade:");
    scanf("%d",&qtd);

    int bytes = qtd * sizeof(int);
    printf("Quantidade de bytes: %d\n",bytes);

    p = (int*)malloc(bytes);

    printf("Ocupa %ld bytes. \n",sizeof(p));

    for( int i=0; i<qtd ;i++){
        printf("Na posicao %d esta o valor %d e tamanho %ld\n", i,p[i],sizeof(p[i]));
    }

    for( int i=0; i<qtd ;i++){
        printf("Insira o elemento %d: ",i);
        scanf("%d",&p[i]);
    }

    for( int i=0; i<qtd ;i++){
        printf("Na posicao %d esta o valor %d e tamanho %ld\n", i,p[i],sizeof(p[i]));
    }
    



    free(p);
    p = NULL;

    return 0;
}