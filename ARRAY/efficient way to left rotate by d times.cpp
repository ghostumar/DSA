#include<iostream>
using namespace std;
void rotate_byd(int arr[],int n,int d){
	int temp[d];
	for(int i=0;i<d;i++){
		temp[d]==arr[i];
	}
	for(int i=d;i<n;i++){
		arr[i-d]=arr[i];
	}
	for(int i=0;i<d;i++){
		arr[n-d+i]=temp[i];//not working
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
