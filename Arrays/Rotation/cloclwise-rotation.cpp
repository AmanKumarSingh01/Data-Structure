#include<bits/stdc++.h>

using namespace std;

int main(){
	int n , k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=0 ; i<n; i++)	{
		cin>>arr[i];
	}
	for(int i=0 ; i<n ; i++){
		cout<<arr[(i+k)%n]<<"\t";
	}
	return 0;
}
