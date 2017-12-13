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
    insert(300);
    insert(200);
    insert(100);
    insert(50);
    print();

    deletenode(1);
    printf("\n");
    printf(" After Delete\n ");
    print();
}

void insert(int value){
    struct linkedlist* temp = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    temp->data = value;
    temp->link=head;
    head=temp;
}

void deletenode(int value){
    if(value==1){
        struct linkedlist* temp;
        temp=head;
        int i;
        head=temp->link;
        free(temp);
    }
    else{
        struct linkedlist* temp;
        temp=head;
        int i;
        for(i = 1; i <= value - 2; i++){
                temp=temp->link;
        }
        struct linkedlist* temp2;
        temp2=temp->link;
        temp->link = temp2->link;
        free(temp2);
    }
}
