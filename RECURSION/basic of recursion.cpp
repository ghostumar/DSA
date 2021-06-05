#include<iostream>
using namespace std;
void fun1(){
	cout<<"fun1"<<endl;
}
void fun2(){
	cout<<"before fun1"<<endl;
	fun1();
	cout<<"After fun1"<<endl;
}
int main(){
	cout<<"before fun2"<<endl;
	fun2();
	cout<<"After the fun2";
	return 0;
}
