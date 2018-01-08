#include<stdio.h>
#include<string.h>
#define MAX_SIZE 4

int Enqueue(int x);
int Dequeue();
int IsFull();
int IsEmpty();
void print();

int data[MAX_SIZE];
int i,font,rear;
font = -1;
rear = -1;

int main(){
    Enqueue(2);
    Enqueue(4);
    Enqueue(8);
    Dequeue();
    Enqueue(4);

    print();
}

int IsEmpty(){
    if(font == -1 && rear == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int IsFull(){
    if(((rear+1)%MAX_SIZE) == font){
        return 1;
    }
    else{
        return 0;
    }
}

int Enqueue(int x){
    if(IsFull()){
        printf("Queue is Full\n");
    }
    else if(IsEmpty()){
        rear = 0;
        font = 0;
    }
    else{
        rear=(rear+1)%MAX_SIZE;
    }
    data[rear] = x;
}

int Dequeue(int x){
    if(IsEmpty()){
        printf("Query is Empty\n");
    }
    else if(font == rear){
        font = -1;
        rear = -1;
    }
    else{
        font=(font+1)%MAX_SIZE;
    }
}

void print(){
    if(IsEmpty()){
        printf("Query is Empty");
    }
    else if(IsFull()){
        printf("Query is Underflow");
    }
    else{
        for(i = font;i<=rear;i++){
            printf("%d\t",data[i]);
        }
         printf("\n");
    }
}
