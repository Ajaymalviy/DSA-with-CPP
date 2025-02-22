#include<iostream>
using namespace std;
int arr[5]={2,3,4,5,1};
int ele=arr[0];
int main(){
	for (int i=0;i<5;i++){
		if(arr[i]>ele){
			ele=arr[i];
		}
	}
	cout<<ele;
}	
