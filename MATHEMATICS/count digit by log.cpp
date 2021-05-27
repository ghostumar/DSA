#include<iostream>
#include<math.h>
using namespace std;
int countdigit(long long n){
	int x=n;
	return floor(log10(x)+1);
}
int main(){
	long long n;
	cout<<"Enter the no."<<endl;
	cin>>n;
	int ncount=countdigit(n);
	cout<<ncount;
}
