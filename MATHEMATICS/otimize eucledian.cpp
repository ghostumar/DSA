#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	int r=gcd(a,b);
	cout<<r;
}
