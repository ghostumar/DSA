#include<iostream>
using namespace std;
int get_largest(int arr[],int n){
	for(int i=0;i<n;i++){
	bool flag=true;
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
			flag=true;//             not working
			
				break;
				
			}
		}
		if()
		return i;
	}
	return -1;
}
int main(){
	int arr[]={10,5,20,8},n=4;
	cout<<get_largest(arr,n);
	return 0;
}
