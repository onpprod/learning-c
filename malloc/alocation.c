#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tam, *vet;

    printf("Digite o tamanho: ");
    scanf("%d",&tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if (vet){
        printf("Memoria alocada com sucesso!\n");
        for(i=0;i<tam;i++){
            vet[i] = rand()%100;
        }
        for(i=0;i<tam;i++){
            printf("%d ",vet[i]);
        }
    }

    free(vet);
    vet = NULL;
}