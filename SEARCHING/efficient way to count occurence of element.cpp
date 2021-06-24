#include<iostream>
using namespace std;
int firstindex(int arr[],int n,int x){
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
			if(mid==0 || arr[mid]!=arr[mid-1]){
				return mid;
			}
			else{
				high=mid-1;
			}
		}
	}
	return -1;
}
int lastindex(int arr[],int n,int x){
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
			if(mid==n-1 || arr[mid]!=arr[mid+1]){
				return mid;
			}
			else{
				low=mid+1;
			}
		}
	}	
}
int countocc(int arr[],int n,int x){
	int first=firstindex(arr,n,x);
	if(first==-1)return 0;
	else
	return lastindex(arr,n,x)-first+1;
}
int main(){
	int arr[]={10,20,20,20,30,30},n=6,x;
	cout<<"Occurence of element"<<endl;
	cin>>x;
	cout<<countocc(arr,n,x);
}
