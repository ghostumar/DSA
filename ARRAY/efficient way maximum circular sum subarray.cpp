#include<iostream>
using namespace std;
int maxnormalsum(int arr[],int n){
	int res=arr[0];
	int maxending=arr[0];
	for(int i=1;i<n;i++){
		maxending+=arr[i];
		res=max(res,maxending);
	}
	return res;
}
int maxcircularsum(int arr[],int n){
	int normalsum=maxnormalsum(arr,n);//not working
	if(normalsum<0){
		return normalsum;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		arr[i]=-arr[i];
	}
	int mxcircularsum=sum+maxnormalsum(arr,n);
	return max(normalsum,mxcircularsum);
	
}
int main(){
	int arr[]={8,-4,3,-5,4},n=5;
	cout<<maxcircularsum(arr,n);
	return 0;
}
