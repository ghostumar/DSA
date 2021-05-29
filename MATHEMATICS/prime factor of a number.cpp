#include<iostream>
using namespace std;
bool isprime(int);
void primefactor(int n){
	for(int i=2;i<n;i++){
		if(isprime(i)){
			int x=i;
			while(n%x==0){
				cout<<i;
				x=x*i;
			}
			
		}
	
		
		
	}
	
}
bool isprime(int i){
	if(i==1)
	return false;
	if(i==2 || i==3)
	return true;
	if(i%2==0 || i%3==0)
	return false;
	for(int j=5;j*j<=i;j++){
		if(i%j==0 ||i%(j+2)==0)
		return false;
		
	}
	return true;
	}

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	primefactor(n);
}
