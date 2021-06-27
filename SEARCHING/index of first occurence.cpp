#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,10,10,20,20,40},n=6,x;
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	cout<<firstoccurence(arr,n,x);
}
