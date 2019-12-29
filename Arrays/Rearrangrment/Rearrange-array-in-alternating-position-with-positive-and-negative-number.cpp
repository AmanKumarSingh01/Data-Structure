#include<bits/stdc++.h>

using namespace std;
void swap (int *a , int *b);
void print (int arr[] , int n);
void Rearrange(int arr[] , int n){
	//Quick sort taking zero as pivot
	int j=-1;
	for(int i=0 ; i< n ; i++){
		if(arr[i]<0){
			j++;
			swap(&arr[i] , &arr[j]);
		}
	}
	int pos = j+1 , neg=0;
	while(neg<pos and arr[neg]<0 and pos<n){
		swap(&arr[pos] , & arr[neg]);
		pos++;
		neg+=2;
	}
	print(arr , n);
}

void swap(int *a , int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

void print (int arr[] , int n){
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
