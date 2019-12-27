#include<bits/stdc++.h>

using namespace std;

bool issorted(int arr[] , int n){
        int flag=1;
        for(int i=0 ; i<n-2 ; i++){
                if(!(arr[i]<=arr[i+1] and arr[i+1]<=arr[i+2])){
                        flag=0;
                        break;
                }
        }
        if(flag==1){
                return true;
        }
	int i;
	for(i=0; i< n-1 ; i++){
		if(arr[i]>=arr[i+1]){
			break;
		}
	}
	i++;
	flag=1;
	for(int k=i ; k<n-1 ; k++){
		if(arr[i]>arr[i+1]){
			flag=0;
			break;
		}
	}

	if(flag==0)
		return true;
	else{
		if(arr[n-1]<=arr[0])
			return true;
	}

	return false;


}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++){
		cin>>arr[i];
	}
	if(issorted(arr , n)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}

