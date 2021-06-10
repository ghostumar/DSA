#include<iostream>
using namespace std;
int getsum(int n){
	if(n==0){
		return 0;
	}
	return getsum(n/10)+n%10;
	
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int sum=getsum(n);
	cout<<sum;
}
