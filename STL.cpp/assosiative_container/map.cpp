#include<iostream>
#include<map>  //implemented by balance tree or red black tree.
using namespace std;

int main(){

    map<int,string>m;
    m[1]="Cat";
    m[2]="Banana";
    m[0]="Apple";
    m.insert({1,"Dog"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"key 2 is present or not "<<m.count(2)<<endl;


    return 0;

}