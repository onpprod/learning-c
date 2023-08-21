#include <stdio.h>
void input_int(const char* text , int* address);

int main() {

    int choose  = -1;
    while (choose != 0)
    {    
        printf("O que voce deseja fazer: \n");
        printf("1) Converter velocidade\n");
        printf("2) Somar A + B\n");
        printf("3) Contar\n");
        printf("0) Sair\n");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            float velocidade;
            printf("Digite uma velocidade: ");
            scanf("%f",&velocidade);
            velocidade = velocidade/1.61;
            printf("Nova velocidade %f \n",velocidade);
            break;

        case 2:
            int a = 0;
            int b = 0;
            input_int("Inserir valor de A: ", &a);
            input_int("Inserir valor de B: ", &b);
            printf("Soma = %d\n",a+b);
            break;
        
        case 3:
            int count = 0;
            input_int("Quantas vezes contar? ", &count);
            for(int i = 0; i < count; i++){
                printf("Contagem %d.\n",i+1);
            }
            break;
        
        default:
            break;
        }
    }

    return 0;
}

void input_int(const char* text , int* address){
    printf("%s", text);
    scanf("%d", address);
}

