#include<iostream>
using namespace std;
int maxsum(int arr[],int n, int k){
	int curr_sum=0,max_sum;
	for(int i=0;i<k;i++){
		curr_sum+=arr[i];
		 max_sum=curr_sum;
	}
	for(int i=k;i<n;i++){
		curr_sum+=arr[i]-arr[i-k];
		 max_sum=max(max_sum,curr_sum);
	}
	return max_sum;
}
int main(){
	int arr[]={5,-10,6,90,3},n=5,k;
	cout<<"Enter value k"<<endl;
	cin>>k;
	cout<<maxsum(arr,n,k);
}
