#include<iostream>
using namespace std;
int maxsum(int arr[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		int curr=0;
		for(int j=i;j<n;j++){
			curr+=arr[j];
			res=max(res,curr);
		}
		
	}
	return res;
}
int main(){
	int arr[]={2,3,-8,7,-1,2,3},n=7;
	cout<<maxsum(arr,n);
}
