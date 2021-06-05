#include<iostream>
using namespace std;
int ispalindrome(string &s,int start,int end){
	if(start>=end){
		return true;
	}
	return (s[start]==s[end]) && ispalindrome(s,start+1,end-1);//not working properly
}
int main(){
	string s;
	int n=s.length();
	int start=0,end=n-1;
	cout<<"Enter the string"<<endl;
	cin>>s;
	cout<<(bool)ispalindrome(s,start,end);
}
