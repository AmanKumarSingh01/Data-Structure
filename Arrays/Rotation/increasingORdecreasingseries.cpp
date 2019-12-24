#include<bits/stdc++.h>

using namespace std;


bool istrue(int arr[] , int n){
	//Here there are many cases these are 
	/* CASE 1: array may be sorted increasingly or decreasingly in order
	 * CASE 2: array may become increasing order after n rotation
	 * CASE 3: array may become decreasing order after n rotation
	 * CASE 4: array may not follow nay of above case*/


	int flag =0;

	//check for increasing order
	for(int i=0 ; i<n-2 ;i++){
		if(!(arr[i]>=arr[i+1]&&arr[i+1]>=arr[i+2])){
			flag=1;
			break;
		}
	}
	if(flag==0)
		return true;

	flag=0;
	//check for decreasing order
	for(int i=0 ; i<n-2 ; i++){
		if(!(arr[i]<=arr[i+1]and arr[i+1]<=arr[i+2])){
			flag=1;
			break;
		}
	}
	if(flag==0)
		return true;
	
	//for CASE: 2 and CASE: 3
	//we will find the maximum and minimum index 
	int maximum=INT_MIN , minimum=INT_MAX , maxi , mini;
	for(int i=0 ; i<n ; i++){
		if(arr[i]>maximum){
			maximum=arr[i];
			maxi=i;
		}
		if(arr[i]<minimum){
			minimum=arr[i];
			mini=i;
		}
	}

	//CHECK FOR INCREASING ORDER 
	flag=1;
	for(int i=0 ; i< maxi ; i++){
		if(arr[i]>arr[i+1]){
			flag=0;
			break;
		}
	}
	if(flag==1 and maxi+1==mini){
		flag=1;
		//Till here the array is of increasing order form now onwards it must be of decreasing order 
		for(int i=mini ; i<n-1 ; i++){
			if(arr[i]>arr[i+1]){
				flag=0;
			}
		}
	}
	if(flag==1)
		return true ;
	//Check for decreasng order
	
	flag=1;
	for(int i=0 ; i<mini ; i++){
		if(arr[i]<arr[i+1]){
			flag=0;
			break;
		}
	}
	if(flag==1 and maxi-1==mini){
		flag=1;
		for(int i=maxi ; i<n-1 ; i++){
			if(arr[i]<arr[i+1]){
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
		return true;


	return false;
}
	





int main(){
	int n ,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	if(istrue(arr , n))
		cout<<"True";
	else
		cout<<"False";

	return 0;
}

