#include<bits/stdc++.h>

using namespace std;

void swap (int *a ,int *b);
void print(int arr[] , int n);
void Rearrange(int arr[] , int n){
	//Quick sort using 0 as pivot
	int j=n;
	for(int i=n-1 ; i>=0; i--){
		if(arr[i]==0){
			j--;
			swap(&arr[i] , &arr[j]);
		}
	}

	print(arr , n);
}

void swap (int *a ,int  *b){
	int temp =*a;
	*a=*b;
	*b=temp;
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
	for(int i=0 ; i< n ; i++)
		cin>>arr[i];
	Rearrange(arr , n);
	return 0;
}
