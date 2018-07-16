#include<stdio.h>
#include<iostream>
#include <stdlib.h>


using namespace std;

struct ListNode{
    int data;
    struct ListNode* next;
};


struct AdjList{
    ListNode* head;
};

AdjList *graph[5];

struct ListNode* newAdjListNode(int val){
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->data = val;
    node->next = NULL;

    return node;
};

int AddEdge(int src, int des){

    struct ListNode*  newnode = newAdjListNode(src);
    if(graph[des]->head == NULL){
        graph[des]->head = newnode;
    }
    else{
        struct ListNode*  temp = graph[des]->head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }



    newnode = newAdjListNode(des);
    if(graph[src]->head == NULL){
        graph[src]->head = newnode;
    }
    else{
        struct ListNode*  temp = graph[src]->head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }

}

int print(){

    for(int i=0;i<5;i++){
        struct ListNode* temp;
        temp = graph[i]->head;
        cout << "Adjacency List of  "<< i << " : ";
        while(temp){
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << "\n";
    }
}

int main(){

    for(int i = 0;i<5;i++){
        graph[i] =(struct AdjList*)malloc(sizeof(struct AdjList));
        graph[i]->head = NULL;
    }

    AddEdge(0, 1);
    AddEdge(0, 4);
    AddEdge(1, 2);
    AddEdge(1, 3);
    AddEdge(1, 4);
    AddEdge(2, 3);
    AddEdge(3, 4);

    print();

}
