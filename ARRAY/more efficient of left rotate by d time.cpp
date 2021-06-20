#include<iostream>
using namespace std;
void reverse(int arr[],int n,int d){
	int low=0,high=n-1;
	while(low<high){
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
void rotate_byd(int arr[],int n,int d){//not working
	if(d==0)
	return;
	
	//d=d%n;
	if(d=d%n){
	
	
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
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
