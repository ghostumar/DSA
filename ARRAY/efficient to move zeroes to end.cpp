#include<iostream>
using namespace std;
void zerotoend(int arr[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
}
int main(){
	int arr[]={8,5,0,0,9,7,0,3,5},n=9;
	zerotoend(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;

}
