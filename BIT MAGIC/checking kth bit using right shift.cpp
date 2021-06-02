#include<iostream>
using namespace std;
void kthbit(int n,int k){
	if((n>>(k-1))&1!=0){
		printf("yes\n");
	}
	else{
		cout<<"no";
	}
}
int main(){
	int n,k;
	cout<<"Enter the numbers"<<endl;
	cin>>n>>k;
    kthbit(n,k);
}
