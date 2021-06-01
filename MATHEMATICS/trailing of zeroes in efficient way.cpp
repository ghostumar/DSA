#include<iostream>
using namespace std;
int ctrailingzeroes(int n){
	int res=0;
	for(int i=5;i<=n;i=i*5){
		res=res+n/i;
	}
	return res;
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int x=ctrailingzeroes(n);
	cout<<"no of zeroes containing in factorial of n are "<<x;
}
