#include<iostream>
using namespace std;
int lcm(int a,int b){
	int res=max(a,b);
	while(1){
		if(res%a==0 && res%b==0){
			return res;
		}
		res++;
	}
}
int main(){
	int a,b;
	cout<<"Enter the number"<<endl;
	cin>>a>>b;
	int l=lcm(a,b);
	cout<<l;
}
