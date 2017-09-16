#include <stdio.h>
#define MAX_SIZE 100

int i,n,newelement,position;
// Declare Array
int data[MAX_SIZE];

int main(){

    printf("Enter array elements : ");
    scanf("%d",&n);

    printf("Enter element to be insert : \n");
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }

    print(); // call the print function

    printf("Enter the position the element to be deleted: ");
    scanf("%d",&position);
    printf("\n");

    deleteelement(position);
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
// Function to delete data from array
int deleteelement(int position){
    int N=position+1;
    while(N<=n-1)
    {
            data[N-1]=data[N];
            N++;
    }
    n--;
}


