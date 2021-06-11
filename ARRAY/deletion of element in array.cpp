#include<iostream>
using namespace std;
int delete_ele(int arr[],int n,int x){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==x){
			break;
		}
	}
	if(i==n){
		return n;
	}
	for(int j=i;j<n-1;j++){
		arr[j]=arr[j+1];
	}
	return n-1;
}
int main(){
	int arr[]={3,8,12,5,6},x;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Arraye before deletion"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter element to be deleted"<<endl;
	cin>>x;
	n=delete_ele(arr,n,x);
	cout<<"Array after deletion"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;	
}
