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

int PreDfs(BST* root){
    if(root == NULL){
        return false;
    }
    printf("%d\t",root->data);
    PreDfs(root->left);
    PreDfs(root->right);
}


int main()
{
    struct BST* root;
    root = NULL;
    root = inserts(root,9);
    root = inserts(root,5);
    root = inserts(root,15);
    root = inserts(root,3);
    root = inserts(root,5);
    root = inserts(root,12);
    root = inserts(root,19);
    PreDfs(root);
}
