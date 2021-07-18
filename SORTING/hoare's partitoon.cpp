#include<iostream>
using namespace std;
int partition(int arr[],int l,int h){
	int p=arr[l];
	int i=l-1,j=h;
	while(true){
	
	do{
		i++;
	}while(arr[i]<arr[p]);//not working
	do{
		j--;
	}while(arr[j]>arr[p]);
	if(i>=j)return j;
	swap(arr[i],arr[j]);
}
	
}
int main(){
	int arr[]={3,8,6,12,10,7},n=6;
	int l=0,h=5;
	partition(arr,l,h);
	for(int i=0;i<p;i++){
		cout<<arr[i]<<" ";
	}
}
