#include<iostream>
#include<algorithm>
using namespace std;
int mindiff(int arr[],int n){
	int res=INT_MAX;
	sort(arr,arr+n);
	for(int i=1;i<n;i++){
		res=min(res,arr[i]-arr[i-1]);
	}
	return res;
}
int main(){
	int arr[]={8,-1,0,3},n=5;
	cout<<mindiff(arr,n);
}
