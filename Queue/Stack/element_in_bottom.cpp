#include<iostream>
using namespace std;
#include<stack>


void solve(stack<int>& s, int x){
        if (s.empty()){
            s.push(x);
            return;
        }

        int num=s.top();
        s.pop();

        solve(s,x);
        s.push(num);
        
}


stack<int>pushAtBottom(stack<int>& mystack, int x){
    solve(mystack, x);
    return mystack;    

}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    int x = 0;
    stack<int> result = pushAtBottom(s, x);

    // Printing stack (note: stack prints top to bottom)
    while (!result.empty()) {
        cout << result.top() << " ";
        result.pop();
    }

    return 0;
}