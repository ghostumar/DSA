#include<iostream>
using namespace std;
int joseph(int n,int k){
	if(n==0){
		return 0;
	}
	return (joseph(n-1,k)+k)%n;
}
int main(){
	int n,k;
	cout<<"Enter the value of n and k"<<endl;
	cin>>n>>k;
	int solution=joseph(n,k);
	cout<<solution;
}
