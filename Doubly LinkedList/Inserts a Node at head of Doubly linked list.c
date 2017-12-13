#include <stdio.h>
#include <stdlib.h>

struct linkedlist{
    int data;
    struct linkedlist* next;
    struct linkedlist* prev;
};

struct linkedlist* head;
struct linkedlist *first,*last;

void forwardprint(){
    struct linkedlist* temp;
    temp=head;
    while(temp != NULL){
        printf(" %d " , temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void reverseprint(){

    struct linkedlist* temp;
    temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }

    while(temp != NULL){
        printf(" %d " , temp->data);
        temp=temp->prev;
    }
    printf("\n");

}

insert(int value){

    struct linkedlist* newNode = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        struct linkedlist* temp;
        temp=head;
        temp->prev = newNode;
        newNode->next = temp;
        head = newNode;
    }
}

int main(){
    head = NULL;
    first = last = NULL;
    insert(100);
    insert(200);
    insert(300);
    forwardprint();
    reverseprint();
}
