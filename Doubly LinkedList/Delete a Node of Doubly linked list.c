#include <stdio.h>
#include <stdlib.h>

struct linkedlist{
    int data;
    struct linkedlist* next;
    struct linkedlist* prev;
};

struct linkedlist* head;
struct linkedlist* strore_next;
struct linkedlist* strore_prev;

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

int deletenode(int position){

    struct linkedlist* temp;
    temp = head;
    int i;

    if(position == 1){
        head = temp->next;
        head->prev =  NULL;
    }
    else{
        for(i = 1; i <= position - 1; i++){
                temp=temp->next;
        }

        if(temp -> next != NULL){
            strore_next = temp->next;
            strore_prev = temp->prev;

            strore_next->prev = strore_prev;
            strore_prev->next = strore_next;
        }
        else{
            strore_prev = temp->prev;
            strore_prev->next = NULL;
        }
    }
    free(temp);
}

int main(){
    head = NULL;
    insert(100);
    insert(200);
    insert(300);
    insert(400);
    forwardprint();
    deletenode(3);
    forwardprint();
}
