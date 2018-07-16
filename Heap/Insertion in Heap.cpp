#include<stdio.h>
#include<iostream>
#define MAX_SIZE 10

using namespace std;

int arrays[MAX_SIZE];
int counts = 0;

int adjust(int counts){

    int lst = arrays[counts];
    int i = counts;
    while(i/2 >= 1){
        if(arrays[i/2] < lst){
            int temp = arrays[i];
            arrays[i] = arrays[i/2];
            arrays[i/2] = temp;
            i = i/2;
        }
        else{
            break;
        }
    }
}

int inserts(int value){

    if(counts < MAX_SIZE-1){
        counts++;
        arrays[counts] = value;
        adjust(counts);
    }
}

int print(){

    for(int i=1; i<=counts;i++){
        cout << arrays[i] << " ";
    }
}

int main(){

    inserts(50);
    inserts(30);
    inserts(10);
    inserts(5);
    inserts(29);

    print();

}

