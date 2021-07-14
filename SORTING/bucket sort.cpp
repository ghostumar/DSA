#include<bits/stdc++.h>
using namespace std;
void bucket(int arr[],int n,int k){
	int mx=arr[0];
	for(int i=1;i<n;i++){
		mx=max(mx,arr[i]);
	}
	mx++;
	vector<int> bkt[k];
	for(int i=0;i<n;i++){
		int bi=(k*arr[i])/mx;
		bkt[bi].push_back(arr[i]);
	}
	for(int i=0;i<n;i++){
	
	sort(bkt[i].begin(),bkt[i].end());
}
int index=0;
	for(int i=0;i<k;i++){
		for(int j=0;j<bkt[i].size();j++){//not working
			arr[index++]=bkt[i][j];
		}
	}
}
int main(){
	int arr[]={20,88,10,85,75,95,18,82,60},k=5,n=9;
	bucket(arr,n,k);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
