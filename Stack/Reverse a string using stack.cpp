#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>

using namespace std;

void Reverse(char *String,int n){
    //push into stack
    stack <char> s;
    for(int i=0;i<n;i++){
        s.push(String[i]);
    }
    //pop from stack
    for(int i=0;i<n;i++){
        String[i] = s.top();
        s.pop();
    }
}

int main(){
    char String[100];
    printf("Enter a string : ");
    scanf("%s",&String);
    Reverse(String,strlen(String));

    printf("Reverse String : %s",String);
}
