#include<iostream>
using namespace std;
void leader(int arr[],int n){
	int current_leader=arr[n-1];
	cout<<current_leader<<" ";
	for(int i=n-2;i>=0;i--){
		if(arr[i]>current_leader){
			current_leader=arr[i];
			cout<<current_leader<<" ";
		}
		
	}
}
int main(){
	int arr[]={7,10,4,10,6,5,3,2},n=8;
	leader(arr,n);
	return 0;
}
