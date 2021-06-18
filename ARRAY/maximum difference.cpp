#include<iostream>
using namespace std;
int maxdiff(int arr[],int n){
	int res=arr[1]-arr[0];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n-1;j++){
			res=max(res,arr[j]-arr[i]);
		}
	}
	return res;
}
int main(){
	int arr[]={2,3,10,6,4,8,1},n=7;
	cout<<maxdiff(arr,n);
	
	
}
