#include<iostream>
using namespace std;
int get_secondlargest(int arr[],int n){
	int largest=0,res=-1;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[largest]){
			res=largest;
			largest=i;
		}
		else if(arr[i]!=arr[largest]){
			if(res=-1 || arr[i]>arr[res]){//     not working
				res=i;
				
			}
		}
			
	}
	return res;
	

}
int main(){
	int arr[]={5,20,12,20,8},n=5;
	cout<<get_secondlargest(arr,n);
	return 0;
}
