#include<iostream>
using namespace std;
bool isgiven_sum(int arr[],int n,int givsum){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){//not working
			sum+=arr[j];
		}
		if(givsum==sum){
			return true;
		}
	}
	return false;
	
}
int main(){
	int arr[]={1,4,20,3,10,5},n=6,givsum=33;
	cout<<isgiven_sum(arr,n,givsum)? "true": "false";
}
