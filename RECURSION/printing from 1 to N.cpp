#include<iostream>
using namespace std;
void print1toN(int n){
	if(n==0)return;
	
	print1toN(n-1);
	cout<<n<<" ";
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	print1toN(n);
	return 0;
}
