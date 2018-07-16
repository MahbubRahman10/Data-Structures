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


int InDfs(BST* root){
    if(root == NULL){
        return false;
    }
    InDfs(root->left);
    printf("%d\t",root->data);
    InDfs(root->right);
}

BST* FindMin(BST* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}


BST* deletes(struct BST* root,int data){
    if(root == NULL){
        return root;
    }
    else if(root->data > data){
        root->left = deletes(root->left,data);
    }
    else if(root->data < data){
        root->right = deletes(root->right,data);
    }
    else{
        if(root->left == NULL && root->right== NULL){
            delete root;
            root = NULL;
        }
        else if(root->left == NULL){
            struct BST* temp = root;
            root = root->left;
            delete temp;
        }
        else if(root->right == NULL){
            struct BST* temp = root;
            root = root->left;
            delete temp;
        }
        else{
            struct BST* temp = FindMin(root->right);
			root->data = temp->data;
			root->right = deletes(root->right,temp->data);
        }
    }

    return root;
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


    root = deletes(root,4);

    InDfs(root);



}
