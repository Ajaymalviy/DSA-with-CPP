#include<iostream>
#include<array>  //ye baad me kiya h manual array ko hatane k liye.
using namespace std;

int main(){

    // int arr[3]={1,32,4}; //this is my static arrya i can use inbuild array instead of this but this is also static 
    array<int,4>name ={3,5,6,7};
    int sizee = name.size();
    for (int i =0 ; i < sizee; i++){
        cout<<endl<<name[i]<<endl;
    }

    cout<<"array is empty or not "<<name.empty()<<endl;
    cout<<"element at index 2 is "<<name .at(2)<<endl;
    cout<<"first element of array is "<<name.front()<<endl;
    cout<<"last element of array is "<<name.back()<<endl;


    return 0;

}