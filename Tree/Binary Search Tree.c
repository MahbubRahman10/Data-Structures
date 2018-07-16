#include<stdio.h>
#include<string.h>

struct BST{
    int data;
    struct BST* left;
    struct BST* right;
};

int getnewnode(int data){
     struct BST* newnode = (struct BST*)malloc(sizeof(struct BST));
     newnode->data =  data;
     newnode->left=NULL;
     newnode->right=NULL;
     return newnode;
}

int insert(struct BST* root,int data){
   if(root  == NULL){
        root = getnewnode(data);
   }
   else if(data<=root->data){
        root->left = insert(root->left,data);
   }
   else{
        root->right = insert(root->right,data);
   }
   return root;
}

int print(struct BST* root){
    if(root == NULL){
      return 0;
    }
    else{
        print(root->left);
        printf("%d\t",root->data);
        print(root->right);
    }
}

int search(struct BST* root,int number){
    if(root == NULL){
        return 0;
    }
    else if(number == root->data){
        return 1;
    }
    else if(number<=root->data){
        return search(root->left,number);
    }
    else if(number>=root->data){
        return search(root->right,number);
    }
}

int height(struct BST* root){
    int left,right;
    if(root==NULL){
        return 0;
    }
    else{
        left = height(root->left);
        right = height(root->right);
    }
    return 1 + ((left > right) ? left : right);
}

int main()
{
    struct BST* root;
    root = NULL;
    root = insert(root,10);
    root = insert(root,4);
    root = insert(root,15);
    root = insert(root,3);
    root = insert(root,5);
    print(root);

    int findheight = height(root);

    printf("\n\n\n\n%d",findheight);
}
