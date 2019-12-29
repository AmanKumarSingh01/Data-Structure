#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n);
void rearrange(int arr[] , int n){
	sort(arr , arr+n);
	int f=0 , b=n-1 , i=0;
	int ans[n];
	while(f<=b and i<n){
		if(i%2==0){
			ans[i]=arr[f];
			f++;
		}
		else{
			ans[i]=arr[b];
			b--;
		}
		i++;
	}
	print(ans , n);
}

void print(int arr[] , int n){
	for(int i=0 ; i< n ; i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i<n ; i++)
		cin>>arr[i];
	rearrange(arr ,n);
	return 0;
}
