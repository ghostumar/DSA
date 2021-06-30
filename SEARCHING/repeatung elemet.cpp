#include<iostream>
using namespace std;
int repeatele(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
			return arr[i];	
			}
		}
	}
}
int main(){
	int arr[]={0,2,1,3,2,2},n=6;
	cout<<repeatele(arr,n);
}
