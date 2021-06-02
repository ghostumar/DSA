#include<iostream>
using namespace std;
int countsetbit(int n){
	int count=0;
	while(n>0){
		if(n%2==1){//if(n&1==1)
			count++;
			}
			n=n/2;//n=n>>1;
		
		
		
		
	}
	return count;
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
    int setbit=countsetbit(n);
    cout<<setbit;
}
