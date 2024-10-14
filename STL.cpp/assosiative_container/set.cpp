// behindly sorted by BST 
//sorted order me element milte hai sirf insertion or deletion hi posible hai na ki updation

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);

    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(98);
    for(auto i :s){
        cout<<"value : "<<i<<endl;
    }

    cout<<"is -3 present "<<s.count(-3)<<endl;

    return 0;
    


}