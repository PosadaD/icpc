#include <bits/stdc++.h>

using namespace std;

int main(){
    int Limark=0, Bob=0, years=0;

    cin>>Limark;
    cin>>Bob;

    while(Limark <= Bob){
        Limark = Limark*3;
        Bob= Bob*2;

        years++;
    }

    cout<<years;

    return 0;
}