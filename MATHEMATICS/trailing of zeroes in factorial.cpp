#include<iostream>
using namespace std;
int fact(int n){
	int res=1;
	for(int i=2;i<=n;i++){
		res*=i;
	}
	int x=n;
	int tres=0;
	while(res%10==0){
		tres++;
		res=res/10;
	}
	return tres;
}
int main(){
	int n;
	cout<<"Enter the no."<<endl;
	cin>>n;
	int fac=fact(n);
	cout<<fac;
}
