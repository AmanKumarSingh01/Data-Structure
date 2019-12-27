#include<bits/stdc++.h>

using namespace std;

int Size(int n){
	int count=0;
	while(n){
		count++;
		n=n/10;
	}
	return count;
}

void Generate_All(int n){
	int size = Size(n);
	int powfunc = pow(10 , size-1);
	int temp1 , temp2;
	size-=1;
	while(size){
		temp1=n%powfunc;
		temp2=n/powfunc;
		n=temp1*10+temp2;
		cout<<n<<endl;
		size--;
	}
}
			

int main(){
	int n;
	cin>>n;
	Generate_All(n);
	return 0;
}
