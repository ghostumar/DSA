#include<iostream>
using namespace std;
int countsubset(int arr[],int n,int sum){
	if(n==0){
		return(sum==0)?1:0;
		
	}
	return countsubset(arr,n-1,sum)+countsubset(arr,n-1,sum-arr[n-1]);
}
int main(){
	int arr[]={10,5,2,3,6},n=5,sum=8;
	int counts=countsubset(arr,n,sum);
	cout<<counts;
	
}
