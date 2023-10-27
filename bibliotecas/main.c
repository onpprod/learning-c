#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <time.h>


int main(){

    long int clk;
    clk = clock();
    printf("Inicio: %ld\n",clock);
    char teste[20];

    printf("Entrada: ");
    scanf("%19s",&teste);
    
    if (islower(teste[0])){
        printf("Esta em minusculo\n");
        teste[0] = toupper(teste[0]);
    }

    printf("Saida = %s \n",teste);
    printf("Tamanho do nome %d\n",strlen(teste));

    return 0;
}