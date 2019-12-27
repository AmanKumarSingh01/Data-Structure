#include<bits/stdc++.h>

using namespace std;

bool isRotation(string s1, string s2){
	int l1=s1.size() , l2=s2.size() , flag=0;
	if(l1!=l2)
		return false;
	else{
		int count=0 ;
		for(int i=0 ; i< l1 ; i++){
			if(s1[0]==s2[i]){
				flag=1;
				for(int j=0 ; j< l1 ; j++){
					if(s2[(i+j)%l1]!=s1[j]){
						flag=0;
						break;
					}
				}
				if(flag==1){
					break;
				}
			}
		}
	}
	if(flag==1){
		return true;
	}
	return false;
}
		
int main(){
	string s1,s2;
	getline(cin ,s1);
	getline(cin , s2);
	if(isRotation(s1,s2))
		cout<<"TRUE"<<endl;
	else
		cout<<"FALSE"<<endl;
	return 0;
}
