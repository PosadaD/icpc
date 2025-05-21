#include <bits/stdc++.h>

using namespace std;

int main(){
    int columns=0, cubes=0, prev=0;

    cin>>columns;
    int vector[columns];

    for(int i=0; i<columns; i++){
        cin>>vector[i];
    }

    for(int i=0; i<columns-1; i++){
        for(int j=i+1; j<columns; j++){
            if(vector[i]>vector[j]){
                prev = vector[i];
                vector[i]=vector[j];
                vector[j]= prev;
            }
        }
    }

    for(int i=0; i<columns; i++){
        cout<<vector[i];
    }

    return 0;
}