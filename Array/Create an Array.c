#include <stdio.h>
#define MAX_SIZE 100

int i,n,newelement,position;
// Declare an Array
int data[MAX_SIZE];

int main(){

    printf("Enter array elements : ");
    scanf("%d",&n);

    printf("Enter element to be insert : \n");
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }

    print();

}

// Function to print data 
void print(){
    printf("Element in the Array : ");
    for(i=0;i<n;i++){
        printf("%d\t",data[i]);
    }
    printf("\n");
}
