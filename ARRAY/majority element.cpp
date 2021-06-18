#include<iostream>
using namespace std;
int majorityele(int arr[],int n){
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){//not working
				count++;
			}
			
			}
			if(count>n/2){
				return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={8,3,4,8,8},n=5;
	cout<<majorityele(arr,n);
}
