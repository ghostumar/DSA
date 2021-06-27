#include<iostream>
using namespace std;
int lastoccurence(int arr[],int n,int x){
	for(int i=n-1;i>0;i--){
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
	cout<<lastoccurence(arr,n,x);
}
