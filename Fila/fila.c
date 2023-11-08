#include <stdio.h>

#define TAMFILA 10

int fila[TAMFILA]  ={0,0,0,0,0,0,0,0,0,0};
int head = 0;
int tail = 0;

void lista_elementos(){
    printf("\n======FILA ATUAL======\n");
    for(int i=0;i<TAMFILA;i++){
        printf("-");
        printf("|%d|",fila[i]);
        printf("-");
    }
    printf("\nHead: %d\n",head);
    printf("Tail: %d\n",tail);
    printf("\n\n");
}

void enqueue(){
    int val;
    if(tail<TAMFILA){
        printf("Informe o valor: ");
        scanf("%d",&val);
        fila[tail] = val;
        tail = tail+1;
        lista_elementos();
    }else{
        printf("A fila esta cheia\n");
    }
}

void dequeue(){
    
}

int main(){

    int entrada;

    do{
        printf("Entrada: ");
        scanf("%d",&entrada);

        switch (entrada)
        {
        case 0:
            lista_elementos();
            break;
        case 1:
            enqueue();
        
        default:
            break;
        }
    }while (entrada!=-1);

    return 0;
}