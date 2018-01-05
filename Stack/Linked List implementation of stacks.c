#include <stdio.h>
#include <stdlib.h>

struct linkedlist{
    int data;
    struct linkedlist* link;
};

struct linkedlist* top;

void print(){
    struct linkedlist* temp;
    temp=top;
    while(temp != NULL){
        printf(" %d " , temp->data);
        temp=temp->link;
    }
}

int main(){
    top=NULL;
    push(300);
    push(200);
    push(100);
    print();
    printf("\n");
    pop();
    pop();
    print();
}

void push(int value){
    struct linkedlist* temp = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    temp->data = value;
    temp->link=top;
    top=temp;
}

void pop(){
    if(top == NULL){
        printf(" \n Stack is Empty");
    }
    else{
        struct linkedlist* temp;
        temp = top;
        top=temp->link;
        free(temp);
    }
}
