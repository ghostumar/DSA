#include<iostream>
using namespace std;
int countdigit(int n){
	int x=n;
	if(x==0){
		return 0;
	}
	return 1+countdigit(n/10);
}
int main(){
	int n;
	cout<<"Enter the no."<<endl;
	cin>>n;
	int ncount=countdigit(n);
	cout<<ncount;
}
