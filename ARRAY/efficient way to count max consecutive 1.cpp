#include<iostream>
using namespace std;
int maxconsecutive1(int arr[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		int count;
		if(arr[i]==0){
			count=0;
		}
		else{
			count++;
			res=max(count,res);
		}
	}
	return res;
}
int main(){
	int arr[]={1,0,1,1,1,1,0,1,1},n=9;
	cout<<maxconsecutive1(arr,n);
}
