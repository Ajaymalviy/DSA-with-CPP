#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>vec={2,3,4};
    cout<<"capacity of vector is:" <<vec.capacity();
    cout<<"size of vector is:" <<vec.size()<<endl;

    //if i want to add more in this 
    vec.push_back(5);
    cout<<"capacity of vector is:" <<vec.capacity();
    cout<<"size of vector is:" <<vec.size()<<endl;
   //front or back or at chalega idr bhi
    

    //using iterator
    cout<<"before clear vector is looking like ";
    for(int i : vec){
        cout<<i<<" ";
    }cout<<endl;

    //clear vector
    vec.clear();
    cout<<"after clear capacity of vector is:" <<vec.capacity()<<endl;
    cout<<"after clear size of vector is:" <<vec.size()<<endl;

    return 0;
}