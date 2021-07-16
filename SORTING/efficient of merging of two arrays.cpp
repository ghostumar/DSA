#include<iostream>
using namespace std;
void mergesort(int a[],int b[],int m,int n){
	int i=0,j=0;
	while(i<m && j<n){
		if(a[i]<b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else{
			cout<<b[j]<<" ";
			j++;
		}
	}
	while(i<m){
		cout<<a[i]<<" ";
		i++;
	}
	while(j<n){
		cout<<b[j]<<" ";
		j++;
	}
}
int main(){
	int a[]={10,15,20},b[]={5,6,6,15},m=3,n=4;
	mergesort(a,b,m,n);
	
}
