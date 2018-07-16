#include<stdio.h>
#include<string.h>
#include<iostream>
#include<queue>

using namespace std;

struct BST{
    int data;
    struct BST* left;
    struct BST* right;
};

BST* getnewnode(int data){
     struct BST* newnode = new BST();
     newnode->data =  data;
     newnode->left=NULL;
     newnode->right=NULL;
     return newnode;
}

BST* inserts(struct BST* root,int data){
   if(root  == NULL){
        root = getnewnode(data);
   }
   else if(data<=root->data){
        root->left = inserts(root->left,data);
   }
   else{
        root->right = inserts(root->right,data);
   }
   return root;
}


void LOT(BST* root){
    if(root == NULL ){
        printf("Tree is empty");
    }
    queue<BST*>Q;
    Q.push(root);
    while(!Q.empty()){
        BST* temp = Q.front();
        printf("%d\t",temp->data);
        if(temp->left != NULL){
            Q.push(temp->left);
        }
        if(temp->right != NULL){
            Q.push(temp->right);
        }
        Q.pop();
    }
}

int main()
{
    struct BST* root;
    root = NULL;
    root = inserts(root,10);
    root = inserts(root,4);
    root = inserts(root,15);
    root = inserts(root,3);
    root = inserts(root,5);
    LOT(root);
}
