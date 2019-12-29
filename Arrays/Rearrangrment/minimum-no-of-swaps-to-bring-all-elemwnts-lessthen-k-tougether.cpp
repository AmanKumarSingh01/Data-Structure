#include<bits/stdc++.h>

using namespace std;

int minimumswap(int arr[] , int n , int k){
	int count=0 , bad =0 , ans;
	
	//This is an example of sliding window problem.Size of window is determined by the number of words less then k
	for(int i=0 ; i< n ; i++){
		if(arr[i]<=k)
			count++;
	}
	
	//Finding number of unwanted number's in the window
	for(int i=0; i <count ; i++){
		if(arr[i]>k)
			bad++;
	}
	
	//Now sliding the window
	ans = bad;	
	for(int i=0  , j = count ; j< n ; j++ , i++){
		if(arr[i]>k)
			bad--;
		if(arr[j]>k)
			bad++;

		ans=min(ans , bad);
	}
	return ans;
}



int main(){
	int n;
	cin>>n;
	int arr[n] , k;
	for(int i=0 ; i< n ; i++)
		cin>>arr[i];
	cin>>k;
	cout<<minimumswap(arr , n, k)<<endl;
	return 0;
}
