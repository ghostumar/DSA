#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int lcm(int a,int b){
	int h=gcd(a,b);
	return a*b/h;
}

int main(){
	int a,b;
	cout<<"Enter the number"<<endl;
	cin>>a>>b;
	int l=lcm(a,b);
	cout<<l;
}
