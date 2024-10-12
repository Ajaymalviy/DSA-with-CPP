#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(5);
    cout<<"top element on stack is : "<<s.top()<<endl;
    s.pop();
    cout<<"now top element is :"<<s.top()<<endl;
    cout<<"size of stack is : "<<s.size()<<endl;
    cout<<"empty or not : "<<s.empty();
    return 0;

}