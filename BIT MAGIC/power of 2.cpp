#include<iostream>
using namespace std;
bool powof2(int n){
if(n==0)return false;
while(n!=1){
	if(n%2!=0){
		return false;
	}
	n=n/2;
	
}
return true;

}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<(bool)powof2(n);
}
