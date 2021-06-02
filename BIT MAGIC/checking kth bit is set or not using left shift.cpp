#include<iostream>
using namespace std;
void kthbit(int n,int k){
	if(n&(1<<(k-1))!=0){
		cout<<"yes"<<endl;
	}
	else{
		printf("no");
	}
}
int main(){
	int n,k;
	cout<<"Enter the numbers"<<endl;
	cin>>n>>k;
    kthbit(n,k);
}
