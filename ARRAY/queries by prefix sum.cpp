#include<iostream>
using namespace std;
int prefix_sum(int arr[],int n){
	int sum=arr[0];
	for(int i=1;i<n;i++){
		sum=sum[i-1]+arr[i];//not working
	}
	return sum;
}
int getsum(int prefix_sum(arr,n),int l,int r){
	if(l!=0){
		return prefix_sum[r]-prefix_sum[l-1];
	}
	else{
		return prefix_sum[r];
	}
	
}
int main(){
	int arr[]={2,8,3,9,6,5,4},n=7;
	//prefix_sum(arr,n);
	cout<<getsum(prefix_sum(arr,n),1,3)<<endl;
	cout<<getsum(prefix_sum(arr,n),0,2)<<endl;
}
