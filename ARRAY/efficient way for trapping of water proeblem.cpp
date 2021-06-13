#include<iostream>
using namespace std;
int getwater(int bars[],int n){
	int res=0;
	int lmax[n],rmax[n];
	lmax[0]=bars[0];
	for(int i=1;i<n;i++){
		lmax[i]=max(bars[i],lmax[i-1]);
	}
	rmax[n-1]=bars[n-1];
	for(int i=n-2;i>=0;i--){
		rmax[i]=max(bars[i],rmax[i+1]);
	}
	for(int i=1;i<n-1;i++){
		res+=min(lmax[i],rmax[i])-bars[i];
	}
	return res;
}
int main(){
	int arr[]={5,0,6,2,3},n=5;
	cout<<getwater(arr,n);
}
