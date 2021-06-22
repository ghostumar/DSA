#include<iostream>
using namespace std;
void reverse_array(int arr[],int n){
	int low=0,high=n-1;
	while(low<high){
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
}
int main(){
	int arr[]{10,5,7,30},n=4;
	reverse_array(arr,n);
	cout<<"array after reverse"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
