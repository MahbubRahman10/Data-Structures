#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int node,edge,a,b,matrix[100][100];

    cout << "Enter the number of nodes : " < "\n";

    cin >> node;

    for(int i=1; i<=node; i++){
        for (int j=1; j<=node; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "Enter the number of edges : ";

    cin >> edge;

    for(int i=1; i<=edge; i++){
        cin >> a >> b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }

    for(int i=1; i<=node; i++){
        for (int j=1; j<=node; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }







}

