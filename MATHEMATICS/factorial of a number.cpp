#include<iostream>
using namespace std;
int fact(int n){
	int res=1;
	for(int i=2;i<=n;i++){
		res*=i;
	}
	return res;
}
int main(){
	int n;
	cout<<"Enter the no."<<endl;
	cin>>n;
	int fac=fact(n);
	cout<<fac;
}
