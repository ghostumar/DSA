#include<iostream>
using namespace std;
int tripletsum(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if(arr[i]+arr[j]+arr[k]==x){
					return true;
				}
			}
		}
	}
	return false;
	
}
int main(){
	int arr[]={2,3,4,8,9,20,40},x=32,n=7;
	cout<<(bool) tripletsum(arr,n,x)?"true":"false";
}
