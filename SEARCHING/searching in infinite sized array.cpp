#include<iostream>
using namespace std;
int search(int arr[],int x){
	int i=0;
	while(true){
		if(arr[i]==x)return i;
		if(arr[i]>x)return -1;
		i++;
	}
	
}
int main(){
	int arr[]={1,10,15,20,40,80,80,100,120,500},x;
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	cout<<search(arr,x);
}
