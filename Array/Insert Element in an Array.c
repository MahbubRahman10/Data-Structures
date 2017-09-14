#include <stdio.h>
#define MAX_SIZE 100

int i,n,newelement,position;
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

void print(){
    printf("Element in the Array : ");
    for(i=0;i<n;i++){
        printf("%d\t",data[i]);
    }
    printf("\n\n");
}

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


