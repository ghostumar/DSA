#include<iostream>
using namespace std;
int maxprofit(int price[],int n){
	int profit=0;
	for(int i=1;i<n;i++){
		if(price[i]>price[i-1]){
			profit+=price[i]-price[i-1];
		}
	}
	return profit;
}
int main(){
	int arr[]={1,5,3,1,2,8},n=6;
	cout<<maxprofit(arr,n);
}
