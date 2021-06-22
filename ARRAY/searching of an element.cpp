#include<iostream>
using namespace std;
int searchelement(int arr[],int n,int x){
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x){
			return i;
		}	
		
		
		
	}
	return -1;
}
int main(){
	int arr[]={20,5,7,25};
	int x;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Enter the element to be searched"<<endl;
	cin>>x;
	
	
	cout<<searchelement(arr,n,x);
}
