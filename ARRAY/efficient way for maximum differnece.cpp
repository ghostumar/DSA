#include<iostream>
using namespace std;
int maxdiff(int arr[],int n){
	int res=arr[1]-arr[0];
	int minvalue=arr[0];
	for(int i=1;i<n;i++){
		res=max(res,arr[i]-minvalue);
		minvalue=min(minvalue,arr[i]);
	}
	return res;
	
}
int main(){
	int arr[]={2,3,10,6,4,8,1},n=7;
	cout<<maxdiff(arr,n);
	
	
}
