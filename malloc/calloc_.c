#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd = 5, *p;

    printf("Entrada: ");
    scanf("%d",&qtd);

    p = (int*)malloc(qtd*sizeof(int));

    if(p){
        printf("Alocado com sucesso\n");

        for(int i=0;i<qtd;i++){
            printf("Entrada para a posicao %d: ",i);
            scanf("%d",&p[i]);
        }

        printf("Valores:\n");
        for(int i=0;i<qtd;i++){
            printf("%d|",p[i]);
        }
        printf("\n");

        printf("Valores pares:\n");
        for(int i=0;i<qtd;i++){
            if(p[i]%2==0){
                printf("%d|",p[i]);
            }            
        }
        printf("\n");

        printf("Valores impares:\n");
        for(int i=0;i<qtd;i++){
            if(p[i]%2!=0){
                printf("%d|",p[i]);
            }            
        }
        printf("\n");

        free(p);
        p = NULL;
    }
    else{
        printf("Erro na alocação\n");
    }

}