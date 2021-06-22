#include<iostream>
using namespace std;
int getwater(int bars[],int n){
	int res=0;
	for(int i=1;i<n-1;i++){
		int lmax=bars[i];
		for(int j=0;j<i;j++){
			lmax=max(lmax,bars[j]);
		}
		int rmax=bars[i];
		for(int j=i+1;j<n;j++){
			rmax=max(rmax,bars[j]);
		}
		res+=min(lmax,rmax)-bars[i];
	}
	return res;
}
int main(){
	int arr[]={3,0,1,2,5},n=5;
	cout<<getwater(arr,n);
}
