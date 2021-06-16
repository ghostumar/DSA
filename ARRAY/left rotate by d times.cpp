#include<iostream>
using namespace std;
void rotate_by1(int arr[],int n){
	int temp=arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
}
void rotate_byd(int arr[],int n,int d){
	for(int i=0;i<d;i++){
		rotate_by1(arr,n);
	}
}
int main(){
	int arr[]={1,2,3,4,5},n=5,d;
	cout<<"no. of left rotate"<<endl;
	cin>>d;
	rotate_byd(arr,n,d);
	cout<<"Array after rotate bye d"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
