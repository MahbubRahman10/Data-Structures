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

    print();

    printf("Enter the new element :");
    scanf("%d",&newelement);

    printf("Enter the position this element : ");
    scanf("%d",&position);
    printf("\n");

    insertelement(newelement,position);
    print();
}
// function to print data
void print(){
    printf("Element in the Array : ");
    for(i=0;i<n;i++){
        printf("%d\t",data[i]);
    }
    printf("\n\n");
}
// Function to insert data in array 
int insertelement(int element, int position){
    int N=n-1;
    while(position<=N)
    {
            data[N+1]=data[N];
            N=N-1;
    }
    data[position]=element;
    n++;
}


