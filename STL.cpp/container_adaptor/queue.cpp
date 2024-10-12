#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
    q.push("ajay");
    q.push("name");
    q.push("hai");
    cout<<"element at first postion is "<<q.front()<<endl;
    q.pop();
    cout<<"element at first position after pop is "<<q.front()<<endl;
    cout<<"size after pop one element is "<<q.size()<<endl;
    cout<<"empty or not "<<q.empty();
}