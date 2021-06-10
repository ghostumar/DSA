#include<iostream>
using namespace std;
void subset(string s,string curr,int i){
	if(i==s.length()){
		cout<<curr<<" ";
		return ;
	}
	subset(s,curr,i+1);
	subset(s,curr+s[i],i+1);
}
int main(){
	string s,curr="";
	int i=0;
	cout<<"Enter the string"<<endl;
	cin>>s;
	subset(s,curr,i);

	
}
