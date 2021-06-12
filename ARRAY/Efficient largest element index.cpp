#include<iostream>
using namespace std;
int get_largest(int arr[],int n){
	int max_ele=0,i;
	for(i=1;i<n;i++){
		if(arr[i]>arr[max_ele]){
			max_ele=i;
		}
		
		
		
	}
	return max_ele;
	
	
}
int main(){
	int arr[]={10,5,20,8},n=4;
	cout<<get_largest(arr,n);
	return 0;
}
