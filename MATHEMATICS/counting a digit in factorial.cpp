#include<iostream>
using namespace std;
int fact(int N){
	if(N==0){
		return 1;
	}
	return N*fact(N-1);
}
int main(){
	int N;
	cout<<"Enter the number"<<endl;
	cin>>N;
	long int res=fact(N);
	cout<<res;
	long int count=0;
	while(res>0){
		res=res/10;
		count++;
	}
	cout<<count;
}
