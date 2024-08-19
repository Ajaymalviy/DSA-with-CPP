#include<iostream>
using namespace std;
int main(){

	int arr[3][3]={
		{2,3,4},
		{5,6,7},
		{8,1,9}
	};	
	int row = 3;
	int col = 3;

	for(int i=0; i<3; i++){
		for (int j=0; j<3 ; j++){
			cout<<arr[i][j];

		}
		cout<<endl;
	}

	for(int i=0;i<row; i++){
		for(int j=i+1;j<col; j++){
			swap(arr[i][j], arr[j][i]);

		}
	}

	for(int i=0; i<row; i++){
		for (int j=0; j<col ; j++){
			cout<<arr[i][j];

		}
		cout<<endl;
	}

	return 0;
}