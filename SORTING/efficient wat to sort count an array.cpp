#include<iostream>
using namespace std;
void countsort(int arr[],int n,int k){
	int count[k];
	for(int i=0;i<k;i++){//or int count[k]={0};
		count[i]=0;
	}
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	for(int i=1;i<n;i++){
		count[i]=count[i-1]+count[i];
	}
	int output[k];
	for(int i=n-1;i>=0;i--){
		output[count[arr[i]]-1]=arr[i];
		count[arr[i]]--;
	}
	for(int i=0;i<n;i++){
		arr[i]=output[i];
	}
}
int main(){
	int arr[]={1,4,4,1,0,1},n=6,k=5;
	countsort(arr,n,k);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
