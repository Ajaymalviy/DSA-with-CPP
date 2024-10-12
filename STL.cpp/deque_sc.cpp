#include<iostream>
#include<deque>
using namespace std;


//double ended queue where we can add any element from both ends 
int main(){
    //same as vector
    deque<int> dec;
    dec.push_back(3);
    dec.push_back(6);
    dec.push_front(76);

    for (int i :dec){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"now the size of dequeue is "<<dec.size()<<endl;
    cout<<"is empty or not "<<dec.empty()<<endl;
    cout<<"now we are appliyin erase function"<<endl;
    dec.erase(dec.begin(), dec.begin()+1);
    for (int i :dec){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}