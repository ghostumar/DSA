#include<iostream>
using namespace std;
int lastoccurence(int arr[],int low,int high,int x,int n){
	if(low>high)return -1;
	int mid=(low+high)/2;
	if(arr[mid]>x){
		lastoccurence(arr,low,mid-1,x,n);
	}
	else if(arr[mid]<x){
		lastoccurence(arr,mid+1,high,x,n);
	}
	else{
		if(arr[mid]==n-1 || arr[mid]!=arr[mid+1]){
			return mid;
		}
		else{
			lastoccurence(arr,low,mid+1,x,n);
		}
	}
	
}
int main(){
	int arr[]={1,10,10,20,20,40},n=6,x;
	int low=0,high=n-1;
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	cout<<lastoccurence(arr,low,high,x,n);
}
