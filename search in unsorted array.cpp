#include<iostream>
using namespace std;
int search(int arr[],int x,int n){
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			return i;
		}
		
	}
	return -1;
}
int main(){
	int arr[4]={20,5,7,25};
	int x=5;
	int n=4;
	int res=search(arr,x,n);
	cout<<res;
}
