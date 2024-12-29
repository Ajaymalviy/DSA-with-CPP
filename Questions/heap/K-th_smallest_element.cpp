#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int>arr={ 1,3,4,2,5,6,7};
int k =1;
int n= arr.size();
int k_element_sort(vector<int> &arr, int k , int n){
    priority_queue<int>pq;
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    for(int j=k; j<n; j++){
        if(arr[j]<pq.top()){
            pq.pop();
            pq.push(arr[j]);
        }
    }
    return pq.top();;

}
    
int main(){

    int result = k_element_sort(arr, k, n);
    cout << "The " << k << "th smallest element is: " << result << endl;
    return 0;
}