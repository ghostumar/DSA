#include<iostream>
using namespace std;
int maxconsecutive1(int arr[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=i;j<n;j++){
			if(arr[j]==1){
				count++;
			}
			else{
				break;
			}
		}
		res=max(res,count);
	}
	return res;
}
int main(){
	int arr[]={1,0,1,1,1,1,0,1,1},n=9;
	cout<<maxconsecutive1(arr,n);
}
