#include<iostream>
using namespace std;
void pal(int n){
	int x=n;
	int res=0;
	while(x!=0){
	
	
	int rem=x%10;
	res=res*10+rem;
	x=x/10;
	}
	if(res==n){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	
}
int main(){
	int n;
	cout<<"Enter the no."<<endl;
	cin>>n;
	pal(n);
	
}
