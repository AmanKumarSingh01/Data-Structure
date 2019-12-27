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

int EVEN_COUNT(int n){
	int size = Size(n);
	int count=0 , N,temp1 , temp2 , powfun;
	N=size;
	powfun=pow(10,size-1);
	while(N){
		temp1=n%powfun;
		temp2=n/powfun;
		n=temp1*10+temp2;
		N--;
		if(n%2==0)
			count++;
	}
	return count;
}
int main(){
	int n , s ;
	cin>>n;
	s=Size(n);
	int e = EVEN_COUNT(n);
	cout<<"Even "<<e<<endl;
	cout<<"Odd "<<s-e<<endl;
	return 0;
}
