#include<bits/stdc++.h>

using namespace std;


bool istrue(string s1 , string s2){
	int n=s1.size();
	if(s1.size()!=s2.size()){
		return false;
	}
	int ptr=0,flag=1;
	for(int i=0 ; i<s1.size() ; i++){
		ptr=(ptr+i)%n;
		flag=1;
		for(int j=0 ; j<s1.size() ; j++){
			if(s1[(ptr+j)%n]!=s2[j]){
				flag=0;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==1)
		return true;
	return false;
}



int main(){
	string s1, s2;
	getline(cin , s1);
	getline(cin,s2);
	if(istrue(s1 , s2))
		cout<<"YES";
	else
		cout<<"False";
	return 0;
}
