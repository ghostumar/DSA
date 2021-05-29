#include<iostream>
using namespace std;
int isprime(int i){
	if(i==1)return false;
	if(i==2 || i==3)return true;
	if(i%2==0 || i%3==0)return false;
	
for(int j=5;j*j<=i;j=j+6){
	if(i%j==0 || i%(j+2)==0){
	
	return false;
	}
	return true;
}
}
void printprime(int n){
	for(int i=1;i<=n;i++){
		if(isprime(i)){
			cout<<i<<endl;
		}
	}
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	printprime(n);
}
