#include<bits/stdc++.h>

using namespace std;

string swapchars(string s , int b , int c , int n){
	char temp;
	for(int i=0 ; i<b ; i++){
		temp=s[(i+c)%n];
		s[(i+c)%n]=s[i];
		s[i]=temp;
	}
	return s;
}

		

int main(){
	string s;
	getline(cin ,s);
	int b,c;
	cin>>b>>c;
	int n =s.size();
	s=swapchars(s ,b,c,n);
	cout<<s;
	return 0;
}
