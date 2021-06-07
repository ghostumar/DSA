#include<iostream>
using namespace std;
int josph(int n,int k){
	if(n==0)return 0;
	return (josph(n-1,k)+k)%n;
}
int njosph(int n,int k){
	return josph(n,k)+1;
}
int main(){
	int n,k;
	cout<<"Enter the value of n and k"<<endl;
	cin>>n>>k;
	int solution=josph(n,k);
	cout<<solution;
}
