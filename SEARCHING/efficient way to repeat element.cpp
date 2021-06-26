#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int repeatele(int arr[],int n){
	bool visit[n];
	memset(visit,false,sizeof(visit));//not working
	for(int i=0;i<n;i++){
		if(visit[arr[i]]){
			return arr[i];
			visit[arr[i]]=true;
		}
	}
	return -1;
}
int main(){
	int arr[]={0,2,1,3,2,2},n=6;
	cout<<repeatele(arr,n);
}
