#include <stdio.h>


void soma(int* a , int* b){

    int sum = *a + *b;

    printf("%d\n",sum);
}

int main(){

    int a1 = 10;
    int b1 = 20;

    soma(&a1,&b1);

    return 0;
}
