#include<iostream>
#include<vector>
using namespace std;
void sieve(int n){
	vector<bool> isprime(n+1,true);
	for(int i=2;i*i<=n;i++){
		if(isprime[i]){
			for(int j=i*i;j<=n;j=j+i){//not working
				isprime[j]==false;
			}
		}
		
	}
	for(int i=2;i<=n;i++){
		if(isprime[i]){
		
			cout<<i<<" ";
	}
	}
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	sieve(n);
}
