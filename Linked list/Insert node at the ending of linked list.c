#include <stdio.h>
#include <stdlib.h>

/* Define a structure named linkedlist */
struct linkedlist{
    int data;
    struct linkedlist* link;
};

/* Declared a pointer to node */
struct linkedlist* head;

/* function to print data */
void print(){
    struct linkedlist* temp;
    temp=head;
    while(temp != NULL){
        printf(" %d " , temp->data);
        temp=temp->link;
    }
}

int main(){
    head=NULL;
    insert(100);
    insert(200);

    print();
}

/* Function to inserting a node at the end of linked list */
void insert(int value){
    struct linkedlist* temp = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    temp->data = value;
    temp->link=NULL;

    if(head==NULL){
        head=temp;
    }
    else{
        struct linkedlist* t;
        t=head;
        while(t->link != NULL){
            t=t->link;
        }
        t->link = temp;
    }
}