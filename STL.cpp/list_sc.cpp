#include<iostream>
#include<list> //this is refernce by doubly linked list here.
using namespace std;

int main(){
    list<int>l;
    l.push_back(2);
    l.push_back(4);
    l.push_front(10);
    cout<<"printing list like : "<<endl;
    for(int i : l){
        cout<<i<<" ";

    }cout<<endl;

    list<int>n(5,40);
    cout<<"printing list n like : "<<endl;
    for(int i :  n){
        cout<<i<<" ";

    }cout<<endl;    
    return 0;

}