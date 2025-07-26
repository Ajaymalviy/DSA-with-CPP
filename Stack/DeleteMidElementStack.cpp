#include<iostream>
#include<stack>
using namespace std;

//important thing is that if i pass stack<int>&s, without & then we have to manually store every time of stack in some variable like x=funciton
// if we passsing mpercent then don't need to do this shitt we actually using reference not copying value .
//stack<int>s pass kare to ye pass by value .
stack<int>deleteMid(stack<int>&s, int size, int count){
    if(count==size/2){
        s.pop();
        return s;
    }
    int num=s.top();
    s.pop();
    
    
    //recursive call
    deleteMid(s, size, count+1);
    s.push(num);
 
    
    return s;

}


int main(){    
    int count=0;
    stack<int>s;
    s.push(4);
    s.push(56);
    s.push(4);
   
    s.push(43);
    s.push(6); 
     s.push(11); 
    s.push(0);
    int size=s.size();              
    deleteMid(s, size, count);
    while(!s.empty()){
        cout<<""<<s.top()<<" :";
        s.pop();
    }

}    