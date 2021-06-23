#include<iostream>
using namespace std;
int countocc(int arr[],int n,int x){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==x)count++;
		
	}
	return count;
}
int main(){
	int arr[]={10,20,20,20,30,30},n=6,x;
	cout<<"Occurence of element"<<endl;
	cin>>x;
	cout<<countocc(arr,n,x);
}
