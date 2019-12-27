#include<bits/stdc++.h>

using namespace std;

int maximumhammingdistance(string s){
	int l = s.size(),hammingdist=INT_MIN , temp=0;
	for(int i=0 ; i<l ; i++){
		temp=0;
		for(int j=0 ; j<l ; j++){
			if(s[(i+j)%l]!=s[j]){
				temp++;
			}
		}
		hammingdist=max(temp , hammingdist);
	}
	return hammingdist;
}

int main(){
	string s;
	getline(cin,s);
	cout<<maximumhammingdistance(s)<<endl;
	return 0;
}
