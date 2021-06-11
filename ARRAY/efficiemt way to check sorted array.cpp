#include<iostream>
using namespace std;
bool sorted(int arr[],int n){//not working
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	int arr[5];
	cout<<"Enter the element for array"<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[5];
	}
	printf("%s",sorted(arr,5)?"true":"false");
}
