#include<iostream>
using namespace std;
int largest_ele(int arr[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[res]){
			res=i;
		}
	}
	return res;
}
int get_secondlargest(int arr[],int n){
	int largest=largest_ele(arr,n);
	int res=-1;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[largest]){
			if(res==-1){
				res=i;
			}
			else{
				if(arr[i]>arr[res]){
					res=i;
				}
			}
		}
	}
	return res;
}
int main(){
	int arr[]={20,10,5,20,8},n=5;
	cout<<get_secondlargest(arr,n);
	return 0;
}
