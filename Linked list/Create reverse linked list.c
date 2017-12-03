#include <stdio.h>
#include <stdlib.h>

struct linkedlist{
    int data;
    struct linkedlist* link;
};

struct linkedlist* head;

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
    insert(300);
    print();
    reverse();
    printf("\n");
    print();

}

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

void reverse(){
    struct linkedlist* temp,*prev,*t;
    temp = head;
    prev=NULL;
    while(temp!=NULL){
        t=temp->link;
        temp->link=prev;
        prev=temp;
        temp=t;
    }
    head=prev;
}
