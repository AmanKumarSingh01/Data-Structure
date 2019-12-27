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

bool istrue(int n){
	int size = Size(n);
	long long int powfunc = pow(10 , size-1);
	int num1 , num2 , flag=1,n1=n;
	size-=1;
	while(size){
		num1=n%powfunc;
		num2=n/powfunc;
		n=num1*10+num2;
		if(n1>n){
			flag=0;
			break;
		}
		size--;
	}
	if(flag==1)
		return true;
	return false;
}

int main(){
	int n;
	cin>>n;
	if(istrue(n))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
