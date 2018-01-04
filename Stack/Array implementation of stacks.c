#include <stdio.h>
#define MAX_SIZE 100

int data[MAX_SIZE];
int top=-1;

int main(){
    push(10);
    print();
    push(20);
    print();
    push(30);
    print();
    pop();
    print();
    tops();
    print();
    push(40);
    print();
    push(60);
    print();
    pop();
    tops();
    print();
}

void print(){
    printf("Array Element : ");
    int i;
    for(i=0;i<=top;i++){
        printf("%d\t",data[i]);
    }
    printf("\n");
}

void push(int x){
    if(top == MAX_SIZE){
        printf("Oppss! Stack Overflow\n");
    }
    else{
        top++;
        data[top]=x;
    }
}

void pop(){
    if(top ==-1){
        printf("Oppss! Nothing to Remove\n");
    }
    else{
        top--;
    }
}

int tops(){
    printf("Top Element Now : %d\n", data[top]);
}
