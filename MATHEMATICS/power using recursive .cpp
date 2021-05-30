#include<iostream>
using namespace std;
int pow(int x,int n){
	if(n==0){
		return 1;
	}
	int temp=pow(x,n/2);
	temp=temp*temp;
	if(n%2==0){
		return temp;
	}
	return temp*x;
}
int main(){
	int x,n;
	cout<<"Enter the number and power"<<endl;
	cin>>x>>n;
	int power=pow(x,n);
	cout<<power;
}
