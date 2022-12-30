#include <bits/stdc++.h>

using namespace std;


int main(){
		
		int n=0, a=0;
	
		cin>>n;
		vector <int> serie;
		
		for (int i=0; i<n; i++){
			cin>>a;
			serie.push_back(a);
		} 
		
		sort(serie.begin(), serie.end());
		
		for (int i=0; i<n; i++){
			cout<<serie[i]<<" ";
		} 
		
		return 0;
}