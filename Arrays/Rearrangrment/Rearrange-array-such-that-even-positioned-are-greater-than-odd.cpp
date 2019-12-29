#include<bits/stdc++.h>

using namespace std;

void print(int arr[] , int n);
void Rearrange(int arr[] , int n){
	sort(arr , arr+n);
	int ans[n] , p=0  , q=n-1;
	for(int i=0 ; i< n ; i++){
		if(i%2==0){
			ans[i]=arr[q]; 
			q--;
		}

		else{
			ans[i]=arr[p]; 
			p++;
		}
	}
	print(ans , n);
}

void print(int arr[], int n){
	for(int i=0 ; i< n ; i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++)
		cin>>arr[i];
	Rearrange(arr , n);
	return 0;
}
