# include <bits/stdc++.h>

using namespace std;


int main(){
    int matrix[5][5]={0}, value=0, total=0;

    for(int x=0; x<5; x++){
        for(int y=0; y<5; y++){

            cin>>value;

            matrix[x][y]=value;

            if(value==1){
                total=(abs(x-2)+abs(y-2));
            }
        }
    }
    cout<<total;

    return 0;
}