#include<iostream>
#include<vector>
using namespace std;
int n;
int missingno(int a[],int l){
	int res=0;
	vector<int> numb(l+1,n);
	for(int i=0;i<l;i++){
		res=res^a[i];//not working
	}
	for(int i=1;i<n;i++){
		res=res^numb[i];
	}
	return res;

	
}
int main(){
	int a[]={1,4,3},l;
	
	l=sizeof(a)/sizeof(a[0]);
	int num=missingno(a,l);
	cout<<num;
}
