 #include<iostream>
 using namespace std;
 int insert(int arr[],int CAP,int n,int pos,int x){
 	if(n==CAP){
 		return n;
	 }
	 int index=pos-1;
	 for(int i=n-1;i>=index;i--){
	 	arr[i+1]=arr[i];
	 }
	 arr[index]=x;
	 return n+1;
 }
 
 int main(){
 	int CAP=10;
 int arr[CAP],x,pos,n=3;
 
 arr[0]=20,arr[1]=5,arr[2]=10;
 cout<<"Array before insertion"<<endl;
 for(int i=0;i<n;i++){
 	cout<<arr[i]<<" ";
 }
 cout<<"Enter the element and position to be inserted"<<endl;
 cin>>x>>pos;
 n=insert(arr,CAP,n,pos,x);
 cout<<"Array after insertion"<<endl;
 for(int i=0;i<n;i++){
 	cout<<arr[i]<<" ";
 }
 return 0;
 
 	
 }
