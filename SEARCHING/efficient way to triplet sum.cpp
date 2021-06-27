#include<iostream>
using namespace std;
int pairsum(int arr[],int left,int right,int s){
	int i;
	while(left<right){
		if(arr[left]+arr[right]+arr[i]==s){//not working
			return true;
		}
		else if(arr[left]+arr[right]+arr[i]<s){
			left++;
		}
		else{
			right--;
		}
	}
}
int tripletsum(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		pairsum(arr,i+1,n-1,x-arr[i]);
	}
}
int main(){
	int arr[]={2,3,4,8,9,20,40},x=32,n=7;
	cout<<(bool) tripletsum(arr,n,x)?"true":"false";
}
