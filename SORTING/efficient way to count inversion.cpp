#include<iostream>
using namespace std;
int countNmerge(int arr[],int l,int m,int r){
	int n1=m-l+1,n2=r-m;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++){
	left[i]=arr[i+l];	
	}
	for(int j=0;j<n2;j++){//not working
		right[j]=arr[m+1+j];
	}
	int i=0,j=0,k=l;
	int res=0;
	while(i<n1 && j<n2){
		if(left[i]<right[j]){
			arr[k]=left[i];
			i++;
			k++;
		}
		else{
			arr[k]=right[j];
			j++;
			k++;
			res+=n1-i;
		}
		while(i<n1){
			arr[k]=left[i];
			i++;
			k++;
			
		}
		while(j<n2){
			arr[k]=right[j];
			j++;
			k++;
		}
		return res;
	}
}
int inversion(int arr[],int l,int r){
	int res=0;
	while(r>l){
		int m=l+(m-l)/2;
		res+=inversion(arr,l,m);
		res+=inversion(arr,m+1,r);
		res+=countNmerge(arr,l,m,r);
	}
	return res;
}
int main(){
	int arr[]={2,4,1,2,5},n=5;
	int l=0,r=4;
	cout<<inversion(arr,l,r);
}
