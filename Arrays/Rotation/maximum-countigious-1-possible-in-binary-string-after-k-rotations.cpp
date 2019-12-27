#include<bits/stdc++.h>

using namespace std ;

int maxcount(string s , int k){
	vector <int> v;
	int n = s.size() , count =0;
	for(int i=0 ; i<n ; i++){
		if(s[i]=='1'){
			count++;
		}
		else{
			v.push_back(count);
			count=0;
		}
	}
	for(int i=0 ; i<k;  i++){
		sort(v.begin() , v.end() , greater<int>());
		int temp1=v[0] , temp2=v[1];
		v.push_back(temp1+temp2);
		v[0]=-1;
		v[1]=-1;
	}
	sort(v.begin() , v.end() , greater<int>());
	return v.front();
}

int main(){
	string s;
	getline(cin , s);
	int k;
	cin>>k;
	int sol = maxcount(s , k);

	cout<<sol<<endl;
	return 0;
}
