#include<iostream>
using namespace std;
int table[256];
void initialise(){
	table[0]=0;
	for(int i=1;i<256;i++){
		table[i]=(i&1)+table[i/2];
	}
}
countbit(int n){
	int res=table[n&0xff];
	n=n>>8;
	res=res+table[n&0xff];
	n=n>>8;
	res=res+table[n&0xff];
	n=n>>8;
	res=res+table[n&0xff];
	n=n>>8;
	return res;
	
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int count=countbit(n);
	cout<<count;
}
