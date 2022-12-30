#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h, each, total=0;

    cin>>n;
    cin>>h;

    for(int i; i<n; i++){
        cin>>each;

        if(h<each){
            total = total + 2;
        }
        else{
            total = total + 1;
        }
    }

    cout<<"the minimum possible valid with of the road is:"<<total<<endl;

    return 0;
}