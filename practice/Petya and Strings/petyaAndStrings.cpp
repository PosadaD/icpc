#include <bits/stdc++.h>

using namespace std;

int main(){
    char a[100], b[100];
    int A, B, print=0;

    cin>>a>>b;

    for(int x=0; x<strlen(a); x++){
        A = toupper(a[x]);
        B = toupper(b[x]);

        if(B > A){
            print = -1;
            x=strlen(a);
        }
        else if(A > B){
            print = 1;
            x=strlen(a);
        }
    }

    cout<<print;

    return 0;
}