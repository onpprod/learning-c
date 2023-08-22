#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void addElem(struct Node* novo_elemento, struct Node** head){
    int status = 0;
    
    struct Node* pt = *head;
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
                *head = novo_elemento;                                
            }
            break;
        }
    }
}


int main() {

    struct Node* a = newNode(2);
    struct Node* b = newNode(3);
    struct Node* c = newNode(4);
    struct Node* d = newNode(10);

    struct Node* new = newNode(1);
    struct Node* new2 = newNode(8);

    a->next = b;
    b->next = c;
    c->next = d;

    struct Node** primeiro = a;

    printf("Lista ligada: ");
    printList(primeiro);

    addElem(new, &primeiro);

    printf("Lista ligada: ");
    printList(primeiro);
    addElem(new2, &primeiro);

    printf("Lista ligada: ");
    printList(primeiro);

    free(a);
    free(b);
    free(c);
    free(d);
    free(new);
    free(new2);

    return 0;
}