#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && arr[left]>largest){
		largest=left;
	}
	else if(right<n && arr[right]>largest){//not working
		largest=right;
	}
	while(largest!=i){
		swap(arr[largest],arr[i]);
		heapify(arr,n,largest);
	}
}
void buildheap(int arr[],int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}
}
void heapsort(int arr[],int n){
	buildheap(arr,n);
	for(int i=n-1;i>=0;i--){
		swap(arr[i],arr[0]);
		heapify(arr,i,0);
	}
}
int main(){
	int arr[]={10,15,50,4,20},n=5;
	heapsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
