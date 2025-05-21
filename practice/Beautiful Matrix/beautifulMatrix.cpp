#include <bits/stdc++.h>

using namespace std;


int main(){

    int matrix, colum=0, row=0, total=0;

    for(int i=0; i<5; i++){

        row++;

        for(int i=0; i<5; i++){
            cin>>matrix;

            colum++;

            if(matrix == 1){
                int rowCount, columCount;

                rowCount = abs(row - 3);
                columCount = abs(colum - 3);

                total = rowCount + columCount;
            }
        }

        colum=0;
    }

    cout<<total;

    return 0;
}