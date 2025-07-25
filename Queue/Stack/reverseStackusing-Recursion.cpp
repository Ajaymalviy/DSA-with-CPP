#include<iostream>
using namespace std;
#include<stack>

void putAtBottomUp(stack<int>& st, int x){
    if(st.empty()){
        st.push(x);
        return ;

    }
    int n=st.top();
    st.pop();

    //recursion for this bottomaddition.
    putAtBottomUp(st, x);
    st.push(n);
}


void logics(stack<int>& st){
    if(st.empty())
        return;
    int ele=st.top();
    st.pop();
    
    //recursion call handle
    logics(st);
    putAtBottomUp(st,ele);
}


void reverseStack(stack<int>& st){
    logics(st);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
