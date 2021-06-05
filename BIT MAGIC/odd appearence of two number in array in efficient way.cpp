#include<iostream>
using namespace std;
void findodd(int arr[],int n){
	int nxor=0,res1=0,res2=0;
	for(int i=0;i<n;i++){
		nxor=nxor^arr[i];
	}
	int sn=nxor & ~(nxor-1);
	for(int i=0;i<n;i++){
		if(arr[i]&sn!=0){
			res1=res1^arr[i];
		}
		else{
			res2=res2^arr[i];
		}
	}
	cout<<res1<<endl;
	cout<<res2<<endl;
}
int main(){
	int arr[]={4,9,4,4,4,5,5,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	findodd(arr,n);
}
