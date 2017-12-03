#include <stdio.h>
#include <stdlib.h>

struct linkedlist{
    int data;
    struct linkedlist* link;
};

struct linkedlist* head;

void print(struct linkedlist* temp){
    if(temp == NULL){
        return 0;
    }
    printf("%d\t" , temp->data);
    print(temp->link);
}

int main(){
    head=NULL;
    insert(100);
    insert(200);
    insert(300);
    print(head);
    printf("\n");
    reverse(head);

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

void reverse(struct linkedlist* temp){
    if(temp == NULL){
        return 0;
    }
    reverse(temp->link);
    printf("%d\t" , temp->data);
}
