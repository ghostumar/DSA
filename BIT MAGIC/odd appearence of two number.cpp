#include<iostream>
using namespace std;
void findodd(int arr[],int n){
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[j]==arr[i]){
				count++;
			}
		
			}
				if(count%2!=0){
				cout<<arr[i];
				
		}
	}
}
int main(){
	int arr[]={4,3,4,4,4,5,5,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	findodd(arr,n);
}
