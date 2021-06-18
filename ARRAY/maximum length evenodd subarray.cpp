#include<iostream>
using namespace std;
int maxevenodd(int arr[],int n){
	int res=1;
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=i+1;j<n;j++){
			if(arr[j]%2==0 && arr[j-1]%2!=0 || arr[j]%2!=0 && arr[j-1]%2==0){
				count++;
			}
			else{
				break;
			}
			res=max(res,count);
		}
	}
	return res;
}
int main(){
	int arr[]={10,12,14,7,8},n=5;
	cout<<maxevenodd(arr,n);
}
