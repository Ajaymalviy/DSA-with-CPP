#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={2,3,4,5,6,1};
    int len=arr.size();
    int temp=arr[0];
    for(int i=1; i<len; i++){
        arr[i-1]=arr[i];
    }
    arr[len-1]=temp;
    for(int j=0; j<len; j++){
        cout<<arr[j]<<" ";
    }
    return 0; 
}
