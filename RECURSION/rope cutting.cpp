#include<iostream>
using namespace std;
int maxpiece(int n,int a,int b,int c){
	if(n==0)return 0;
	if(n<=-1)return -1;
	int res=max(maxpiece(n-a, a, b, c), 
	          max(maxpiece(n-b, a, b, c), 
	          maxpiece(n-c, a, b, c)));
	if(res==-1)return -1;
	return res+1;
}
int main(){
	int n,a,b,c;
	cout<<"Enter the number"<<endl;
	cin>>n>>a>>b>>c;
	int sum=maxpiece(n,a,b,c);
	cout<<sum;
}
