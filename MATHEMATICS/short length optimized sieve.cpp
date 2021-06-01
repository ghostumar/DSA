#include<iostream>
#include<vector>

using namespace std;
int i;
void sieve(int n){
	vector<bool> isprime(n+1,true);
	for(int i=2;i<=n;i++){//nor working.
		if(isprime[i]){
			cout<<i<<" ";
		}
	}
	for(int j=i*i;j<=n;j=j+i){
		isprime[j]==false;
	}
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	sieve(n);
}
