#include<iostream>
using namespace std;
int gcd(int a,int b){
	int res=min(a,b);
	while(res>0){
		if(a%res==0 && b%res==0){
			break;
		}
		res--;
	}
	return res;
}
int main(){
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	int r=gcd(a,b);
	cout<<r;
}
