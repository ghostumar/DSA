#include<iostream>
using namespace std;
int pairsum(int arr[],int n,int x){
	int left=0,right=n-1;
	while(left<right){
		if(arr[left]+arr[right]==x){
			return true;
		}
		else if(arr[left]+arr[right]>x){
			right--;
		}
		else{
			left++;
		}
	}
	return false;
}
int main(){
	int arr[]={3,5,9,2,8,10,11},x=17,n=7;
	cout<<(bool) pairsum(arr,n,x)? "true": "false";
}
