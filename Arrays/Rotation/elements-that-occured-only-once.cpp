#include<bits/stdc++.h>

using namespace std;

void elements_occured_once(int arr[] , int n){
	sort(arr , arr+n);
	for(int i=1 ; i<n-1 ;i++){
		if(arr[i]!=arr[i+1] and arr[i]!=arr[i-1]){
			cout<<arr[i]<<"\t";
		}
	}
	if(arr[0]!=arr[1]){
		cout<<arr[0]<<"\t";
	}
	if(arr[n-1]!=arr[n-2]){
		cout<<arr[n-1]<<"\t";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++){
		cin>>arr[i];
	}
	elements_occured_once(arr ,n );
	return 0;
}
