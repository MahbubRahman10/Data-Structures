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
    insert(200);
    insert(300);

    print();

    printf("\n After insert : \n");

    insert(100);
    print();
}

/* Function to inserting a node at beginning */
void insert(int value){
    struct linkedlist* temp = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    temp->data = value;
    temp->link=head;
    head=temp;
}
