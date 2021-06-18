#include<iostream>
using namespace std;
void rotate_by1(int arr[],int n){
	int temp=arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
int main(){
	int arr[]={1,2,3,4,5},n=5;
	rotate_by1(arr,n);
	cout<<"Array after rotate bye 1"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
