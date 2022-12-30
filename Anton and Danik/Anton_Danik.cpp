#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, A, D; 
    string s; 
	
	cin>>n;
	cin>>s;
		
		for(int i=0; i<n; i++){
			s[i] = toupper(s[i]);	
		
			if (s[i]=='D'){
				D++;
			}
			else if(s[i]=='A'){
				A++;
			}
		}

    if(A<D){
        cout<<"Danik"<<endl;
    }
    else if(D<A){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}