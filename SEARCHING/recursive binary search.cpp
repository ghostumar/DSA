#include<iostream>
using namespace std;
int bsearch(int arr[],int low,int high,int x){
	if(low>high)return -1;
	int mid=(low+high)/2;
	if(arr[mid]==x)return mid;
	else if(arr[mid]>x){
		bsearch(arr,low,mid-1,x);
	}
	else{
		bsearch(arr,mid+1,high,x);
	}
	
}
int main(){
	int arr[]={10,20,30,40,50,60},n=6,x;
	int low=0,high=n-1;
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	cout<<bsearch(arr,low,high,x);
}
