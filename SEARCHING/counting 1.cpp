#include<iostream>
using namespace std;
int count1(int arr[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			count++;
		}
	}
	return count;
}
int main(){
	int arr[]={0,0,0,1,1,1,1},n=7;
	cout<<count1(arr,n);
}
