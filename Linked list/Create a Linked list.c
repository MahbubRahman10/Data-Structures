#include <stdio.h>
#include <stdlib.h>

/* Define a structure named linkedlist */
 struct linkedlist{
    int data;
    struct linkedlist* link;
};
/* Declared a pointer to node */
struct linkedlist* head;

int main(){
     head=NULL;

     head = (struct linkedlist*)malloc(sizeof(struct linkedlist));
     head->data = 5;
     head->link = (struct linkedlist*)malloc(sizeof(struct linkedlist));
     head->link->data=10;
     head->link->link=(struct linkedlist*)malloc(sizeof(struct linkedlist));
     head->link->link->data=15;
     head->link->link->link=NULL;

     print();
}

/* function to print data */
void print(){
    struct linkedlist* temp;
    temp=head;
    while(temp != NULL){
        printf(" %d " , temp->data);
        temp=temp->link;
    }
}
