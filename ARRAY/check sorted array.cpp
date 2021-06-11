#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] > arr[j])//not working
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
