#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=0, Petya=0, Vasya=0, Tonya=0, solution=0, total=0; 

    cin>>n;

    for (int i=0; i<n; i++){
        cin>>Petya;
        cin>>Vasya;
        cin>>Tonya;

        solution= Petya + Vasya + Tonya;

        if(solution >= 2){
            total++;
        }
    }

    cout<< total;

    return 0;
}