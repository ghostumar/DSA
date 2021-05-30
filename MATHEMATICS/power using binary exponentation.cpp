#include<iostream>
using namespace std;
int pow(int x,int n){
	int res=1;
	while(n>0){
	
	if(res%2!=0){
		res=res*x;
	}
		else{//not working
		
		x=x*x;
		n=n/2;
	}
}
	return res;
}
int main(){
	int x,n;
	cout<<"Enter the number and power"<<endl;
	cin>>x>>n;
	int power=pow(x,n);
	cout<<power;
}
