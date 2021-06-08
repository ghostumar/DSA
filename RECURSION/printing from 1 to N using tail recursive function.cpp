#include<iostream>
using namespace std;
void fun(int n,int k){
	if(n==0){
		return;
	}
	cout<<k;
	fun(n-1,k+1);
}
int main(){
	int n,k=1;
	cout<<"Enter the number"<<endl;
	cin>>n;
	fun(n,k);
	
}

