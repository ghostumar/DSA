#include<iostream>
using namespace std;
void leader(int arr[],int n){
	for(int i=0;i<n;i++){
	//	bool flag=true;
	int j;
		for(j=i+1;j<n;j++){
			if(arr[i]<=arr[j]){
			//	flag=true;
				break;
			}
			
		}
		if(j==n){
			cout<<arr[i]<<" ";
		}
		
	
	}
	
}
int main(){
	int arr[]={7,10,4,10,6,5,3,2},n=8;
	leader(arr,n);
	return 0;
}
