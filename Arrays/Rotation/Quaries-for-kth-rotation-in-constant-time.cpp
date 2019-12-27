#include<bits/stdc++.h>

using namespace std;


void Quaries(string s , int  n , int Q[][2] , int k){
	int ptr =0;
	for(int i=0 ; i<k ; i++){
		if(Q[i][0]==1){
			ptr+=(Q[i][1])%n;
		}
		else {
			int index = (ptr + Q[i][1] -1)%n ;
			cout<<s[index]<<endl;
		}
	}
}


int main(){
	string s;
	getline(cin ,s);
	int n ;
	cin>>n;
	int Q[n][2];
	for(int i=0 ; i< n ; i++){
		for(int j=0 ; j<2 ; j++){
			cin>>Q[i][j];
		}
	}
	int k=s.size();
	Quaries(s,k,Q,n);
	return 0;
}
