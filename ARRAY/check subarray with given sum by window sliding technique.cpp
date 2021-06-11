#include<iostream>
using namespace std;
bool isgiven_sum(int arr[],int n,int givsum){
	int curr_sum=arr[0],i,start=0;
	for(int i=1;i<=n;i++){
		while(curr_sum>>givsum && start<i-1){//not working
			curr_sum-=arr[start];
		}
		if(curr_sum==givsum){
			return true;
		}
		if(i<n){
			curr_sum+=arr[i];
		}
		return (curr_sum==givsum);
	}
}
int main(){
	int arr[]={1,4,20,3,10,5},n=6,givsum=33;
	cout<<isgiven_sum(arr,n,givsum)? "true": "false";
}
