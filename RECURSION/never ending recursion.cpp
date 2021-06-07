#include<iostream>
using namespace std;
void fun1(){
	cout<<"never ending umar"<<endl;
	fun1();
}
int main(){
	fun1();
	return 0;
}
