#include<iostream>
using namespace std;
bool isfeasible(int arr[],int k,int n,int ans){
	int sum=0,req=1;
	for(int i=0;i<n;i++){
		if(arr[i]+sum>ans){
			req++;
			sum=arr[i];
		}
		sum+=arr[i];
	}
	return (req<=k);
}
int minpages(int arr[],int k,int n){//not working
	int sum=0,mx=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		mx=max(mx,sum);
	}
	int res=0,low=mx,high=sum;
	while(low<=high){
		int mid=(low+high)/2;
		if(isfeasible(arr,k,n,mid)){
			res=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return res;
}
int main(){
	int arr[]={10,20,10,30},k=2,n=4;
	cout<<minpages(arr,k,n);
}
