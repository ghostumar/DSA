#include<iostream>
using namespace std;
int binarysearch(int arr[],int x,int low,int high){
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==x)return mid;
		else if(arr[mid]>x)high=mid-1;
		else{
			low=mid+1;
		}
		
	}
	return -1;
}
int search(int arr[],int x){
	if(arr[0]==x)return 0;
	int i=1;
	while(arr[i]<x){
		i=i*2;
	}
	if(arr[i]==x)return i;
	else{
		return binarysearch(arr,x,(i/2)+1,i-1);
	}
}
int main(){
	int arr[]={1,10,15,20,40,80,80,100,120,500},x;
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	cout<<search(arr,x);
}
