#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int l,int e){
	int s=0;
	for(int i=l;i<e;i++){
		s+=arr[i];
	}
	return s;
}
int minpages(int arr[],int n,int k){//not working
	if(k==1)return sum(arr,0,n-1);
	if(n==1)return arr[0];
	int res=INT_MAX;
	for(int i=1;i<n;i++){
		res=min(res,max(minpages(arr,i,k-1),sum(arr,i-1,n-1)));
	}
	return res;
	
}
int main(){
	int arr[]={10,20,30,40},k=2,n=4;
	cout<<minpages(arr,n,k);
}
