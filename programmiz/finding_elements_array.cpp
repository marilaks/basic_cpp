//finding elements in an array
#include<iostream>
using namespace std;

int main(){
	
	int n[6],key;
	cout<<"enter the elements"<<endl;
	//getting array from user
	for(int i=0;i<6;i++){
		cin>>n[i];
	}
	
	//getting key element
	cout<<"enter the key element"<<endl;
	cin>>key;
	
	//searching the key element
	for(int j=n[0];j<6;j++){
		
		if(key == n[6]){
			cout<<"element found at = "<<j<<endl;
			break;
		}
	}
	/*
	if(j == n[6] ){
		
		cout<<"element not found"<<endl;
	}
	*/

}
