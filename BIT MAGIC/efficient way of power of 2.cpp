#include<iostream>
using namespace std;
bool powof2(int n){
	if(n==0)return false;
	return ((n & (n-1) ==0));//((n!=0)&&(n&(n-1)==0));//not working
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<(bool) powof2(n);
}
