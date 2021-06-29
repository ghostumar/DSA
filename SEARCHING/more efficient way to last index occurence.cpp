#include<iostream>
using namespace std;
int lastoccurence(int arr[],int n,int x){
	int low=0,high=n-1;
	
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>x){
		high=mid-1;
	}
	else if(arr[mid]<x){
		low=mid+1;
	}
	else{
		if(arr[mid]==n-1 || arr[mid]!=arr[mid+1]){
			return mid;
		}
		else{
			high=mid+1;
		}
	
	}
}
return -1;
}
int main(){
	int arr[]={1,10,10,20,20,40},n=6,x;
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	cout<<lastoccurence(arr,n,x);
}
