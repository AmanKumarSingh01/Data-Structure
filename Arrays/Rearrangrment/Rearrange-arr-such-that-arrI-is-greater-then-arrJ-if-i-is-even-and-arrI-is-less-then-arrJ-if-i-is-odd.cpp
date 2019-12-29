#include<bits/stdc++.h>

using namespace std;

void Rearrange(int arr[] , int n){
    int evenPos = n / 2; 
  
    // total odd positions 
    int oddPos = n - evenPos; 
  
    int tempArr[n]; 
  
    // copy original array in an 
    // auxiliary array 
    for (int i = 0; i < n; i++) 
        tempArr[i] = arr[i]; 
  
    // sort the auxiliary array 
    sort(tempArr, tempArr + n); 
  
    int j = oddPos - 1; 
  
    // fill up odd position in original 
    // array 
    for (int i = 0; i < n; i += 2) { 
        arr[i] = tempArr[j]; 
        j--; 
    } 
  
    j = oddPos; 
  
    // fill up even positions in original 
    // array 
    for (int i = 1; i < n; i += 2) { 
        arr[i] = tempArr[j]; 
        j++; 
    } 
  
    // display array 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";  
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++){
		cin>>arr[i];
	}
	Rearrange(arr ,n);
	return 0;
i}
