#include<iostream>
using namespace std;
int remove_duplicate(int arr[],int n){
	int temp[n];
	temp[0]=arr[0];
	int res=1;
	for(int i=1;i<n;i++){
	if(temp[res-1]!=arr[i]){
		temp[res]=arr[i];
		res++;
	}	
	}
	for(int i=0;i<n;i++){
		arr[i]=temp[i];
	}
	return res;
}
int main(){
	int arr[]={10,20,20,30,30,30,30},n=7;
	n=remove_duplicate(arr,n);
	cout<<"Array after removing duplicate element"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	cout<<n;
}
