#include<iostream>
using namespace std;
int maxsum(int arr[],int n){
	int res=arr[0];
	int maxending=arr[0];
	for(int i=1;i<n;i++){
		maxending=max(maxending+arr[i],arr[i]);
		res=max(res,maxending);
	}
	return res;
}
int main(){
	int arr[]={2,3,-8,7,-1,2,3},n=7;
	cout<<maxsum(arr,n);
}