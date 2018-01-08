#include<stdio.h>
#include<string.h>

int Enqueue(int x);
int Dequeue();
int print();

struct linkedlist{
    int data;
    struct linkedlist* next;
};

struct linkedlist* front= NULL;
struct linkedlist* rear= NULL;

int main(){
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    print();
    Dequeue();
    print();
}

int print(){
    struct linkedlist* temp;
    temp=front;
    while(temp != NULL){
        printf(" %d " , temp->data);
        temp=temp->next;
    }
}

int Enqueue(int x){
    struct linkedlist* head = (struct linkedlist*)malloc(sizeof(struct linkedlist));

    head->data = x;
    head->next = NULL;
    if(front == NULL && rear == NULL){
        front = head;
        rear = head;
    }
    else{
        rear->next = head;
        rear = head;
    }
}

int Dequeue(){
    struct linkedlist* head = front;
    if(front == NULL){
        printf(" Queue is empty\n");
        return 0;
    }

    else if(front == rear){
        front = NULL;
        rear = NULL;
    }
    else{
        front = front->next;
    }
    free(head);
    printf("\n");
}
