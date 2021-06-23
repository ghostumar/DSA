#include<iostream>
using namespace std;
int firstoccurence(int arr[],int low,int high,int x){
	if(low>high)return -1;
	int mid=(low+high)/2;
	if(arr[mid]>x){
		firstoccurence(arr,low,mid-1,x);
	}
	else if(arr[mid]<x){
		firstoccurence(arr,mid+1,high,x);
	}
	else{
		if(arr[mid]==0 || arr[mid]!=arr[mid-1]){
			return mid;
		}
		else{
			firstoccurence(arr,low,mid-1,x);
		}
	}
	
}
int main(){
	int arr[]={1,10,10,20,20,40},n=6,x;
	int low=0,high=n-1;
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	cout<<firstoccurence(arr,low,high,x);
}
