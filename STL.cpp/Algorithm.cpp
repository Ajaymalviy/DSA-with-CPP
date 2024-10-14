#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    for (auto i:v){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"we are finding binary search using algo"<<endl;
    cout<<"we find 3 in vector using binary search-->"<<binary_search(v.begin(),v.end(),0)<<endl;       
    cout<<"lets rotate this vector"<<endl;
    rotate(v.begin(),v.begin()+1, v.end());
    for (auto i:v){
        cout<<i<<endl;
    }cout<<endl;    

    int a=3;
    int b=4;
    cout<<"max"<<max(a,b)<<endl;
    cout<<"min"<<min(a,b)<<endl;
    cout<<"Before swapping the value of a and b is like "<<endl;
    cout<<"a-->"<<a<<"  "<<"b-->"<<b<<endl;
    swap(a,b);
    cout<<"now after swapping the value of a and b is like "<<endl;
    cout<<"a-->"<<a<<"  "<<"b-->"<<b<<endl;

    cout<<endl;

    string abcd = "ajju";
    cout<<"my string is looking like -->"<<abcd<<endl;
    reverse(abcd.begin(), abcd.end());
    cout<<"Now after reverse like-->"<<abcd<<endl;

    //sort function bhi bana hota hai jo ki intro sort by implemented hota hai.
    //intro sort combo hai heap quick or insertion sort teeno ka.
    return 0;
}