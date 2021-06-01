#include<iostream>
using namespace std;
int gcd(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	return a;
}
int main(){
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	int r=gcd(a,b);
	cout<<r;
}
