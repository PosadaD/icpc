#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("test.txt", "r", stdin);

    string s;
    int n;
    string p;

    cin >> s;
    cin >> n;

    int chr = s.length();

    while(n--){
        cin >> p;
        
        if(p.length()%chr == 0){
            int div = p.length()/chr;
            string ns;
            while(div--){
                ns += s;
            }
            if(ns == p){
                cout<<"Yes"<<endl;
            }else{
                cout <<"No"<<endl;
            }
        }
        else{
            cout <<"No"<<endl;
        }
    }

    return 0;
}