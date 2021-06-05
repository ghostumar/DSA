#include<iostream>
using namespace std;
int fact(int n,int k){
	if(n==0 || n==1){
		return k;
	}
	return fact((n-1),k*n);
}
int main(){
	int n,k=1;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int fac=fact(n,k);
	cout<<fac;
	
}

