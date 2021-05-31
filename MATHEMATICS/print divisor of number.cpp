#include<iostream>
using namespace std;
void printdivisor(int n){
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<endl;
		}
	}
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	printdivisor(n);
}
