#include<iostream>
using namespace std;
int countsetbit(int n){
	int count=0;
	while(n>0){
		n=(n&(n-1));
		count++;
		
		
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
