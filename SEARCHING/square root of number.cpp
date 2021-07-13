#include<iostream>
using namespace std;
int squareroot(int x){
	int i=1;
	while(i*i<=x){
		i++;
	}
	return i-1;
}
int main(){
	int x;
	cout<<"Enter the to calculate square root"<<endl;
	cin>>x;
	cout<<squareroot(x);
}
