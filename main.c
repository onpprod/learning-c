#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da lista ligada
struct Node {
    int data;
    struct Node* next;
};

// Função para criar um novo nó
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Função para imprimir a lista ligada
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void addElem(struct Node* novo_elemento, struct Node* head){
    int status = 0;
    
    struct Node* pt = head;
    struct Node* pt2;

    while(1)
    {
        if(novo_elemento->data > pt->data)
        {
            status = 1;
            pt2 = pt;
            pt = pt->next;
            continue;
        }
        else
        {
            novo_elemento->next = pt;
            if(status){
                pt2->next = novo_elemento;
            }
            else{
                *pt = novo_elemento;                                
            }
            break;
        }
    }
}


int main() {
    // Criando os nós da lista ligada
    struct Node* head = newNode(2);
    struct Node* a = newNode(3);
    struct Node* b = newNode(4);
    struct Node* c = newNode(10);

    struct Node* new = newNode(1);
    struct Node* new2 = newNode(8);

    struct Node** primeiro = head;
    

    // Ligando os nós
    head->next = a;
    a->next = b;
    b->next = c;

    // Imprimindo a lista ligada
    printf("Lista ligada: ");
    printList(primeiro);

    addElem(new, primeiro);

    printf("Lista ligada: ");
    printList(primeiro);
    addElem(new2, primeiro);

    printf("Lista ligada: ");
    printList(primeiro);



    // Lembre-se de liberar a memória alocada
    free(head);
    free(a);
    free(b);
    free(c);
    free(new);
    free(new2);
    free(primeiro);

    return 0;
}